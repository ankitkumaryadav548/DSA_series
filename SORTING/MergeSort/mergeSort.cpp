// steps for merge sort
//1.break array into 2 parts then copy and paste
//2.magic means call function recursively
//3.merge two sorted array into single sorted array

// #include<iostream>
// #include<vector>
// using namespace std;

// merge function will merge two sorted array
// void merge(vector<int>&a , vector<int>&b , vector<int>&res){
//     int i = 0;  //a
//     int j = 0;  //b
//     int k = 0;  //res

//     while(i<a.size()  && j<b.size()){
//         if(a[i]<=b[j]){
//             res[k] = a[i];
//             i++ ;
//             k++;
//         }
//         else { // a[i]>b[j]
//             res[k] = b[j];
//                 j++ ;
//                 k++ ;
//         }
//         if(i==a.size()){  //a is at end ;
//             while(j<b.size()){
//                 res[k++] = b[j++];
//                 // k++ ;
//                 // j++;
//             }
//         }
//         if(j==b.size()){ // b is at end ;
//             while(i<a.size()){
//                 res[k++] = a[i++];
//                 // k++ ;
//                 // i++;
//             }
//         }
//     }
// }

// void mergeSort(vector<int>&v){
//     int n = v.size();    // 6, 4, 2, 7, 8, 3, 1
//     if(n==1) return ;
//     int n1 = n/2;        // n1 = 3
//     int n2 = n - n/2 ;   // n2 = 4
//     vector<int> a(n1) , b(n2) ;
//     //copy paste
//     for(int i = 0;i<n1;i++){
//         a[i] = v[i];
//     }
//     for(int i = 0;i<n2;i++){
//         b[i] = v[n1+i];
//     }

//     //magic
//     mergeSort(a);
//     mergeSort(b);

//     //merge
//     merge(a,b,v);


    // to clear temporary space from the vector so that Space complexiy from 0(nlogn) brcome 0(n)
    
    // a.clear();
    // b.clear();


// }

// int main(){
//     int arr[] = {6, 4, 2, 7, 8, 3, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v(arr , arr+n);
//     for(int i=0; i<n;i++){ // printing vector
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     mergeSort(v);  //calling funcion 

//     for(int i=0; i<n;i++){  //again printing 
//         cout << v[i] << " ";
//     }
// }


//practise of merge sort

// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int> &a , vector<int> &b , vector<int> &res){
//     int i = 0; // a
//     int j = 0; // b
//     int k = 0; // c
//     // int n1 = sizeof(a);
//     // int n2 = sizeof(b);
//     while(i<a.size() && j < b.size()){
//         if(a[i]<b[j]){
//             res[k] = a[i] ;
//                 i++ ;
//                 k++;
            
//         }
//         else{  // if(a[i]>b[j])
//                 res[k] = b[j];
//                 j++ ;
//                 k++ ;
//         }
//     }

//         if(i==a.size()){
//             while(j <b.size()){
//                 res[k] = b[j];
//                 j++ ;
//                 k++ ; 
//             }
//         }
//         if(j==b.size()){
//             while(i <a.size()){
//                 res[k] = a[i];
//                 i++ ;
//                 k++ ; 
//             }
//         }
    

// }
// void mergeSort(vector<int>&v){
//     int n = v.size();
//     if(n==1) return ;
//     int n1 = n/2 ;
//     int n2 = n - n/2;
//     vector<int> a(n1),b(n2);
//     for(int i=0;i<n1;i++){
//         a[i] = v[i];  // half part is stored in a[i]
//     }
//     for(int i=0;i<n2;i++){
//         b[i] = v[n1+i];  // next half part is stored in b[i]
//     }

//     // magic
//     mergeSort(a);
//     mergeSort(b);

//     // merging two sorted array
//     merge(a,b,v);

//     //optional 
//     // before space complexity of merge sort was 0(nlogn)
//     //But now
//     // after clearing all extra temporary vector from this sorting Space Complexity become 0(n)
//     //clear() is usually used to empty the temporary array a before storing the result of the next merge.
//     a.clear();
//     b.clear();

    
// }

// int main(){
//     int arr[] = {4,2,9,7,1,3,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int>v(arr , arr+n);
//     for(int i=0;i<n;i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     mergeSort(v) ;

//     for(int i=0;i<n;i++){
//         cout << v[i] << " ";
//     }
// }




//practise of merge sort
// 1.splitting of array into 1st half and 2nd half
// 2.magic => calling function recursively
// 3. combining two sorted array into 2 single array 

#include <iostream>
#include <vector>
using namespace std;

//combing two sorted array into single array
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i = 0, j=0 , k =0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
        res[k] = a[i];
        i++ ;
        k++ ;
    }
    else{ //b[j]<a[i]
        res[k] = b[j];
        j++ ;
        k++ ;
    }

    }
    
    if(i==a.size()){
        while(j<b.size()){
            res[k] = b[j];
            j++ ;
            k++ ;
        }    
    }
     else //(j==b.size())
     {
        while(i<a.size()){
            res[k] = a[i];
            i++ ;
            k++ ;
        }
    }
    
}

void mergeSort(vector<int>&res){
    int n = res.size();
    if(n <= 1) return ;
    int n1 = n/2 ;
    int n2 = n - n/2 ;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++){
        a[i] = res[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = res[n1+i];
    }
    mergeSort(a);  //magic 
    mergeSort(b);  //magic

    merge(a,b,res);
}

int main(){
    int arr[] = {7,2,5,9,6,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>res(arr,arr+n);

    for(int i=0;i<n;i++){
        cout << res[i] << " ";
    }
    cout << endl;

    mergeSort(res);
    for(int i=0;i<n;i++){
        cout << res[i] << " ";
    }
}
