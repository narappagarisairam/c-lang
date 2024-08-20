//function are classified  four types
//arg_with returntype
//arg without returntype
//without_arg returntype
//without_arg without returntype

//find area of rectangle
//without_arg  retun type
//with argument with return type
#include<stdio.h>
int area(int l,int b){
int z;
z=l*b;
return z;
}
int main(){
int l=10;
int b=20;
int r;
r=area(l,b);
printf("area is %d",r);
return 0;
}

