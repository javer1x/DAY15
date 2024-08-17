#include <iostream>
#include <vector>
#include <string>
using namespace std;

void replaceSubstrings(string &text, const vector<pair<string, string>> &replacements) {
    for (const auto &pair : replacements) {
        const string &search = pair.first;
        const string &replace = pair.second;
        
        size_t pos = 0;
        while ((pos = text.find(search, pos)) != string::npos) {
            
            text.replace(pos, search.length(), replace);
            
            pos += replace.length();
        }
    }
}

int main() {

    string text = "Hello, world! The world is beautiful.";
    
    vector<pair<string, string>> replacements = {
        {"world", "universe"},
        {"beautiful", "amazing"}
    };

    cout << "Original text: " << text << endl;

    replaceSubstrings(text, replacements);
    
    cout << "Modified text: " << text << endl;

    return 0;
}
