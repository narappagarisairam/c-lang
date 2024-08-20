//without_arg with_return type
#include<stdio.h>
int area(){
 int l,b,c;
 l=10;
 b=20;
 c=l*b;
 return c;
}
int main(){
    int r;
r=area();
printf(" area is %d",r);
return 0;
}
