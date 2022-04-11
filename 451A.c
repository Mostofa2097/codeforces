#include<stdio.h>
int main(){

   int m,n,sum;
   scanf("%d%d",&m,&n);
   sum=m+n;
   if(m<=n && m%2==0){
    printf("Malvika");
   }
   else if(n<=m && n%2==0)  {
    printf("Malvika");
   }
    else{
     printf("Akshat");
    }


}
