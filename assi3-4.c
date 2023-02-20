#include<stdio.h>
int main()
{
    int num,n;
    printf("enter the number:");
    scanf("%d",&num);
    n=num/2;
    if(num==n*2)
    {
        printf("%d is a even number",num);
    }
    else{
        printf("%d is a odd number",num);
    }
}