//Cube of given no using function 

#include <stdio.h>

int cube(int a)
{
    return (a*a*a);
}
void main()
{
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
 int c= cube(n);
     printf("The cube of no %d is: %d",n,c);
}