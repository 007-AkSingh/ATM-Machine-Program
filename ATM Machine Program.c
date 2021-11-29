#include<stdio.h>  //It will include Prototype of all input output functions
int main()  // since we want return value we are taking main function as ints
{
    system("Color 2E");
    float x,y; // taking two float variable
    char ch;  // taking character variable for c d b --> credit debit balance
    // Taking necessary inputs from user and scanning w.r.t. x & y

    printf("Enter initial amount\n");
    scanf("%f", &x);
    printf("Enter \nc for credit\nd for debit\nb for balance\n");
    scanf("\n%c", &ch);

    // Switch cases for c credit, d debit, b balance
    switch(ch)
    {
    case 'c':
        printf("Enter credit amount\n");  // amount you want to put in your account
        scanf("%f", &y);
        x=x+y;
        printf("New Amount=%f", x);  // After crediting, what's new amount
        break ;

    case 'd':
        printf("Enter debit amount\n"); // amount you want to remove from your account
        scanf("%f", &y);
        if (x>=y)  // withdraw amount less than balance
        {
            x=x-y;
            printf("New Amount=%f", x); // after removing money what's new amount
        }
        else
        {
            printf("Insufficient amount in your account"); // if amount to be debit is more than balance
        }
        break;

    case 'b':
        printf("Amount in your account=%f", x); // To check the amount balance in your account
        break;

    default:
        printf("Choose correct option for operation"); // for wrong input from user

    }

}
