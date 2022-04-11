#include <stdio.h>
int main()
{

    long long int m,n,a,k,l,result,count=0,r1,r2;
    scanf("%lld%lld%lld",&n,&m,&a);
    k=n/a;
    if(n%a!=0)
    {
        k++;
    }

    l=m/a;
    if(m%a!=0)
    {
        l++;
    }
    result=k*l;
    printf("%lld",result);


}
