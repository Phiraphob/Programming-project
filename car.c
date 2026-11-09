#include<stdio.h>
#include<math.h>

int main() {
    
    float a,b,c;
    //input
    printf("Enter distance (km): ");
    scanf("%f",&a);
    printf("Enter fuel efficiency (km/l): ");
    scanf("%f",&b);
    printf("Enter fuel price (THB/l): ");
    scanf("%f",&c);

    //processing
    float fuel_used = a / b;
    float total_fuel_cost = fuel_used * c;

    //output
    printf("Distance: %.2f km\n", a);
    printf("Fuel used: %.2f liters\n", fuel_used);
    printf("Total fuel cost: %.2f THB\n", total_fuel_cost);

    return 0;
}