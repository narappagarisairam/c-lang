#include<stdio.h>
int main(){
	int p,t,r,si;
	printf("enter the value of p");
	scanf("%d",&p);
	printf("enter the valu of t");
	scanf("%d",&t);
	printf("enter the value of r");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("interest is%d %d %d %d",p,t,r,si);
	return 0;
}
