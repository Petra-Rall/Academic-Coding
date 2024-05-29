#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<char> qu;
    string str;
    char prev = '\0';

    getline(cin, str);

    for (char c : str) {
        if (c != prev) {
            qu.push(c);
            prev = c;
        }
    }

    while (!qu.empty()) {
        cout << qu.front();
        qu.pop();
    }

    return 0;
}
