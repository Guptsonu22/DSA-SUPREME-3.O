#include<iostream>
using namespace std;

int main(){
    
    int num;

    cout << "Enter number : ";
    cin >> num;

    if(num > 0){
        cout << "number is Positive " << endl;
    }
    else {

        if(num < 0){
            cout << "number is Negative " << endl;
        }
        else{

            cout << "Number is Zero " << endl;
        }
    }

    return 0;
}