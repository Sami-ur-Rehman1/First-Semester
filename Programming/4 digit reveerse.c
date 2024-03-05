#include <stdio.h>
int main()
{
    int number,first_digit,second_digit,third_digit,forth_digit;
    printf("enter a four digit number:");
    scanf("%d",&number);
    first_digit=number/1000;
    second_digit=number/1000/100;
    third_digit=number/1000/100/10;
    forth_digit=number/1000/100%10;
    printf("number in reverse order is:%d%d%d%d",forth_digit,third_digit,second_digit,first_digit);

}
