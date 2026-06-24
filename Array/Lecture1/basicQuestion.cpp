//given an array of marks of students, if the marks of any student is less than 35 then print
// it's  roll number(roll no. here refer to the index of array)size
#include <iostream>
using namespace std ;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n ;
    int arr[n] ;

    for(int i=0;i<=n-1;i++){
        cin>>arr[i] ;
        
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]<35){
            cout << i << " " ;
        }
    }

}

