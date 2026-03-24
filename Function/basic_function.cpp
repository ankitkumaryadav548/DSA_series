#include <iostream>
using namespace std ;

void starTriangle(int n){
    for(int i = 1 ; i<=n ;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout <<"*" ;
        }
        cout << endl ;
    }
}

void greeting(){
    cout<<"Hello World" << endl;
    cout<<"Good Morning"<<endl ;
}
int main(){
    greeting() ;
    starTriangle(4); 
}