class Solution {
public:

    string reorganizeString(string s) {
        unordered_map<char, int> count_map;
        for (char c : s) {
            count_map[c]++;
        }
        
       priority_queue<std::pair<int, char>> max_heap;
        for (const auto& [ch, freq] : count_map) {
            // Edge Case Check: If any character takes up more than half the string (+1), it's impossible
            if (freq > (s.length() + 1) / 2) {
                return "";
            }
            max_heap.push({freq, ch});
        }
        
        string result = "";
        
        
        while (max_heap.size() >= 2) {
            auto [freq1, ch1] = max_heap.top();
            max_heap.pop();
            
            auto [freq2, ch2] = max_heap.top();
            max_heap.pop();
            
            result += ch1;
            result += ch2;
            
            // If they still have occurrences left, decrease count and push back
            if (--freq1 > 0) {
                max_heap.push({freq1, ch1});
            }
            if (--freq2 > 0) {
                max_heap.push({freq2, ch2});
            }
        }
        
        //  Handle the leftover single character if the heap has one element left
        if (!max_heap.empty()) {
            auto [freq, ch] = max_heap.top();
            result += ch;
        }
        
        return result;
    }
};