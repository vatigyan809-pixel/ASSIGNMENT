#include <stdio.h>

struct Salary
{
    int empId;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct Salary s[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &s[i].empId);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &s[i].basic);

        s[i].hra = s[i].basic * 0.20;
        s[i].da = s[i].basic * 0.10;
        s[i].gross = s[i].basic + s[i].hra + s[i].da;
    }

    printf("\n----- Salary Report -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID : %d", s[i].empId);
        printf("\nName        : %s", s[i].name);
        printf("\nBasic Salary: %.2f", s[i].basic);
        printf("\nHRA (20%%)   : %.2f", s[i].hra);
        printf("\nDA (10%%)    : %.2f", s[i].da);
        printf("\nGross Salary: %.2f\n", s[i].gross);
    }

    return 0;
}