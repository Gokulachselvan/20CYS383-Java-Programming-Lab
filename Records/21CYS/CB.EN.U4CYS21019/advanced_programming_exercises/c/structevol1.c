#include <stdio.h>

struct csn
{
    int st_no;
    int coa1_m[3];
    int coa2_m[3];
    int coa3_m[3];
    float class_avg_co1;
    float class_avg_co2;
    float class_avg_co3;
}s1csn1, s1csn2;


int main()
{
    int i;

    for(i=0;i<3;i++)
    {
    printf("Enter the co1 marks for student [%d] of s1csn1: ",i);
    scanf("%d",&s1csn1.coa1_m[i]);
    }
    for(i=0;i<3;i++)
    {
    printf("Enter the co2 marks for student [%d] of s1csn1: ",i);
    scanf("%d",&s1csn1.coa2_m[i]);
    }
    for(i=0;i<3;i++)
    {
    printf("Enter the co3 marks for student [%d] of s1csn1: ",i);
    scanf("%d",&s1csn1.coa3_m[i]);
    }
    
    for(i=0;i<3;i++)
    {
    printf("Enter the co1 marks for student [%d] of s1csn2: ",i);
    scanf("%d",&s1csn2.coa1_m[i]);
    }
    for(i=0;i<3;i++)
    {
    printf("Enter the co2 marks for student [%d] of s1csn2: ",i);
    scanf("%d",&s1csn2.coa2_m[i]);
    }
    for(i=0;i<3;i++)
    {
    printf("Enter the co3 marks for student [%d] of s1csn2: ",i);
    scanf("%d",&s1csn2.coa3_m[i]);
    }

    s1csn1.class_avg_co1=(s1csn1.coa1_m[0]+s1csn1.coa1_m[1]+s1csn1.coa1_m[2])/3;
    printf("\n\nThe class avg of s1csn1 for co1 is: %.2f",s1csn1.class_avg_co1);
    
    s1csn1.class_avg_co2=(s1csn1.coa2_m[0]+s1csn1.coa2_m[1]+s1csn1.coa2_m[2])/3;
    s1csn2.class_avg_co2=(s1csn2.coa2_m[0]+s1csn2.coa2_m[1]+s1csn2.coa2_m[2])/3;
    printf("\n\nThe class avg of s1csn1 for co2 is: %.2f",s1csn1.class_avg_co2);
    printf("\n\nThe class avg of s1csn2 for co2 is: %.2f",s1csn2.class_avg_co2);
    if(s1csn1.class_avg_co2 > s1csn2.class_avg_co2)
    {
        printf("\n\nS1CSN1 division got higest class average for course co2");
    }
    else{
        printf("\n\nS1CSN2 division got higest class average for course co2");
        
    }
    
    return 0;
    }

