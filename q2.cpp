#include <iostream>
#include <string>
using namespace std;

bool testPalindromeHelper(const string &str, int start, int end)
{
    if (start >= end) {
        return true;
    }

    if (str[start] != str[end]) {
        return false;
    }

    return testPalindromeHelper(str, start + 1, end - 1);
}

bool testPalindrome(const string &str)
{
    return testPalindromeHelper(str, 0, str.size() - 1);
}

int main()
{
    cout << "Enter a string: ";
    string input;
    getline(cin, input);

    if (testPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome.\n";
    } else {
        cout << "\"" << input << "\" is NOT a palindrome.\n";
    }

    return 0;
}
