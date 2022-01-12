#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
    cin >> n;

    vector<int> v , temp;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            cout<<" ";
        }     

        for(int j = 0 ; j <= i ; j++){
            if(j == 0 || j == i){
                temp.push_back(1);
                cout<<1<<" ";
            }
            else {
                int sum = v[j-1] + v[j];
                cout<<sum<<" ";
                temp.push_back(sum);
            }
        }
        cout<<endl;
        v.clear();

        v = temp;
        temp.clear();
    }
    
    
    return 0;
} 