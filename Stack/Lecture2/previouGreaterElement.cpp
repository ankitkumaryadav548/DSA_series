// //find greater previous element from the array

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int arr[] = {3,1,2,5,4,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     int pge[n];
//     pge[0] = -1;
//     // cout << pge[0];
//     stack<int>st;
//     st.push(arr[0]);
//     for(int i=1;i<n;i++){
//         while(st.size()>0 && st.top()<=arr[i]) st.pop();  //pop
//         if(st.size()==0) pge[i] = -1;
//         else pge[i] = st.top();  //store ans
//         st.push(arr[i]);  //push
//     }

//     for(int i=0;i<n;i++){
//         cout << pge[i] << " ";
//     }

// }

//practise => previous greater element

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,5,7,1,3,7,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    stack<int>st;
    int pge[n];
    pge[0] = -1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]) st.pop();  //pop
        if(st.size()==0) pge[i] = -1;    
        else pge[i] = st.top();  //store ans
        st.push(arr[i]); //push
    }
    for(int i=0;i<n;i++){
        cout << pge[i] << " ";
    }


}

