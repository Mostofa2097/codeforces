#include <stdio.h>
int main()
{

    int i,n,k,count=1;
    scanf("%d",&n);
    int value[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&value[i]);
    }
    k=value[0];
     for(i=1; i<n; i++)
    {
       if(k!=value[i]){
        count++;
        k=value[i];
       }
    }
    printf("%d",count);
}
