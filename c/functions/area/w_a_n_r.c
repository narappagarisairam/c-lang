//with_arg without return_type
#include<stdio.h>
void area(int l,int b){
int z;
z=l*b;
printf("area is %d",z);
}
int main(){
int l=10;
int b=20;
area(l,b);
return 0;
}
