//input => (2,0,1,0,2,1,1,0,2)
//output => (0,0,0,1,1,1,2,2,2)
//leetcode question(sorting colors)
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
// M1 (two pass method => two loop => one for storing element and second for overwritting/printing element)

//storing element into variable
void sort012(vector<int> &v){
    int n = v.size();
    int noo = 0;  // non = 2
    int noz = 0; //noz = 2
    int notwo = 0; //notwo = 2
    for(int i = 0;i<n;i++){
        if(v[i]==0) noz++ ;
        else if(v[i]==1) noo++;
        else noo++ ;
    }   
    //filling element
    for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else if(i<noo && i>notwo) v[i] = 1;
        else v[i]=2;
    }
}

// M2  (using 3 pointer) => Dutch flag Algorithm (one pass => one loop)
void sort012m2(vector<int> &v){
    int n = v.size();
    int low = 0;
    int mid = 0;
    int hi = n-1;

    while(mid<=hi){
        if(v[mid]==2){
            //swapping between mid and hi
            int temp = v[mid];
            v[mid] = v[hi];
            v[hi] = temp;
            hi-- ; 

        }
        if(v[mid]==0){
            //swapping between low and mid
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low ++;
            mid++ ;
        }
        if(v[mid]==1){
            mid++ ;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);

    display(v);
    sort012(v);
    display(v);
    sort012m2(v);
    display(v);
}