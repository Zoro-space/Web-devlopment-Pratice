//2. Write a program to read name and marks of n number of students from user and store them in a
//file. If the file previously exits, add the information of n students.
#include<stdio.h>
int main()
{
    int n;
    FILE *fp;
    int marks;
    char name[10];
    printf("Enter the no of student to add..\n");
    scanf("%d",&n);
    fp=fopen("mytext.txt","a");
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the name %d:",i+1);
        scanf("%s",name);

        printf("Enter the marks %d:",i+1);
        scanf("%d",&marks);

        fprintf(fp,"\nName:%s\t Marks:%d\t",name,marks);

    }
    fclose(fp);
    return 0;
}