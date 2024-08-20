//5. Write a program to read and print the N student details using structure and Dynamic Memory
//Allocation.
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    char name[10];

};
int main()
{
     int n;
    printf("Enter the number of student:");
    scanf("%d",&n);
    struct student *std=(struct student*)malloc(n*sizeof(struct student));
    for(int i=0;i<n;i++)
    {
       printf("Student:%d\t",i+1);
       printf("Roll:");
       scanf("%d\t",&std[i].roll);
        printf("Name:");
       scanf("%s",std[i].name);
    }
    for(int i=0;i<n;i++)
    {
       printf("Student:%d \t %d\t %s\n",i+1,std[i].roll,std[i].name);
    }
    return 0;

}