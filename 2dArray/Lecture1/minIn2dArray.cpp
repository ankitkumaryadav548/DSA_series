// write programme to print smallest element from the 2d array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[2][3] = {1, 2, 31, 42, 5, 6};
    int min = INT_MAX ;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            if(min > arr[i][j]){
                min = arr[i][j];    
            }
        }
    }
    cout << min;
    cout << endl;

}