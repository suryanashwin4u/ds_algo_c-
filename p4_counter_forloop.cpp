#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    
    cout << "Enter a Number: ";
    cin >> num;

    for(int i = 1; i < num; i++){
        sum = sum + num;
    }

    cout << "Sum of All Numbers: "<<sum;

    return 0;
}