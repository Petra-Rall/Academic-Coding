#include<iostream>
using namespace std;
int main()
{
    string hello = "Hello";
    string world = "world!";
    string msg = hello + " " + world;
    cout << msg << endl;
    msg[0] = 'h';
    cout << msg << endl;
    cout << msg.size() << endl;
    return 0;
}