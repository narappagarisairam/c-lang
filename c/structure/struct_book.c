#include<stdio.h>
#include<string.h>
struct book{
char title[20];
float price;
int pages;
};
struct book b[100];
int main(){
int n,i;
printf("enter the number of books :");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("title is :");
	scanf("%s",&b[i].title);
	printf("price is :");
	scanf("%f",&b[i].price);
	printf("pages are :");
	scanf("%d",&b[i].pages);
}
for(i=0;i<n;i++){
	printf("title is %s :",b[i].title);
	printf("price is %f :",b[i].price);
	printf("pages are %d :",b[i].pages);
	printf("\n");
}
return 0;
}



