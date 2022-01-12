#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0 , b = 1 , sum = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<sum<<" ";

            sum = a + b;
            a = b;
            b = sum;
        }   
        cout<<endl; 
    }
    
    
    return 0;
} 