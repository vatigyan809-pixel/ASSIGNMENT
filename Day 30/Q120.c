#include <stdio.h>

struct Student{
    int roll;
    char name[30];
    float marks;
};

void display(struct Student s[],int n){
    int i;
    printf("\nStudent Details\n");

    for(i=0;i<n;i++){
        printf("%d %s %.2f\n",
        s[i].roll,
        s[i].name,
        s[i].marks);
    }
}

int main(){

    struct Student s[50];
    int n,i;

    printf("Enter Number of Students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        printf("\nStudent %d\n",i+1);

        printf("Roll: ");
        scanf("%d",&s[i].roll);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }

    display(s,n);

    return 0;
}