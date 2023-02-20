#include<stdio.h>
int main()
{
    int cost_price,selling_price,profit,loss;
    printf("enter the cost price:");
    scanf("%d",&cost_price);
    printf("enter the selling price:");
    scanf("%d",&selling_price);
    if(cost_price<selling_price)
    {
        profit=selling_price-cost_price;
        printf("profit of the product is %d Rs",profit);
    }
    else
    {
        loss=cost_price-selling_price;
        printf("loss of the product is %d Rs",loss);
    }
}