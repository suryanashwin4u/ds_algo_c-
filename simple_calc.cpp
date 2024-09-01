#include<iostream>
using namespace std;
int main(){
    char option;
    int a,b;

    cout <<"Enter two numbers:";
    cin >> a;
    cin >> b;
    
    cout << "Enter Operator from (+,-,*,/):";
    cin >> option;

    switch (option)
    {
        case '+':
            cout << "Result:" << a+b;
            break;
        case '*':
            cout << "Result:" << a*b;
            break;
        case '/':
            cout << "Result:" << a/b;
            break;
        case '-':
            cout << "Result:" << a-b;
            break;
        default:
            cout<<"wrong option selected";
            break;
    }
    return 0;
}