// sum of n number using while loop
#include<stdio.h>
int main(){
	int n,sum;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0){
		sum=sum+n;
		n--;
	}
	printf("%d",sum);
	return 0;
}
