#include <stdio.h>
/* files
static na stacks  dynamic ma na heap


*/

int main()
{
    /*fopen() //create a files
    fprintf() //write something frm a files
    fscanf() //read something frm a files
    fclose()  //used to close a files
    */
    FILE *fp//file ponter;
    int i=4,j;
    fp=fopen("file.txt","a+"); //a append r read w write is mode  a+ append write read
    fprintf(fp,"%d",i);
    rewind(fp);  //file pointer ah one step rewind 
    fscanf(fp,"%d",&j);
    printf("%d",j);
    fclose(fp);
   
    return 0;
}
