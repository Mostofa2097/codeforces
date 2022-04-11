#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int b,i,n,count=0;
    char a[1000];
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }
    for(i=0; i<n; i++)
    {

        if(a[i]==a[i+1])
        {

            count++;
        }

    }
    cout<<count;



}
