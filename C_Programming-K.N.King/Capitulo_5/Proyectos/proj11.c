#include <stdio.h>

int main(void)
{
    int number,digit_1,digit_2;

    printf("Enter a two-digit number: ");
    scanf("%d",&number);
    
    printf("You entered the number ");

    digit_1 = number/10;
    digit_2 = number%10;

    if (number >= 10 && number <= 19) {
        switch (number) {
            case 10: printf("ten");
                     break;
            case 11: printf("eleven");
                     break;
            case 12: printf("Twelve");
                     break;
            case 13: printf("Thirteen");
                     break;
            case 14: printf("Fourteen");
                     break;
            case 15: printf("Fifteen");
                     break;
            case 16: printf("Sixteen");
                     break;
            case 17: printf("Seventeen");
                     break;
            case 18: printf("Eighteen");
                     break;
            case 19: printf("Nineteen");
                     break;
        }
    }else {
            switch (digit_1) {
                case 2: printf("Twenty");
                        break;
                case 3: printf("Thirty");
                        break;
                case 4: printf("Forty");
                        break;
                case 5: printf("Fifty");
                        break;
                case 6: printf("Sixty");
                        break;
                case 7: printf("Seventy");
                        break;
                case 8: printf("Eighty");
                        break;
                case 9: printf("Ninety");
                        break;

           }

            if (digit_2 != 0)
                printf("-");

            switch (digit_2) {
                case 1 : printf("one");
                         break;
                case 2: printf("two");
                        break;
                case 3: printf("three");
                        break;
                case 4: printf("four");
                        break;
                case 5: printf("five");
                        break;
                case 6: printf("six");
                        break;
                case 7: printf("seven");
                        break;
                case 8: printf("eight");
                        break;
                case 9: printf("nine");
                        break;
            
            }

            if (digit_1 == 0 && digit_2 == 0)
                printf("zero");
    }

    printf(".\n");

    return 0;
}
