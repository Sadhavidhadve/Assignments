#include <stdio.h>
#include <math.h>
int main(){
    
    float a,b,result;
    int n,i;
    long fact=1;
    int choice;
    printf("1.add\n2.subs\n3.mul\n4.divide\n5.factorial\n6.a^b\n");
    printf("enter your choice of algorithm:");
    scanf("%d",&choice);
    
    
    switch (choice){
        case 1:
        printf("enter num1:");
    scanf("%f",&a);
    printf("enter num2:");
    scanf("%f",&b);
            result = a + b;
            printf("Addition = %.2f", result);
            break;

        case 2:
        printf("enter num1:");
    scanf("%f",&a);
    printf("enter num2:");
    scanf("%f",&b);
            result = a - b;
            printf("Subtraction = %.2f", result);
            break;

        case 3:
        printf("enter num1:");
    scanf("%f",&a);
    printf("enter num2:");
    scanf("%f",&b);
            result = a * b;
            printf("Multiplication = %.2f", result);
            break;

        case 4:
        printf("enter num1:");
    scanf("%f",&a);
    printf("enter num2:");
    scanf("%f",&b);
            if (b != 0) {
                result = a / b;
                printf("Division = %.2f", result);
            } else {
                printf("Error! Division by zero is not allowed.");
            }
            break;

        case 5:
            printf("enter number:");
    scanf("%d",&n);
    for(i=1; i<=n ;i++){
        fact= fact*i;
    }
    printf("factorial of %d = %ld",n,fact);
    break;
            
        
        
        case 6:
        printf("enter num1:");
    scanf("%f",&a);
    printf("enter num2:");
    scanf("%f",&b);
        result = pow(a,b);
         printf("pow = %.2f", result);
            break;
            

        default:
            printf("Invalid choice");
    }

    return 0;
}
