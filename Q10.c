#include <stdio.h>

int main() {
   int x;
   printf("Enter number\n");
   scanf("%d",&x);
   int j = x/10,f = x%10;
   do
   {
       f = f*10;
       f = f + j%10;
       j = j/10;
       
      //printf("%d %d ",f,j);
       
   }while(j>0);
   
   printf("%d",f);
    

    return 0;
}
