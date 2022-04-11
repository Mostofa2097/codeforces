#include<stdio.h>
int main()
{

    int x,step;
    scanf("%d",&x);
    step=x/5;
    if(x%5==0){
       printf("%d",step);
    }
    else{
      printf("%d",step+1);
    }



}
