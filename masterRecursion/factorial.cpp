#include<iostream>
using namespace std;

int fact(int n){
    // base case 
     if(n == 0){
        return 1;
     }
      return n*fact(n-1);
}

int main(){
    int n;
    cout << "Enter n : ";;
    cin >> n;
    

    int ans = fact(n);
    cout << "factorial of " << n << " is : " << ans << endl;
}