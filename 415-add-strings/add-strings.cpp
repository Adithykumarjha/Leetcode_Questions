class Solution {
    string add(string num1 , string num2)
    {
        string ans = "";
        int num1_index = num1.size() - 1;
        int num2_index = num2.size() - 1;
        int carry = 0 , sum = 0;
        while(num2_index != -1)
        {
            sum = ( num1[num1_index] - '0' ) + ( num2[num2_index] - '0' ) + carry;
            char c = (sum % 10) + '0';
            ans.push_back(c);
            carry = sum / 10;
            num1_index--;
            num2_index--;
        }
        while(num1_index != -1)
        {
            sum = ( num1[num1_index] - '0' ) + carry;
            char c = (sum % 10) + '0';
            ans.push_back(c);
            carry = sum / 10;
            num1_index--;
        }
        if(carry)
            ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
public:
    string addStrings(string num1, string num2) {
        if(num1.size() >= num2.size())
            return add(num1,num2);
        else
             return add(num2,num1);
        
    }
};