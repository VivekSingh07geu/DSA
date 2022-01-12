#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt , val = n / 2 , size = 0;
    for(int i = 0 ; i <= n ; i++){
        int j = val , k = 0;

        if(i <= val){
            size++;
        }
        else
            size--;

        while(k < size){
            cout<<j;
            j--; k++;
        }

        cout<<endl;
    }
    
    return 0;
}