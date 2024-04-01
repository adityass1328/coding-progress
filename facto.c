#include<stdio.h>
void main()
{
    int i=0,a,n,facto=1;
    printf("Enter the number to find factor : ");
    scanf("%d",&a);
    i=a;
    do
    {
       facto=facto*i;
       i--;
    } while (i!=1);
    
    printf("The Factorial Of Given No.%d is %d",a,facto);
}