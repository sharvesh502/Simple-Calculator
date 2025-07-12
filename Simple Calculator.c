//Done by Sharvesh on 12.07.2025
#include <stdio.h>

void main()
{
    int num1,num2;
    char op;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the Operation:");
    scanf(" %c",&op);
    
    switch(op)
    
    {
        case '+':
        printf("Sum:%d",num1+num2);
        break;
        
        case '-':
        printf("Difference:%d",num1-num2);
        break;
        
        case '*':
        printf("Product:%d",num1*num2);
        break;
        
        case '/':
        printf("Quotient:%d",num1/num2);
        break;
        
        default:
        printf("Invalid Operation");
    }
    
    
}