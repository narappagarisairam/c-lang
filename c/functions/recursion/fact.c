//recursion function for  factorial
#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return(n*fact(n-1));
    }
}
int main(){
    int r,x;
    printf("enter the number");
    scanf("%d",&x);
    r=fact(x);
    printf("%d",r);
    return 0;
}

