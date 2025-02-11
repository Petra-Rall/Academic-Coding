#include <iostream>
#include <string>

using namespace std;

string bin(int n) {
    if (n == 0) {
        return "0";  // Return "0" if the number is 0
    }

    // Recursively call bin for the smaller number
    string binNum = bin(n / 2);

    // Add MSB of current number to the binary string
    binNum.push_back(n % 2 + '0');
    
    return binNum;
}

int main() {
    int num = 10;
    cout << bin(num) << endl;  // Should print "1010"
    return 0;
}
