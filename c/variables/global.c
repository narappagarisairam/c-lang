#include<stdio.h>
int x=10;
void fun(){
	printf("\n %d",x);
	x++;
	printf("\n %d",x);
}
int main(){
	printf("\n %d",x);
	x++;
	fun();
	x++;
	printf("\n %d",x);
	fun();
	printf("\n %d",x);
	return 0;
}
