#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char op_sign;

    printf("Enter two fractions separated by the desired operation sign(+, -, * or /): ");
    scanf("%d/%d",&num1,&denom1);
    while ((op_sign = getchar()) == ' ')
        ;
    scanf("%d/%d",&num2, &denom2 );

    switch (op_sign) {
        case '+': {
                      result_num = num1 * denom2 + num2 * denom1;
                      result_denom =denom1 * denom2;
                      printf("The sum is: %d/%d\n", result_num, result_denom);
                   };
        break;
        case '-': {
                      result_num = num1 * denom2 - num2 * denom1;
                      result_denom =denom1 * denom2;
                      printf("The substraction is: %d/%d\n", result_num, result_denom);
                  };
        break;
        case '*': {
                      result_num = num1 * num2;
                      result_denom =denom1 * denom2;
                      printf("The multiplication is: %d/%d\n", result_num, result_denom);
                  };
        break;
        case '/': {
                      result_num = num1 * denom2;
                      result_denom =denom1 * num2;
                      printf("The division is: %d/%d\n", result_num, result_denom);
                  };
        break;
        default:
        break;
    
    }

        return 0;

}
