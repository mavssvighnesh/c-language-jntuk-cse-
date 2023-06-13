#include <stdio.h>

void main()
{
    char filename[100],cfile,sfile,dir;
    int i=0,k=0,op=0;


    printf("enter the root directory name");
    scanf("%s",&dir);

    do {
    printf("1.create file");
    printf("2.delete file");
    printf("3.display files");
    printf("4.exit");

    printf("enter the option");
    scanf("%d",&op);
    
    switch(op)
    {
        case 1:
            printf("enter the new file name");
            scanf("%s",&cfile);
            for(i=0;i<=k;i++)
            {
                if(cfile==filename[i])
                {
                    printf("the file name is already exists");
                    break;
                }
            }
           
                filename[k]=cfile;
                 k++;
            break;
        case 2:
            printf("enter the file name");
            scanf("%s",&sfile);
            for(i=0;i<k;i++)
            {
                if(sfile==filename[i])
                {
                    printf("%s",filename[i]);
                    printf("is deleted");
                    filename[i]=0;

                }
            }
                printf("no file found of this name");
              break;

         case 3:
                printf("all files in the directory %s are",dir);
                for(i=0;i<k;i++)
                {
                    printf("%s \n",filename[i]);

                }  
                break;
        
                }
}
while(op!=4);
}

