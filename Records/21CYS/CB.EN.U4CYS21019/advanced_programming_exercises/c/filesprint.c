#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    FILE *fp;
    int i;
    fp=fopen("file.txt","w");
    for(i=1;i<n;i++)
    {
        fprintf(fp,"%d\n",i);
    }
    fclose(fp);
    
    return 0;
}


