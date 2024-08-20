// recusation function  for finding power 
#include<stdio.h>
int power(int x,int p){
    if(p==0){
        return 1;
    }
    else {
        return (x*power(x,p-1));
    }
}
int main(){
    int x=2;
    int p=3;
    int r;
    r=power(x,p);
    printf("%d",r);
    return 0;
}

