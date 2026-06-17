// write programme to reverse an array without using extra array by part wise
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
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    display(v);

    // we have to reverse only index 0 to 3(i=0 and j=3)
    // M1(using while loop)
    int i = 0;
    int j = 3;
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);

    // M2(using for loop)
    for (int i = 0, j = 3 ; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);
   
}
