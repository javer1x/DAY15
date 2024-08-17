#include <iostream>
#include <string>
#include <cctype>  
#include <algorithm>  
using namespace std;

bool isPalindrome(const string &str) {
    
    string cleaned;
    for (char ch : str) {
        
        if (isalnum(ch)) {
            cleaned += tolower(ch);
        }
    }

    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());

    return cleaned == reversed;
}

int main() {
    string test1 = "A man, a plan, a canal, Panama";
    string test2 = "Hello, World!";

    cout << "\"" << test1 << "\" is ";
    cout << (isPalindrome(test1) ? "a palindrome." : "not a palindrome.") << endl;

    cout << "\"" << test2 << "\" is ";
    cout << (isPalindrome(test2) ? "a palindrome." : "not a palindrome.") << endl;

    return 0;
}