#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";           // 1
    cin >> n;                             // 2 3
    int k = 1;                            // 4 5 6 
    for(int i=1;i<=n;i++){                // 5 6 7 8 
        for(int j=1;j<=i;j++){
            cout << k << " ";
            k++ ;
        }
        cout << endl;
    }
    
}