//pragma pack to avoid the space_padding 
#include<stdio.h>
#include<string.h>
//#pragma pack(1);
struct sample{
    char c; 
    int x;
   
}s;
int main(){
    printf("%d",sizeof(s));
}
