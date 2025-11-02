#include <stdio.h>
int depositFunc(int amount)
{

    scanf("%d",&amount);
    return amount;

}
int withdrawFunc(int amount)
{
    scanf("%d",&amount);
    return amount;
}
void disbaleFunc(int amount)
{
    printf(":--BALANCE SECTION--:\n");
    printf("REMAINING BALANCE :%d.00\n", amount);
    printf("\n");
}
char choiceFunc(char choice)
{
    printf("DO YOU WANT TO USE BANKING SYSTEM AGAIN\n");
    printf("Y FOR YES\n");
    printf("N FOR NO\n");
    scanf(" %c",&choice);
    printf("\n");
    return choice;
}
void greetingFunc()
{
    printf("WELCOME TO BANKING SYSTEM\n");
    printf("AUTHOR - ROSHAN");
    printf("\n");
}
int main()
{
    greetingFunc();
    int amount=10000;
    char choice;
    do
    {
        int usr_choice;
        printf(":--CLI BANKING SYSTEM--:\n");
        printf("1. DEPOSIT\n");
        printf("2. WITHDRAW\n");
        printf("3. DISPLAY BALANCE\n");
        printf("CHOOSE BETWEEN (1-3) :-");
        scanf("%d", &usr_choice);
        printf("\n");
        switch (usr_choice)
        {
            case 1:
            {
                printf(":--DEPOSIT SECTION--:\n");
                printf("ENTER THE AMOUNT\n");
                amount = (amount+depositFunc(amount));
                disbaleFunc(amount);
                choice = choiceFunc(choice);
                if(choice == 'n' || choice == 'N')
                {
                    printf(":--THANKS FOR VISITING--:");
                    break;
                }
                else
                {
                    break;
                }
            }
            case 2:
            {
                printf(":--WITHDRAW SECTION--:\n");
                printf("ENTER THE AMOUNT\n");
                amount = (amount-withdrawFunc(amount));
                disbaleFunc(amount);
                choice = choiceFunc(choice);
                if(choice == 'n' || choice == 'N')
                {
                    printf(":--THANKS FOR VISITING--:");
                    break;
                }
                else
                {
                    break;
                }
            }
            case 3:
            {
                disbaleFunc(amount);
                choice = choiceFunc(choice);
                if(choice == 'n' || choice == 'N')
                {
                    printf(":--THANKS FOR VISITING--:");
                    break;
                }
                else
                {
                    break;
                }
            }
            default:
            {
                printf("Invalid Choice\n");
                printf("\n");
                if(choice == 'n' || choice == 'N')
                {
                    printf(":--THANKS FOR VISITING--:");
                    break;
                }
                else
                {
                    break;
                }
            }
        }
    }while(choice == 'y' || choice == 'Y');
    return 0;
}