#include<iostream>
using namespace std;

void zigzag(int n){      // if n=1 output=111;
    if(n==0) return ;    // if n=2 output=211121112;
    cout<< n;
    zigzag(n-1);
    cout<< n;
    zigzag(n-1);
    cout<< n;
}
int main(){
    zigzag(3);

}