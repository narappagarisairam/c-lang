#include<stdio.h>
void operation(int(*fptr)(int,int),int x,int y){
	int k;
	k=fptr(x,y);
	printf("%d",x);
        printf("%d",y);
}
int add(int x,int y){
	return(x+y);
}
int main(){
	int k,a=10,b=20;
	operation(&add,a,b);
}

	
