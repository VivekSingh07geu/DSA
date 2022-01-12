#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 0 ; i < n * 2 ; i++){
        int j = 0 , k = 0;
        
        if(i < n){
            j = n - i - 1;
            cnt++;
        }
        else if(i >= n){
            j = i - n + 1;
            cnt--;
        }

        
        while(j >= 0){
            cout<<" ";
            j--;
        }

        while(k < cnt){
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }
    
    return 0;
}