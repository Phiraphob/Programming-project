#include<stdio.h>
#include<math.h>

int main(){

    //input
    int a ,d;
    printf("Enter saving per day: ");
    scanf("%d",&a);
    printf("Enter day: ");
    scanf("%d",&d);

    //processing
    int total_savings = a * d;
    int week_savings = a * 7;

    //output
    printf("Total savings: %d\n", total_savings);
    printf("Weekly savings: %d\n", week_savings);

    return 0;
}
