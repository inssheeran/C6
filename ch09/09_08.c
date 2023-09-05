#include <stdio.h>

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_binary(unsigned long n)
{
    int r;
    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    putchar(r == 0 ? '0' : '1');

    return;
}

unsigned char AirData[20];

void SendData(const unsigned char *data, unsigned char count)
{
    unsigned char i;
    for (i = 0; i < count; i++)
    {
        AirData[i]=data[i];
    }
}

void ReceiveData(unsigned char *data, unsigned char count)
{
    unsigned char i;
    for (i = 0; i < count; i++)
    {
        data[i]=AirData[i];
    }
}

int main(void)
{
    unsigned char i;
    unsigned char DataSend[]={0x12,0x34,0x56,0x78};
    float num = 12.345;

    unsigned char *p;

    p=(unsigned char *)&num;

    SendData(p,4);

    /*******************************/
    printf("\nAirData=");
    for (i = 0; i < 20; i++)
    {
        printf("%x ", AirData[i]);
    }
    /*******************************/

    unsigned char DataReceive[4];

    float *fp;

    ReceiveData(DataReceive,4);

    fp=(float *)DataReceive;

    printf("\nnum=%f", *fp);

    return 0;
}