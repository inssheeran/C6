#include <stdio.h>
#define PAGES 959

int main(void)
{
    const double RENT = 1.994;
    printf("*123456789012345*\n");
    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    printf("*%.1f*\n", RENT);
    return 0;
}