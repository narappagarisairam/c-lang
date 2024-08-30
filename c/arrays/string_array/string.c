#include<stdio.h>
int main(){
char str[]="narappagarisairam";
int c=0;
char *ptr=&str;
while(*ptr!='\0'){
	printf("%c ",*ptr);
	ptr++;
	c++;
}
printf("%d \n",c);
}
