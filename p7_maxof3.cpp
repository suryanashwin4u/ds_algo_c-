#include<iostream>
using namespace std;
int main(){
    int a,b,c,max=0;
    cout << "Enter a:"<<endl;
    cin >> a;
    cout << "Enter b:"<<endl;
    cin >> b;
    cout << "Enter c:"<<endl;
    cin >> c;

    if(a>b){
        if(a>c){
            max = a;
        }else{
            max = c;
        }
    }else{
        if(b>c){
            max = b;
        }else{
            max = c;
        }
    }

    cout << "Max of a,b,c is :" << max;
    return 1;
}