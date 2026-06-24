// write programme to rotate an array without using extra array by part wise
#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void displaypart(int i, int j , vector<int>&a){
    while (i <= j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);

    int k = 50;  // rotate k times
    int n = v.size();
    if(k>n) k = k%n ;
    display(v);
    displaypart(0,n-k-1,v);
    displaypart(n-k,n-1,v);
    displaypart(0,n-1,v);
    display(v);
  
   
}
