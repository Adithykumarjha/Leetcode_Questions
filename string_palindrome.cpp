#include <iostream>
#include <string>
#include <algorithm>  // for std::reverse
#include <cctype>     // for std::isalnum and std::tolower

using namespace std;

// Function to check if a sentence is a palindrome
bool isPalindrome(const string& s) {
    string cleaned;

    // Clean the input: keep only alphanumeric and convert to lowercase
    for (char c : s) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }

    // Reverse the cleaned string
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());

    // Compare original cleaned string with its reverse
    return cleaned == reversed;
}

// Driver code
int main() {
    // Test cases
    string testCases[] = {
        "A man, a plan, a canal: Panama!",
        "Was it a car or a cat I saw?",
        "No lemon, no melon",
        "Hello, world!",
        "12321",
        "Not a palindrome"
    };

    // Test each case
    for (const string& input : testCases) {
        cout << "Checking: \"" << input << "\"\n";
        if (isPalindrome(input))
            cout << " Result: It is a palindrome.\n";
        else
            cout << " Result: Not a palindrome.\n";
        cout << "----------------------------------\n";
    }

    return 0;
}

