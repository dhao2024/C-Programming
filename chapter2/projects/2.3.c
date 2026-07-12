#include <stdio.h>

int main(void)
{
    int r;
    float v;

    printf("Enter the radius of the ball: ");
    
    scanf("%d", &r);
    
    v = (4.0f / 3.0f) * 3.14 * r * r * r;

    printf("volume of the ball is: %.2f\n", v);

    return 0;
}