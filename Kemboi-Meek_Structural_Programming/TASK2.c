#include <stdio.h>

int main(void)
{
// Enter radius
    int radius;
    const double PI = 3.14159;
    do
    {
        printf("Enter radius: ");

        scanf("%d", &radius);

        if(radius <=- 0)
        {
            printf("Invalid! Enter a positive radius: ");
        }
    }
    while(radius <= 0);

// Calculation of surface area of a sphere

double surface_area = 4 * PI * radius * radius;
printf("Surface area of the sphere is: %.6f\n", surface_area);
return 0;
}
