#include<stdio.h>
int main(){
        char str[5][20]={"sai","delip","sunny","siva","yeswanth"};
        int i=0;
	char *r;
        char *ptr[5];
	while(i<5){
		ptr[i]=str[i];
		i++;
	}
	int j=0;
        while(j<5){
		r=ptr[j];
		while(*r!='\0'){
			printf("%c \n",*r);
			r++;
		}
                j++;
        }
	return 0;
}

