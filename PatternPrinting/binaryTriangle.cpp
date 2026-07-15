#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    // int a = 5;    // Method-1               //  1
    // for(int i=1;i<=n;i++){                  //  01
    //     if(i%2!=0)  a=1;                    //  101
    //     else  a= 0;                         //  0101

    //     for(int j=1;j<=i;j++){
    //         cout << a;
    //         // flipping
    //         if(a==1) a=0;
    //         else a=1;
    //     }
    //     cout << endl;
    // }

    //Method-2
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0)  cout << 1;
            else
            cout << 0;
        }
        cout << endl;
    }
    
}