#include<stdio.h>
int main(){
	int min,max,d;
	printf("ener the value of min");
	scanf("%d",&min);
	printf("enter the value of max");
	scanf("%d",&max);
	if(min>max){
		printf("maximmum of two numbers %d",min);
	}
	else{
		printf("maximum of two numbers %d",max);
	}
	return 0;
}
