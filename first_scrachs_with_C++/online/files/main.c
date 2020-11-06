#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char arr[30];
    fp=fopen("F:\\PL1\\online\\files\test.txt","r");
        fscanf(fp,"%s",arr);
    fclose(fp);
    printf("%s",arr);
    fwrite()
    return 0;
}
