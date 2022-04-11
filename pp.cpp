#include <iostream>
using namespace std;
int main()
{
     int a,b,c,sum=0,n;
     cin>>n;
     for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        int s=a+b+c;
        sum+=s;
     }
     if(sum==0){
        cout<<"YES";
     }
     else{
        cout<<"NO";
     }

}
