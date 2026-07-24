//Find no. of way to reach top of stair from below if no. of stair is n

//condition =>
//if a man can claimb on stair 1 step , 2 step or 3 step  or their combinations

// formula
// stair(n) = stair(n-1) + stair(n-2) + stair(n-3)

#include<iostream>
using namespace std;

int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1) + stair(n-2) + stair(n-3);
}
int main(){
    cout << stair(5);
}


// if n==3 =>
// 1 1 1
// 1 2 
// 2 1 
// 3 