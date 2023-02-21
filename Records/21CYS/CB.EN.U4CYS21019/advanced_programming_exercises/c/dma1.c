#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
};

int main()
{
    struct node *p;
    //p=(struct node*)malloc(sizeof(struct node));
    // p=(int *)calloc(n,sizeof(int));
    p=(struct node *)calloc(1,sizeof(struct node));
    p->val=9;
    printf("%d",p->val);

    return 0;
}
