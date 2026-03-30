#include<stdio.h>
struct Number
{
    int num;
};
void main()
{
    struct Number n;
    int digit;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Reverse digits:");
    while(n.num!=0)
    {
        digit=n.num%10;
        printf("%d",digit);
        n.num=n.num/10;
    }
}
