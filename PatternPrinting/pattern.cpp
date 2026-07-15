#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int m;
    cout << "Enter a Number: ";
    cin >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << j;
        }
        cout << endl;
    }
    
}