#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,sum1=0,sum2=0;
    cin>>n;

    int array[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>array[i][j];
        }
        sum+=array[i][0];
        sum1+=array[i][1];
        sum2+=array[i][2];
    }

    if(sum==0 && sum1==0 && sum2==0){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }

}
