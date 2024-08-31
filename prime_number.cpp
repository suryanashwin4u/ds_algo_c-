#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout << "Enter Number to check:";
    cin >> num;

    for(i = 2; i < num; i++){
        if(num % i == 0){
            cout << "Not a Prime Number";
            break;
        }else{
            continue;
        }
    }

    if(i == num){
        cout << "Prime Number";
    }

    return 0;
}