#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,k[1000],count=0;
    cin>>n>>p;
    for(int i=1; i<=n; i++)
    {
        cin>>k[i];
    }
    for(int i=1; i<=n; i++)
    {
       if(k[i]>=k[p] && k[i]>0)
        count++;
    }
    cout<<count;

}
