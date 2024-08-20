// without perameters and return
//sum of two numbers

#include<stdio.h>
int sum(){
int x,y,r;
printf("enter the numbers x");
scanf("%d",&x);
printf("enter the numbers y");
scanf("%d",&y);
r=x+y;
return r;
}
int main(){
int result=sum();
printf("%d",result);
return 0;
}


