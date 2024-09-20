#include<stdio.h>
int main()
{
    printf("Welcome to the calculator \n\n");
    // taking input from the user (openrands)
    int n,m,o;
    printf("\nenter the first number \n");
    scanf("%d",&n);
    printf("\nenter the second number\n");
    scanf("%d",&m);
 
    // taking input from the user (operator)
    printf("\nenter the operation to be performed \n1 for addition \n2 for subtraction \n3 for multiplication \n4 for division \n5 for finding the remainder\n\n");
    scanf("%d",&o);

    // condition for performing the operations 
    if(o==1)
    {
        printf("%d is the sum",n+m);
    }
    else if(o==2)
    {
        printf("%d is the difference",n-m);
    }
    else if(o==3)
    {
        printf("%d is the multiplication",n*m);
    }
    else if (o==4)
    {
      if(n!=0&&m!=0)
        printf("%d is the division",n/m);
      else
      {
        printf("not available for non positive or zero as input");
      }
    }
    else if(o==5)
    {
        if(n!=0&&m!=0)
                printf("%d is the modulus division",n%m);
      else
      {
        printf("not available for non positive or zero as input");
    }
    }
}
