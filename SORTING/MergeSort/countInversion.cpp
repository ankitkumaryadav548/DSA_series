// //Two element of an array ,a[i] and a[j] form an inversion if(a[i]>a[j] && i< j).
// //Find the inversion count in the array

// //M1 => Brute Force
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {5,1,3,0,4,9,6};
//     // int arr[] = {5,1,8,2,3} ;
//     int n = 7;

//     int count = 0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]> arr[j] && i<j)   count ++ ;
//         }
//     }
//     cout << count ;
// }

// M2 => using merge sort


#include<iostream>
#include<vector>
using namespace std;

int count = 0;

int inversion(vector<int> &a , vector<int> &b){
    int c = 0 ;
    int i = 0;
    int j = 0;
    while(i<a.size() && j<b.size()){
            if(a[i]>b[j]){
                c += (a.size()-i);
                j++ ;
            }
            else { // a[i]<b[j]
                i++ ;
            }
    }
        return c;
}

void merge(vector<int> &a , vector<int> &b , vector<int> &res){
    int i = 0; // a
    int j = 0; // b
    int k = 0; // c

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

    //count the inversion 
    count  += inversion(a,b);

    // merging two sorted array
    merge(a,b,v);

    a.clear();
    b.clear();

    
}

int main(){
    int arr[] = {5,1,3,0,4,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr , arr+n);
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    mergeSort(v) ;

    cout << count ;
}