#include<stdio.h>
int fib(int x){
    if (x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        return(fib(x-1)+fib(x-2));
    }
}
int main(){
    int i,x,r;
    printf("enter the value of n");
    scanf("%d",&x);
    for(i=0;i<=x;i++){
        r=fib(i);
        printf("%3d",r);
    }
    return 0;
}


