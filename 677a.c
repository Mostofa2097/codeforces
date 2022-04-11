#include<stdio.h>
int main()
{

    int a,h,n,i,count=0;
    scanf("%d%d",&n,&h);

    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a>h){
            count+=2;
        }
        else {
            count+=1;
        }
    }
    printf("%d",count);
}
