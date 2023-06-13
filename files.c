#include<stdio.h>
#include<stdlib.h>

int main ()
{
    FILE *fptr1,*fptr2;
    char filename[100],c;

    printf("enter the filename u want to open");
    scanf("%s",filename);

    fptr1=fopen(filename,"r");
    if(fptr1==NULL)
    {
        printf("error opening the file or no file exists");
        exit(0);

    }
    printf("enter the filename for writing");
    scanf("%s",filename);

    fptr2=fopen(filename,"w");
    if(fptr1==NULL)
    {
            printf("error opening the file or no file exists");
        exit(0);
    }
    c=fgetc(fptr1);
    while(c!=EOF)
    {
        fputc(c,fptr2);
        c=fgetc(fptr1);

}
printf("contents copied in the file");
fclose(fptr1);
fclose(fptr2);
return(0);
}
