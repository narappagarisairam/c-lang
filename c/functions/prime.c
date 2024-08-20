//prime numbers 
//with perameter and no return type
#include<stdio.h>
void isprime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
}
}
    if(count==0){
         printf("prime number");
        }
    else{
        printf("not prime number");
        }
}
int main(){
    int n;
    printf("enter the number n");
    scanf("%d ",&n);
    isprime(n);
    return 0;
}

