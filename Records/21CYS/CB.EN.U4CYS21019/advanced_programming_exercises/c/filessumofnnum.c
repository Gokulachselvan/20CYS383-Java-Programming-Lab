#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    FILE *fp;
    int i,j;
    fp=fopen("file.txt","a+");
    for(i=1;i<=n;i++)
    {
        fprintf(fp,"%d",i);
        
    }
    for(i=1;i<=n;i++)
    {
        fscanf(fp,"%d",&j);
        sum+=j;
    }fprintf(fp,"%d\n",j);
    fclose(fp);
    
    return 0;
}
