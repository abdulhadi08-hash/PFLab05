#include<stdio.h>
int main()
{
    int ct;
    float dp;
    printf("\nNOTE:\nStudents=1\tRegular Customer=2");
    printf("\nEnter the customer type:");
    scanf("%d",&ct);
    printf("\nEnter the Desired data usage:");
    scanf("%f",&dp);
    if((ct==1 || ct==2) && (dp>0))
    {
        if((ct==1) && (dp>=0 && dp<=50))
        {
            printf("\nEligible Package.");
        }
        else if((ct==2) && (dp>=0 && dp<=100))
        {
            printf("\nEligible Package.");
        }
        else
        {
            printf("\nInvalid Selection.");
        }
    }
    else {
        printf("\nInvalid Inputs.");
    }
}