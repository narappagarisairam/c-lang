#include <stdio.h>

int main()
{
   char str[ ]="sairam";
   //char *ptr="sairam";
   char *ptr=&str;
   printf("%c",*ptr);
   printf("%d \n",sizeof(str));
   printf("%d \n",sizeof(ptr));
}
