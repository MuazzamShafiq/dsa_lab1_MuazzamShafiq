#include <iostream>
#include <string>
using namespace std;

int findSubstring(string text, string pattern) {

    if (pattern.empty()) return 0;  //for empty pattern

    int size_t = text.size();
    int size_p = pattern.size();

    for (int i = 0; i <= size_t - size_p; i++) {
        int j = 0;
        while (j < size_p && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == size_p) return i; //if found
    }
    return -1; //if not found
}

int main() {
    
cout << "Pattern at begining: " << findSubstring("Muazzam Shafiq", "Muazzam") << endl;
cout << "Pattern at end: " << findSubstring("Muazzam Shafiq", "Shafiq") << endl;
cout << "Empty pattern: " << findSubstring("Muazzam Shafiq", "") << endl;
cout << "Pattern not present: " << findSubstring("Muazzam Shafiq", "Ali") << endl;

    return 0;
}
