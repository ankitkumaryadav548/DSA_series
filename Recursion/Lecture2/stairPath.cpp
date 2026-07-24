//Find no. of way to reach top of stair from below if no. of stair is n

//condition =>
//if a man can claimb on stair either one step or 2 step and their combinations

// formula
// stair(n) = stair(n-1) + stair(n-2)

#include<iostream>
using namespace std;

int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1) + stair(n-2);
}
int main(){
    cout << stair(5);
}

