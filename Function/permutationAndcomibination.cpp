#include <iostream>
using namespace std ;
int fact(int x){
    int f=1;
    for(int i = 2;i<=x;i++)
    {
        f *= i ;
    }
    return f ;
}

int combination(int n , int r)  // 2nd Method to find combination and permutation
{
    int ncr = fact(n)/(fact(r)*fact(n-r)) ;
}

int permutation(int n , int r) 
{
    int npr = fact(n)/fact(n-r) ;
}
int main(){
    int n , r ;
    cout << "Enter a number : " ;
    cin >> n ;
    cout << "Enter a number : " ;
    cin >> r ;
    // int nfact = fact(n);
    // int rfact = fact(r);
    // int nrfact = fact(n-r) ;
    // int ncr = nfact/(rfact*nrfact) ;
    // cout << ncr << endl ;
    int ncr = combination(n,r);
    cout << ncr << endl ;
    // int pcr = nfact/nrfact ;
    int npr = permutation(n,r) ;
    cout << npr ;

}

//Practise
// #include <iostream>
// using namespace std ;

// int fact(int n){
//     int f =1;
//     for(int i=2;i<=n;i++){
//         f *=i ;
//     }
//     return f ;
// }



// int main(){


// }