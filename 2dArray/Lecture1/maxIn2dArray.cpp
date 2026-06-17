// write programme to print largest element from the 2d array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[2][3] = {1, 2, 31, 42, 5, 6};
    int max = INT_MIN ;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            if(max < arr[i][j]){
                max = arr[i][j];    
            }
        }
    }
    cout << max;
    cout << endl;

}