#include <stdio.h>

int main() {
    int x,y;
    printf("Enter x\n");
    scanf("%d",&x);
    printf("Enter y\n");
    scanf("%d",&y);
    int z = x*y;
    while(1)
    {
        if(x>y)
        {
            if(x%x == 0 && y%x == 0)
            {
                printf("LCM is %d",x);
                break;
            }
            x++;
        }
        else
        {
            if(y%x == 0 && y%x == 0)
            {
                printf("LCM is %d",x);
                break;
            }
            y++;
        }
        
    }
    

    return 0;
}
