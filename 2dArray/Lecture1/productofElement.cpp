// write programme to print product of element from the 2d array
#include<iostream>
using namespace std;
int main(){
    int arr[2][3] = {1, 2, 3, 2, 5, 6};
   int product = 1;
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            product *= arr[i][j];   
            }
        }
        cout << product;
    }
    

