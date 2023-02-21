#include <stdio.h>

struct student
{
    int roll,marks;
    char name[10];
}s[86],temp;

void main()
{
    int i,j,n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    printf("Enter students details like roll , name , marks\n");
    for(i=0;i<n;i++)
    {
       scanf("%d %s %d",&s[i].roll,s[i].name,&s[i].marks);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(s[j].marks<s[j+1].marks)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("\nRoll\t\tName\t\tMarks\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%d\n",s[i].roll,s[i].name,s[i].marks);
    }
}
