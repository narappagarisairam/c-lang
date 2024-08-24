#include<stdio.h>
union sample{
	int x;
	char i;
	};

int main(){
	union sample u;
	u.i=1;
	if(u.x==1){
		printf("it is little endian");
	}
	else{
		printf("it is a big endian");
	}
	return 0;
}
