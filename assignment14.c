#include<stdio.h>
#include<math.h>
void main()
{
    long long int binary,decimal=0,digit;
    int base=2,i=0,base1;
    printf("Enter a binary number:");
    scanf("%lld",&binary);
    while(binary>0)
    {
        digit = binary%10;
        base1=pow(base,i);
        decimal = decimal + digit*base1;
        binary=binary/10;
        i=i+1;
    }
    printf("Decimal Value:%lld",decimal);
}
