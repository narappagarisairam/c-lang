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
int main(){
	struct salary s;
	printf("enter the employee detailes :");
	printf("id :");
	scanf("%d",&s.emid);
	printf("name :");
	scanf("%s",&s.ename);
	printf("basic salary :");
	scanf("%d",&s.basic);
	if(s.basic<=30000){
		s.hra=((float)(s.basic*25)/100);
		printf("hra is %f \n",s.hra);
		s.da=((float)(s.basic*15)/100);
		printf(" da is %f \n",s.da);
		s.itax=((float)(s.basic*10)/100);
		printf("income tax is %f :",s.itax);
	}
	else if(s.basic<=60000){
		s.hra=((float)(s.basic*35)/100);
                printf("hra is %f \n",s.hra);
                s.da=((float)(s.basic*20)/100);
                printf(" da is %f \n",s.da);
                s.itax=((float)(s.basic*15)/100);
                printf("income tax is %f :",s.itax);
	}
	else if(s.basic<=100000){
		s.hra=((float)(s.basic*45)/100);
                printf("hra is %f \n",s.hra);
                s.da=((float)(s.basic*20)/100);
                printf(" da is %f \n",s.da);
                s.itax=((float)(s.basic*20)/100);
                printf("income tax is %f :",s.itax);
	}
	else{
		printf("enter the correct detailes");
	}
	s.gsal=s.basic+s.hra+s.da;
	s.netsal=s.basic-s.itax;
	printf("gross salary is : %f \n",s.gsal);
	printf("net salary is : %f \n",s.netsal);
	return 0;
}
	

