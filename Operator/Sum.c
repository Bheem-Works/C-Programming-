#include <stdio.h> 
int main() {

    int a,b,c;

    // ask user to enter the first number
    printf("Enter the first number:");
    scanf("%d",&a);
    
    // ask user to enter the second number
    printf("Enter the second number:");
    scanf("%d",&b);

    c =  a + b;
    printf("Sum is : %d\n",c);
    return 0;
}
