#include <iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int key = 30;
    bool found = false;

    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            cout << "Key found at index:"<< i<< endl;
            found = true;
            break;
        }
    }
    if(!found)
    cout<<"Not found";
    return 0;
}

