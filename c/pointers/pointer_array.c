#include<stdio.h>
int main(){
	int j,i;
	int a[3][5]={{2,4,6,8,0},{1,3,5,7,9},{2,3,4,5,7}};
	int(*ptr)[5];
	ptr=&a[0];
	for(j=0;j<3;j++){
		for(i=0;i<5;i++){
			printf("%d",*(*(ptr+j)+i));
		
		}
		printf("\n");
	}

	}

