#include <stdio.h>
int main()
{

    int i,n,l,r=0;
    scanf("%d",&n);

    for(i=0; i<n; i++){
     scanf("%d",&l);
     r=r+l;

   }
   if(r==0){
       printf("EASY");
     }
     else {
        printf("HARD");
     }
}
