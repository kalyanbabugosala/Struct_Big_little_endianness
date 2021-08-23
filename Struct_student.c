#include <stdio.h>

struct student{
    
    char name[50],branch[10];
    float cgpa;
}data[];

void insertdata(int n){

    printf("Enter the details in Following \n");
    printf("Name Branch CGPA\n");
    
    for (int i=0;i<n;i++){
     printf("Name : ");
     scanf("%s",&data[i].name);
     printf("Branch : ");
     scanf("%s",&data[i].branch);
     printf("CGPA: ");
     scanf("%f",&data[i].cgpa);
    }
}

void displaydata(int n){
    printf("Name Branch CGPA\n");
    for (int i=0;i<n;i++){
     printf("%s %s %f\n",data[i].name,data[i].branch,data[i].cgpa);
    }
}
int main()
{
    int n;
    printf("\nEnter total no.of inputs\n");
    scanf("%d",&n);
    insertdata(n);
    displaydata(n);
}
