#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 1 , val = 1;
    for(int i = 0 ; i < n ; i++){
        int j = 0 , cnt = val;
        
        while(j < n - i - 1){
            cout<<" ";
            j++;
        }

        while(cnt >= 1){
            cout<<cnt;
            cnt--;
        }

        val += 2;
        cout<<endl;
    }
    
    return 0;
}      