#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, a;
    cin >> n;
    vector<long long int> v(n);
    
    for(long long int i = 0; i < n; i++) {
        cin >> v[i];
    }

    bool isPalindrome = true;

    for(long long int i = 0, j = n - 1; i < j; i++, j--) {
        if(v[i] != v[j]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
