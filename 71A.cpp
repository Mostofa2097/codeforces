#include <iostream>
#include <string>
#include<math.h>
using namespace std;

int main()
{
    string a;
    int c,n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        c=a.size();
        if(c>10)
        {
            cout<<a[0]<<c-2<<a[c-1]<<endl;

        }
        else
        {
            cout<<a<<endl;
        }
    }

}
