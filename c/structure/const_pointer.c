#include<stdio.h>
int main(){
int x=10,y=20;
//int *const p=&x;
int const *p=&x;
printf("%d",*p);
*p=*p+100;
p=&y;
printf("%d",*y);
return 0;
}

