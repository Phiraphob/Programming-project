#include<stdio.h>

int main(){

    //input
    int salary,hours_OT,hourly_rate,deduction;
    printf("Enter your basic salary: ");
    scanf("%d",&salary);
    printf("Enter hours of overtime worked: ");
    scanf("%d",&hours_OT);
    printf("Enter hourly rate: ");
    scanf("%d",&hourly_rate);
    printf("Enter deduction percentage: ");
    scanf("%d",&deduction);

    //processing
    float OT_income = hours_OT * hourly_rate;
    float gross_salary = salary + OT_income;
    float deduction_amount = gross_salary * deduction / 100;
    float net_salary = gross_salary - deduction_amount;

    //output
    printf("----- Salary Summary -----\n");
    printf("OT income: %.2f THB\n", OT_income);
    printf("Gross salary: %.2f THB\n", gross_salary);
    printf("Deduction: %.2f THB\n", deduction_amount);
    printf("Net salary: %.2f THB\n", net_salary);

    return 0;
}