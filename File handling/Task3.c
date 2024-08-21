//3. Write a program to write all the members of an array of structures to a file using fprintf(). Read
//the array from the file and display on the screen.

//4. Write to a text file using fprintf()

#include<stdio.h>
struct student{
    int roll;
    char name[10];
};
int main()
{
    
    FILE *ftp;
    ftp=fopen("mytext.txt","w");
    struct student std[2];
    for(int i=0;i<2;i++)
    {
        printf("\nRecord %d:\n",i+1);
        printf("\nEnter name %d:",i+1);
        scanf("%s",std[i].name);
        printf("Enter marks %d:",i+1);
        scanf("%d",&std[i].roll);
        fprintf(ftp,"\nName:%s\t Marks:%d",std[i].name,std[i].roll);

    }
    fclose(ftp);
    return 0;

}