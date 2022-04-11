#include <stdio.h>
int main()
{

    int n,i,a,b,c,m,s;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        int sum=a+b+c;
        if(sum%2==0)
        {
            if(a!=b && a!=c && b!=c)
            {
                if(a>=b&&c<=a)
                {
                    m=a;
                    s=b+c;
                }
                else if(b>=a && b>=c)
                {
                    m=b;
                    s=a+c;
                }
                else
                {
                    m=c;
                    s=a+b;
                }
                if(m==s){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                printf("YES\n");
            }

        }
        else
        {
            printf("NO\n");
        }
    }
}

