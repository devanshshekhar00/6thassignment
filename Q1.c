#include <stdio.h>

int main() {
    int sum = 0,n;
    printf("Enter range\n");
    scanf("%d",&n);
    for(int i = 1 ; i <=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum is %d",sum);

    return 0;
}
