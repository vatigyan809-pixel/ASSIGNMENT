#include <stdio.h>

struct Book{
    int id;
    char title[50];
    char author[30];
};

int main(){
    struct Book b[20];
    int n,i;

    printf("Enter Number of Books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nBook %d\n",i+1);

        printf("Book ID: ");
        scanf("%d",&b[i].id);

        printf("Title: ");
        scanf("%s",b[i].title);

        printf("Author: ");
        scanf("%s",b[i].author);
    }

    printf("\nLibrary Records\n");

    for(i=0;i<n;i++){
        printf("%d %s %s\n",
        b[i].id,
        b[i].title,
        b[i].author);
    }

    return 0;
}