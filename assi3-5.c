#include<stdio.h>
int main()
{
    int num,count=0,n;
    printf("enter the number:");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        
        count++;
        n=n/10;
    }
    if(count==3)
    {
        printf("%d is a three digit number",num);
    }
    else
    {
        printf("%d is not a three digit number",num);
    }
}