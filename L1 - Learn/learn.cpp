#include <iostream>
using namespace std;

int main() {    
    int number;

    cin >> number;

    string c;
    getline(cin, c);
    cout << "String is: " << c << endl;
    cout << "You entered " << number;    
    return 0;
}