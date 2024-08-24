#include<stdio.h>
struct salary
{
        int emid;
        char ename[25];
        int basic;
        float hra;
        float da;
        float itax;
        float gsal;
        float netsal;
};
struct salary s[100];
int main(){
	int i,n;
        printf("enter the employee detailes :");
        scanf("%d",&n);
	for(i=0;i<n;i++){
        printf("id :");
        scanf("%d",&s[i].emid);
        printf("name :");
        scanf("%s",&s[i].ename);
        printf("basic salary :");
        scanf("%d",&s[i].basic);

        if(s[i].basic<=30000){
                s[i].hra=((float)(s[i].basic*25)/100);
                printf("hra is %f \n",s[i].hra);
                s[i].da=((float)(s[i].basic*15)/100);
                printf(" da is %f \n",s[i].da);
                s[i].itax=((float)(s[i].basic*10)/100);
                printf("income tax is %f :",s[i].itax);
        }
        else if(s[i].basic<=60000){
                s[i].hra=((float)(s[i].basic*35)/100);
                printf("hra is %f \n",s[i].hra);
                s[i].da=((float)(s[i].basic*20)/100);
                printf(" da is %f \n",s[i].da);
                s[i].itax=((float)(s[i].basic*15)/100);
                printf("income tax is %f :",s[i].itax);
        }
        else if(s[i].basic<=100000){
                s[i].hra=((float)(s[i].basic*45)/100);
                printf("hra is %f \n",s[i].hra);
                s[i].da=((float)(s[i].basic*20)/100);
                printf(" da is %f \n",s[i].da);
                s[i].itax=((float)(s[i].basic*20)/100);
                printf("income tax is %f :",s[i].itax);
        }
        else{
                printf("enter the correct detailes");
        }
        s[i].gsal=s[i].basic+s[i].hra+s[i].da;
        s[i].netsal=s[i].basic-s[i].itax;
        printf("gross salary is : %f \n",s[i].gsal);
        printf("net salary is : %f \n",s[i].netsal);
	}
        return 0;
}


