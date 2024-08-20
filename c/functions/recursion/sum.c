//recursion function for sum of n numbers
#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return (n+sum(n-1));
    }
}
int main(){
    int n=10;
    int r;
    r=sum(n);
    printf("%d",r);
}

