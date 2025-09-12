

#include <bits/stdc++.h>
using namespace std;

bool isBalanced(const string& s) {
  
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]); 
        } 
      
        else {

            if (!st.empty() && 
                ((st.top() == '(' && s[i] == ')') ||
                 (st.top() == '{' && s[i] == '}') ||
                 (st.top() == '[' && s[i] == ']'))) {

                
                st.pop(); 
            }
            else {
                
                
                return false; 
            }
        }
    }
    
    return st.empty();
}

int main() {  
    string s = "{([])}}]";
    if (isBalanced(s))
        cout << "Balanced!!";
    else
        cout << "Not Balanced !!";
    return 0;
}
