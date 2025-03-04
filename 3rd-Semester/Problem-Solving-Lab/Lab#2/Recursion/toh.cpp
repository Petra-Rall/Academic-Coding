// C++ recursive function to
// solve tower of hanoi puzzle
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod,
                  char aux_rod)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << from_rod << " " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// Driver code
int main()
{
    int N;
    cin >> N;

    // 1, 2 and 3 are names of rods
    cout << pow(2, N) - 1 << endl;
    towerOfHanoi(N, '1', '3', '2');
    return 0;
}

