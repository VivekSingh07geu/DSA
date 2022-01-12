#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        int j = 0;
        while(j < i){
            cout<<" ";
            j++;
        }

        while(j < n){
            cout<<"*";
            j++;
        }
        cout<<endl;
    }
    
    return 0;
}      