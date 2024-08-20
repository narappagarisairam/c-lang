#function are classified  four types
#arg with returntype
#arg without returntype
#without_arg returntype
#without_arg without returntype

#find area of rectangle
#without_arg no retun type

#include<stdio.h>
void area(){
 int l,b,c;
 a=10;
 b=20;
 c=l+b;
 printf("area is %d",c);
}
int main(){
area();
return 0;
}

#without_arg with return type
#include<stdio.h>
int area(){
 int l,b,c;
 l=10;
 b=20;
 c=a+b;
 return c;
}
int main(){
    int r;
r=area();
printf(" area is %d",r);
return 0;
}

#with argument with return type
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
#with arg without return type
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
