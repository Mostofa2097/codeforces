#include <stdio.h>
int main()
{

    int sum,mu,ms,mm,ss,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;
    mu = a*b*c;
    ms = a*(b+c);
    mm= a+b*c;
    ss = (a+b)*c;

    if(sum>=mu && sum>=ms && sum>=mm && sum>=ss)
    {
        printf("%d",sum);
    }
    else if(mu>=sum && mu>=ms && mu>=mm && mu>=ss)
    {
        printf("%d",mu);
    }

    else if(ms>=mu && sum<=ms && ms>=mm && ms>=ss)
    {
        printf("%d",ms);
    }

    else if(mm>=mu && mm>=ms && sum<=mm && mm>=ss)
    {
        printf("%d",mm);
    }

    else if(ss>=mu && ss>=ms && ss>=mm && sum<=ss)
    {
        printf("%d",ss);
    }

}
