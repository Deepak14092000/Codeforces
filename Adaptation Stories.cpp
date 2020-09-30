#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll i,j=0,t,k,l,a=0,b,m,n,ck=0,dk=0,w,e,r;

        scl1(n);
        ll arr[n];
        for(i=0; i<n; i++)
            scl1(arr[i]);

        for(i=0; i<n; i++){
            ck+=arr[i];
            if(ck<0){
                dk+=(-1*ck);
                ck=0;
            }
        }
        cout<<dk<<endl;

}
