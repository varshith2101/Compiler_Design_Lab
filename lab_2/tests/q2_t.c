#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define AREA_OF_CIRCLE(radius) (PI * (radius) * (radius))

#ifdef DEBUG
#define PRINT_DEBUG_INFO printf("Debugging is enabled.\n")
#else
#define PRINT_DEBUG_INFO printf("Debugging is disabled.\n")
#endif

#if !defined(MAX_SIZE)
#define MAX_SIZE 50
#endif
#define SQUARE(x) ((x) * (x))

int main() {
    int radius = 5;
    float area = AREA_OF_CIRCLE(radius);
    int num = 10;

    printf("Area of the circle with radius %d is %.2f\n", radius, area);
    
    PRINT_DEBUG_INFO;
    
    printf("The square of %d is %d\n", num, SQUARE(num));

    printf("The maximum size is defined as %d\n", MAX_SIZE);

    return 0;
}
