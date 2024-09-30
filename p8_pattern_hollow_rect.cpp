#include<iostream>
using namespace std;
int main(){
    int rows, columns;
   
    cout << "Enter Rows and Column:";
    cin >> rows >> columns;

    for(int i = 0; i <= rows; i++){
        for(int j = 0; j <= columns; j++){
            //print * for first row and first column and last row and last column
            if(i == 0 || i == rows || j == 0 || j == columns){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}