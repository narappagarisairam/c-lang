#include<stdio.h>
#include<string.h>
int main()
{
    struct emp{
        int id;
        char name[24];
        float salary;
        char address[30];
    };
    struct emp e;
    e.id=49;
    strcpy(e.name,"narappagarisairam");
    e.salary=45362.89;
    strcpy(e.address,"7/33a baggidipalli");
    printf("%d %s %f %s",e.id,e.name,e.salary,e.address);
    return 0;
}
