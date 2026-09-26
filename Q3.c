#include<stdio.h>
void main()
{
    int age,e;
    printf("\nSituatio\nEmergency=1\tNon-Emergency=0");
    printf("\nEnter Situation:");
    scanf("%d",&e);
    
    switch (e)
    {
    case 0:
        printf("\nEnter the age of patient:");
        scanf("%d",&age);
        if(age>=60)
        {
            printf("\nHigh Priority.");
        }
        else if(age>=18 && age<=59)
        {
            printf("\nNormal Priority.");
        }      
        else if (age>=0 &&age<18)
        {
            printf("\nChild priority");
        }  
        else
        {
            printf("\nInvalid age!!");
        }
        break;

    case 1:
        printf("\nImmediately!!");
        break;
    
    default:
        printf("\nInvalid Input!!");
        break;
    }
}