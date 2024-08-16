// sum of n natural numbers using for loop
#include<stdio.h>
int main(){
	int i,n,sum;
	printf("enter the number n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		sum=sum+i;
	}
		printf("%d",sum);
		return 0;
}
