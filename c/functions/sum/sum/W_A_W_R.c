//2) with perameters  return
//sum of two numbers

#include<stdio.h>
int sum(int x,int y){
int r;
r=x+y;
return r;
}
int main(){
int x=20;
int y=30;
int result;
     result=sum(x,y);
printf("%d",result);
return 0;
}

