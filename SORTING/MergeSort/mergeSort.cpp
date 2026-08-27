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

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &a , vector<int> &b , vector<int> &res){
    int i = 0; // a
    int j = 0; // b
    int k = 0; // c
    // int n1 = sizeof(a);
    // int n2 = sizeof(b);
    while(i<a.size() && j < b.size()){
        if(a[i]<b[j]){
            res[k] = a[i] ;
                i++ ;
                k++;
            
        }
        else{  // if(a[i]>b[j])
                res[k] = b[j];
                j++ ;
                k++ ;
        }
    }

        if(i==a.size()){
            while(j <b.size()){
                res[k] = b[j];
                j++ ;
                k++ ; 
            }
        }
        if(j==b.size()){
            while(i <a.size()){
                res[k] = a[i];
                i++ ;
                k++ ; 
            }
        }
    

}
void mergeSort(vector<int>&v){
    int n = v.size();
    if(n==1) return ;
    int n1 = n/2 ;
    int n2 = n - n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i] = v[i];  // half part is stored in a[i]
    }
    for(int i=0;i<n2;i++){
        b[i] = v[n1+i];  // next half part is stored in b[i]
    }

    // magic
    mergeSort(a);
    mergeSort(b);

    // merging two sorted array
    merge(a,b,v);

    //optional 
    // before space complexity of merge sort was 0(nlogn)
    //But now
    // after clearing all extra temporary vector from this sorting Space Complexity become 0(n)
    //clear() is usually used to empty the temporary array a before storing the result of the next merge.
    a.clear();
    b.clear();

    
}

int main(){
    int arr[] = {4,2,9,7,1,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr , arr+n);
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    mergeSort(v) ;

    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
}


