#include<iostream>
using namespace std;

int square_op(int x) {
    
    return x * x;
}

void square(){
    int x;
    cout << "Enter a number: ";
    cin >> x ;
    cout << "The Square of " << x << " is: " << square_op(x) << "\n";
}

int main() {

    square();
    return 0;
}