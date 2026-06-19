#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
// M1
//storing element to variable
// void sort01(vector<int> &v){
//     int n = v.size();
//     int nop = 0;
//     int non = 0;
//     for(int i = 0;i<n;i++){
//         if(v[i]>0) nop++ ;
//         else non++ ;
//     }
//     //filling element
//     for(int i=0;i<n;i++){
//         if(i<nop) v[i]=nop;
//         else v[i]=non;
//     }
// }

// // M2
void sort01m2(vector<int> &v){
    int n = v.size();
    // int nop=0;
    // int non = 0;
    int i=0;
    int j=n-1;
    while(i<j){
    if(v[i]>0) i++;
    if(v[j]<0) j--;
    // if(i>j) break;   // extra condition for wrong sorting
    else if(v[i]>0 && v[j]<0){
//     //swapping
//     v[i]=0;
//     v[j]=1;
       int temp = v[i];
       v[i]=v[j];
       v[j]=temp ;
    i++ ;
    j-- ;
    }
    }
}
int main(){
    vector<int> v;
    v.push_back(-1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(-11);
    v.push_back(10);
    v.push_back(-7);
    v.push_back(8);
    v.push_back(-3);

    // display(v);
    // sort01(v);
    display(v);
    sort01m2(v);
    display(v);
}