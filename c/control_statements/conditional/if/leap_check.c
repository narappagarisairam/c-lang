//check thatgiven number is leap year or not

#include<stdio.h>
int main(){
        int a,b;
        printf("enter the number ");
        scanf("%d",&a);
        if(a%4==0){
                printf("%d isleap",a);
        }
        else{
                printf("%d is non-leap year",b);
        }
        return 0;
}

