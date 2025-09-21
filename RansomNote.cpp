#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mpp;
        int n = ransomNote.size();
        int m = magazine.size();
        int i = 0;

        // Count characters in ransomNote
        while (i < n) {
            mpp[ransomNote[i]]++;
            i++;
        }

        // Use characters from magazine
        i = 0;
        while (i < m) {
            if (mpp.find(magazine[i]) != mpp.end()) {
                mpp[magazine[i]]--;
                if (mpp[magazine[i]] == 0)
                    mpp.erase(magazine[i]);
            }
            i++;
        }

        return mpp.size() == 0;
    }
};

int main() {
    Solution obj;

    // Test case 1
    string ransomNote = "aab";
    string magazine = "baa";

    bool result = obj.canConstruct(ransomNote, magazine);

    if (result)
        cout << "Can construct ransom note " << endl;
    else
        cout << "Cannot construct ransom note " << endl;

    return 0;
}

