#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    while(num>0){
        cout << "Enter number again: ";
        cin >> num;
    }

    return 0;
}