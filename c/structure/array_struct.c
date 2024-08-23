#include<stdio.h>
#include<string.h>
struct emp{
        int id;
        char name[24];
        float salary;
        char address[30];
};
struct emp e[100];
int main()
{
    int n,i;
    printf("enter the number of employee : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
	    printf("id : ");
	    scanf("%d",&e[i].id);
	    printf("name : ");
            scanf("%s",&e[i].name);
	    printf("salary : ");
	    scanf("%f",&e[i].salary);
	    printf("address : ");
	    scanf("%s",&e[i].address);
  }
    for(i=0;i<n;i++){
    printf("employee id : %d , ",e[i].id);
    printf("employee name : %s ,",e[i].name);
    printf("employee salary : %f ,",e[i].salary);
    printf("employee address : %s ",e[i].address);
    printf("\n");
    }
    return 0;
}
