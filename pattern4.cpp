#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a = 1;
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <=i; j++)
        {
           // cout << "*"; 
            //cout <<i; for same as * but row and column are same number
           cout<<a <<" ";
           a++;
        }
        cout<< endl;
    }
}