#include <stdio.h>

int main(void)
{
    int num;

    printf("n   n cubed\n");
    for (num =1; num <= 6; num++)
    {
        printf("%1d %9d\n", num, num*num*num);
    }
    
    return 0;
}