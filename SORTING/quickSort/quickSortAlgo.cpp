//inbuild sorting technique is done by quick sort
//sort(arr.begin(),arr.end()) => inbuild sort => T.C => 0(nlogn)

//famous sorting 
//step1 => find pivot element so we will assume 0 index as of pivot and put that element at its place (i-1)
//step2 => put element which is less then pivot element to left side and which is greater then pivot to right side 
//step3 => then apply magic and rearrage both side element in ascending order and atlast all element get sorted 

// function will do 2 work => 1. it will keep pivot element to right place 2.and less than pivot element will be left side and greater then pivot element to right side 

// #include<iostream>
// using namespace std;

// int partition(int arr[] , int si , int ei){
//     int pivotElement = arr[si];  // assume that 1st element of array is pivotElement
//     int count = 0;  // to find how many element are smaller than pivot element 
//     for(int i = si+1 ; i<=ei;i++){
//         if(arr[i] <= pivotElement) count++ ;
//     }
//     int pivotIdx = count + si ; 
//     swap(arr[si],arr[pivotIdx]); //1st done => to find place of pivot element
//     int i = si ;
//     int j = ei ;
//     while(i<pivotIdx && j>pivotIdx){  // 2nd to be done => we have to push left side
//         if(arr[i]<=pivotElement) i++ ; // of pivot element whick are smaller and 
//         if(arr[j]>=pivotElement) j-- ; // right side which are greater than pivot
//         else if(arr[i]>pivotElement && arr[j]<pivotElement){
//             swap(arr[i],arr[j]);
//             i++ ;
//             j-- ;
//         }
//     }
//     return pivotIdx ;
// }

// void quickSort(int arr[] , int si, int ei){
//     if(si>=ei) return;
//     int pIdx = partition(arr,si,ei);
//     quickSort(arr,si,pIdx-1);  // left side array of pivot element 
//     quickSort(arr,pIdx+1 , ei); // right side array of pivot element

// }
// int main(){
//     int arr[] = {5,1,8,2,7,6,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){//printing element form the array
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
//     quickSort(arr , 0 ,n-1);
//     for(int i=0;i<n;i++){  // printing sorted array 
//         cout << arr[i] <<" ";
//     }
// }

//revision of quick sort 
#include<iostream>
using namespace std;

int partition(int arr[],int si, int ei){
    int pivotElement = arr[si];
    int count = 0;
    for(int i = si+1;i<=ei;i++){
        if(arr[i]<pivotElement) count++ ;
    }
    int PIdx = count + si ;
    swap(arr[si],arr[PIdx]);

    int i = si;
    int j = ei;
    while(i<pivotElement && j>pivotElement){
        if(arr[i]<pivotElement) i++ ;
        if(arr[j]>pivotElement) j-- ;
        else if(arr[i>pivotElement && arr[j]<pivotElement]){
            swap(arr[i],arr[j]);
            i++ ;
            j-- ;
        }

    }
    return PIdx ;
}
void quickSort(int arr[], int si , int ei){
    if(si>=ei) return ;
    int PIdx = partition(arr,si,ei);
    quickSort(arr,si,PIdx-1);
    quickSort(arr,PIdx+1,ei);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}
