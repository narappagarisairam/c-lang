#include<stdio.h>
int main(){
	char str[5][20]={"sai","delip","sunny","siva","yeswanth"};
	int i=0;
	char *ptr[5];
	while(i<5){
		ptr[i]=str[i];
		printf("%s",ptr[i]);//it with help pointer 
		printf("%s",str[i]);//without help of pointer
		i++;
	}
}
