#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 1;
    for(int i = 0 ; i < n ; i++){
        int j = 0 , k = 0;
        
        while(j < n - i - 1){
            cout<<" ";
            j++;
        }

        while(k < cnt){
            cout<<"* ";
            k++;
        }
        cnt++;
        cout<<endl;
    }
    
    return 0;
} 