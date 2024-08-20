// functions

//1) with perameters no return
//sum of two numbers

#include<stdio.h>
void sum(int x,int y){
int r;
printf("enter the numbers x");
scanf("%d",&x);
printf("enter the numbers y");
scanf("%d",&y);
r=x+y;
printf("sum of two is %d ",r);
}
int main(){
sum(5,6);
return 0;
}



//2) with perameters  return
//sum of two numbers

#include<stdio.h>
int sum(int x,int y){
int r;
//printf("enter the numbers x");
//scanf("%d",&x);
//printf("enter the numbers y");
//scanf("%d",&y);
r=x+y;
return r;
}
int main(){
int result=sum();
printf("%d",result);
return 0;
}


// functions

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

// functions

// without perameters  no return
//sum of two numbers

#include<stdio.h>
int sum(){
int x,y,r;
printf("enter the numbers x");
scanf("%d",&x);
printf("enter the numbers y");
scanf("%d",&y);
r=x+y;
printf("%d",r);
}
int main(){
sum();
return 0;
}

