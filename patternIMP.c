#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {

    if(i%2==0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
        }
    printf("\n");
}
}