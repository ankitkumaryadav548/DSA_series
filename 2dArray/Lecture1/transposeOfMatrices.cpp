#include <iostream>
using namespace std;
int main(){
   int m;
   cout << "Enter no. of rows";
   cin >> m;
   int n;
   cout << "Enter no. of columns";
   cin >> n;
   int arr[m][n];

    //in transpose => we have to interchange loop i.e column became outer loop and rows loop became inner
   //taking input
    for(int i=0;i<2;i++){  // rows
        for(int j=0;j<3;j++){ // column
            cin >> arr[i][j] ;

        }
    }
    cout << endl;
    //print
    for(int i=0;i<2;i++){  // rows
        for(int j=0;j<3;j++){ // column
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    //taking transpose
    for(int j=0;j<3;j++){  // column
        for(int i=0;i<2;i++){ // rows
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<2;i++){  // rows
        for(int j=0;j<3;j++){ // column
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}