#include <stdio.h>

int main(void) {
    float num, result;
    char operation;

    printf("Emter a expression: ");

    scanf("%f", &num);
    result = num;
    operation = getchar();
    
    while (operation != '\n') {
        scanf("%f", &num);

        switch (operation) {
            case '+':
                result +=num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                result /= num;
                break;
            default:
                break;
        
        }

        operation = getchar();
    
    }

    printf("Value of expression : %.1f\n", result);

    return 0;
}
