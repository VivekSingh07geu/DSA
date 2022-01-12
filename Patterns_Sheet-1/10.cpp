#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int space = 0 , extra = n;
    for(int i = 0 ; i < n ; i++){
        if(i <= n / 2){
            space++;
            extra -= 2;
        }
        else{
            extra += 2;
            space--;
        }

        for(int k = 0 ; k < space - 1 ; k++)
            cout<<" ";
        cout<<i + 1;

        for(int k = 0 ; k < extra ; k++)
            cout<<" ";
        if(i != n / 2)
            cout<<i + 1<<endl;
        else
            cout<<endl;
    }
    
    return 0;
}