#include <stdio.h>
int main()
{
  float basicpay,hra,ta,GrossSalary,ProffesionalTax,NetSalary;
  printf("enter Basic Pay :");
  sacnf("%f",&basicpay);

hra=0.10*basicpay;
ta=0.05*basicpay;

GrossSalary = basicpay+hra+ta;
ProffesionalTax = 0.02*GrossSalary;
NetSalary = GrossSalary-Proffesionaltax;

printf("Basic Pay = %f",basicpay);
printf("HRA = %f",hra);
printf("Gross Salary = %f",GrossSalary);
printf("Proffesional Tax = %f",ProffesionalTax);
printf("Net Salary = %f",NetSalary);

}
