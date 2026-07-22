#include <stdio.h>
#define PI 3.14

int main(void)
{
    int radius;
    float volume;

    printf("Enter the radius of the sphere(meters):\n");
    scanf("%d",&radius);

    volume = 4.0f/3.0f * PI *(radius*radius*radius);

    printf("The volume of a sphere with a %d-meters radius is: %f.\n", radius, volume);

    return 0;
}
