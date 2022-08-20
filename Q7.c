#include <stdio.h>

int main() {
    int n,digits = 0;
    printf("Enter number\n");
    scanf("%d",&n);
    int k = n%10,j = n/10;
    //printf("%d",k);
    if(k!= 0)
    {do
    {
        
        digits ++;
        j = j/10;
        k = j%10;
        
    }while(k>0);
        digits++;
        printf("Number of digits %d",digits);
    }
    else 
    {
        do
        {
            digits++;
            j = j/10;
            
        }while(j>0);
        
         digits++;
        
        printf("Number of digits %d",digits);
        
    }
    

    return 0;
}
