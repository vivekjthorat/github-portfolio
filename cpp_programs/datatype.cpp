#include<iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter your Roll no.: ";
    cin >> x;

    string str;
    cout << "Enter your full name: ";
    getline(cin >> ws, str);

    cout << "------------------------" << "\n";
    cout << "Name: " << str << "\n";
    cout << "Roll no.: " << x << "\n";

    return 0;
}