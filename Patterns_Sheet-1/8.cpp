#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int val = 0 , m = 0 , j;
    for(int i = 0 ; i < 2 * n - 1 ; i++){

        if(i < n){
            j = n - i - 2;
            val++;
            m += 2;
        }
        else{
            j = i - n;
            val--;
            m -= 2;
        }

        while(j >= 0){
            cout<<" ";
            j--;
        }
        cout<<val;
        
        if(i != 0 and i != 2 * n - 2){
            for(int k = 0 ; k < m - 2 ; k++)
                cout<<" ";
            cout<<val<<endl;
        }
        else
            cout<<endl;
    }
    
    return 0;
}