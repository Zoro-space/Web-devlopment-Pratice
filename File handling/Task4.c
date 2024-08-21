//5. Write a Program to Append the Content of File at the end of Another.
#include<stdio.h>
int main()
{
    FILE *ftp;
    char ch;
    ftp=fopen("mytext1.txt","r");
    if(ftp==NULL){
        printf("file is not exist...");
    }
    else
    {
        while(ch!=EOF)
        {
             fscanf("%c",ch);
        }
   
    }
}