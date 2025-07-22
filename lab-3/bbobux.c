#include <stdio.h>
#include <math.h>
int main() {
float Radius = 0.0;
float Lenght = 0.0;
float Resistivity =0.0;


printf("Enter the Radius of Resister (m) : ");
scanf("%f", &Radius);

printf("Enter the Lenght of Resister (m) : ");
scanf("%f", &Lenght);

printf("Enter the Resistivity of Resister (m) : ");
scanf("%f", &Resistivity);

float area = 3.14 * Radius*Radius;
double value_off = (Resistivity * Lenght) / area;

printf("The value off this resistor = %.2lf OHM", value_off);

return 0;

}