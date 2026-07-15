#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n ;
    int mid = n/2+1 ;      // where n= odd 
    for(int i= 1;i <=n ;i++){    // for even use n = n/2 
        for(int j= 1;j<=n; j++){
            if(i==mid || j==mid) cout << "*";
            else 
            cout << " ";
        }
        cout << endl;
    }
}