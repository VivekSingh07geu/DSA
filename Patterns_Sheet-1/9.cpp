#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    char ch = 65 + (n - 1);

    int j = 0 , space = n + 2;
    for(int i = 0 ; i < n ; i++){

        for(int k = 0 ; k < j ; k++)
            cout<<" ";
        cout<<ch;

        for(int k = 0 ; k < space ; k++)
            cout<<" ";
        if(i != n - 1)
            cout<<ch<<endl;

        space -= 2;
        ch--; j++;
    }
    
    return 0;
} 