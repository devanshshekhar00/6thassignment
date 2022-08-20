#include <stdio.h>

int main() {
    int n,factorial = 1;
    printf("Enter range\n");
    scanf("%d",&n);
    for(int i = n ; i >= 1 ; i--)
    {
        factorial = factorial * i;
    }
    printf("factorial is %d",factorial);

    return 0;
}
