#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    const int n = 50;
    int x = 0;
    char word[n], a[n];

    cout << "Enter word: ";
    cin >> word;

    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        a[i] = word[length - 1 - i];
    }

    cout << "Backwards: " << a << endl;

    for (int i = 0; i < length; i++) {
        if (tolower(a[i]) == tolower(word[i])) {
            x++;
        }
    }

    if (x == length) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
