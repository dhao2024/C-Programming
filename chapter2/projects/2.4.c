#include <stdio.h>

int main(void)
{
    float money;
    
    printf("Enter an amount: ");
    scanf("%f", &money);
    money = money * 1.05f;
    printf("With tax added: $%.2f\n", money);
    return 0;
}