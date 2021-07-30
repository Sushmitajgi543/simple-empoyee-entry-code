#include <stdio.h>

typedef struct travelagency
{
    char name[50];
    int drLic;
    char route[50];
    int kms;
} ta;

void display(struct travelagency emp1)
{
    printf("\nDisplaying information\n");
    printf("----------------------------\n");
    printf(" name  is  :%s\n ", emp1.name);
    printf("driving licence  is :%d\n ", emp1.drLic);
    printf("route  is :%s \n ", emp1.route);
    printf("kms  is :%d\n ", emp1.kms);
}

void info(ta emp)
{
    printf("enter the name\n ");
    scanf("%s", &emp.name);
    printf("enter the driving licence\n ");
    scanf("%d", &emp.drLic);
    printf("enter the route\n ");
    scanf("%s", &emp.route);
    printf("enter the kms\n ");
    scanf("%d", &emp.kms);
    display(emp);
}

int main()
{
    ta e1, e2, e3;
    printf("enter the info of 1st customer\n ");
    info(e1);
    printf("\nenter the info of 2nd customer\n ");
    info(e2);
    printf("\nenter the info of 3rd customer\n ");
    info(e3);
    return 0;
}
