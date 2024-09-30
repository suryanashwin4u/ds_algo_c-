#include<iostream>
using namespace std;
int main(){
    int range,i,num,start_num,end_num;

    cout << "Enter Starting and ending Numbers:";
    cin >> start_num >> end_num;

    for(num = start_num; num <= end_num; num++){
        for(i = 2; i < num; i++){
            if(num % i == 0){
                break;
            }
        }
        if(i == num){
            cout << num << " ";
        }
    }
     
    return 0;
}