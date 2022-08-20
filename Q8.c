#include <stdio.h>

int main() {
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    for(int i = 2; i < n;i++)
    {
        if(n%i == 0)
        {
            printf("Prime number");
            break;
        }
        if(i == n-1) printf("Not a prime number");
    }
   
    

    return 0;
}
