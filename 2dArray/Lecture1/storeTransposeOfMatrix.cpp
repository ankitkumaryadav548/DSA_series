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
    for(int i=0;i<m;i++){  // rows
        for(int j=0;j<n;j++){ // column
            cin >> arr[i][j] ;

        }
    }
    cout << endl;
    //print
    for(int i=0;i<m;i++){  // rows
        for(int j=0;j<n;j++){ // column
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    //taking transpose
    // for(int j=0;j<n;j++){  // column
    //     for(int i=0;i<m;i++){ // rows
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for(int i=0;i<m;i++){  // rows
    //     for(int j=0;j<n;j++){ // column
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //store the transpose
    int t[n][m];
    for(int i=0;i<n;i++){  // rows
        for(int j=0;j<m;j++){ // column
            t[i][j] = arr[j][i];
        }
        cout << endl ;
    }
    cout << endl;
    //printing transpose matrix
    for(int i=0;i<n;i++){  
        for(int j=0;j<m;j++){ 
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    
}