#include<stdio.h>
void main()
{
    int i,n,add=0,alladd=0;
    printf("\nEnter the number upto which you want the arithmetic oprations : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        add=add+i;
        printf("\naddition of %d and %d id %d",i-1,i,add);
        alladd=alladd+add;
    }
    printf("The Addition of all numbers is %d",alladd);
    

}