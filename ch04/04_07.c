#include <stdio.h>
#define PAGES 959

int main(void)
{
    printf("*123456789012345*\n");
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
    return 0;
}