//Find element x in the array. Take array and x as input
#include <iostream>
using namespace std ;
int main(){
    int n;
    cout << "Enter element of array: " ;
    cin >> n;
    int arr[n];
    for(int i=0; i<= n-1;i++){
        cin>> arr[i];
    }
    //we will use checkmark for searching due to 2 reasons =>
    // 1.multilpe same element is present then it will print mupliple times
    // 2.we can not write else condition in code because it will present again and again
    int x ;  // to find element from the array
    cout << "Enter element to find from array: ";
    cin >> x ;
    for(int i = 0;i<=n-1;i++){
        if(arr[i]==x){
            cout << "element found at index: " << i  << endl;
        }
        else
        cout << "element is not present" << endl;

    }

}
//    due to following reason we have to use check mark(like bool flag)
    // element found at index: 0
    // element is not present
    // element found at index: 2
    // element found at index: 3
    // element is not present

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of element: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter element to find in array: ";
    cin >> x;
    bool flag = false; // check mark
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == x)
            flag = true;
    }
    if (flag == true)
        cout << "element found " << endl;
    else
        cout << "Not present";
}

//practise

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter no. of element you want to put: ";
    cin >> n;
    int arr[n];
    int x;// to find element in the array
    cout << "Enter element to find in the array: ";
    cin >> x;
    cout << "Enter element of array: ";
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }
    bool flag = false ;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x)
        flag = true ;
    }
    if(flag==true)
    cout << "element found ";
    else
    cout << "Not found";

}