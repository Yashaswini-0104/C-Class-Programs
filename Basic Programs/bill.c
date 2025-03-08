#include<stdio.h>
#include<string.h>
void main()
{
    float bill;
    float surcharge;
    char name;
    int units;
    int amount;
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter total units consumed=");
    scanf("%d",&units);
    if(units<=100)
    {
        amount=100+units*5;
    }
    else if(units>100 && units<=300)
    {
        amount=100+(100)*5+(units-100)*7;

    }
    else
    {
        amount=100+(100)*5+(200)*7+(units-300)*10;
    }
    if(amount>1000)
    {
        bill=amount+(0.05*amount);
        surcharge=0.05*amount;
    }
    else
    {
        bill=amount;
    }
    printf("Name=%c,\nTotal Units Consumed=%d\nBill Amount=%.2f\nSurcharge amount=%.2f",name,units,bill,surcharge);
    }

