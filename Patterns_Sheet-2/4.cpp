#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int size = 0;
    for(int i = 0 ; i < n - 1 ; i++){
        if(i < n / 2)
            size++;
        else
            size--;

        for(int j = 0 ; j < size - 1 ; j++){
            cout<<" ";
        }    

        for(int j = 0 ; j < size ; j++)
            cout<<"*";
        cout<<endl;
    }
    
    
    return 0;
} 