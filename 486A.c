#include <stdio.h>
int main()
{

   long long int n,i,p=0,q=0,sum;
    scanf("%lld",&n);


            if(n%2==0){
                sum=n/2;
            }
            else{
                 sum=-((n/2)+1);
            }
           printf("%lld\n",sum);
}
