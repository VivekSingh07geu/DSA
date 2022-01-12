#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int space = 0;
    for(int i = 0 ; i < n ; i++){
        
        if(i <= (n / 2))
            space++;
        else
            space--;

        for(int j = 0 ; j < n ; j++){
            if(j < space or j > n - space - 1)
                cout<<j + 1;
            else
                cout<<" ";
        }
        cout<<endl;

    }
    
    
    return 0;
} 