#include <bits/stdc++.h>
using namespace std;

// Class that contains methods to check palindrome with at most one deletion
class Solution {
public:

    // Helper function: checks if substring s[left..right] is a palindrome
    bool validation(string s, int left, int right) {
        while (left < right) {
            // If mismatch found ? not a palindrome
            if (s[left] != s[right]) {
                return false;
            }
            left++;   // move left pointer forward
            right--;  // move right pointer backward
        }
        // If loop finishes, substring is palindrome
        return true;
    }

    // Main function: checks if string can become palindrome with at most one deletion
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        // Two-pointer approach: check from both ends
        while (left < right) {
            if (s[left] != s[right]) {
                // Case: mismatch found
                // Two possibilities ? remove one character
                // 1. Skip the left character
                // 2. Skip the right character
                return validation(s, left + 1, right) || validation(s, left, right - 1);
            }
            // If characters match, move both pointers closer
            left++;
            right--;
        }

        // If loop completes with no issues, string is already a palindrome
        return true;
    }
};

int main() {
    Solution sol;
    cout << "Enter a string:" << endl;
    string s;
    cin >> s; // take input string

    // Check if the string can be a palindrome with =1 deletion
    if (sol.isPalindrome(s)) {
        cout << "Palindrome is possible with at most one character deletion";
    } else {
        cout << "Palindrome not Possible with one char deletion";
    }

    return 0;
}

