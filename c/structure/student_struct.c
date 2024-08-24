#include<stdio.h>
#include<string.h>
struct student
{
        int id;
        char name[25];
        int sub[6];
        float avg;
        int total;
        char result[6];
        char grade[15];
};

int main(){
        int i;
        struct student s;
        printf("id :");
        scanf("%d",&s.id);
        printf("name :");
        scanf("%s",&s.name);
        s.total=0;
        for(i=0;i<6;i++){
        printf("subject marks:",i);
        scanf("%d",&s.sub[i]);
        }
        if(s.sub[0]<=35.0f || s.sub[1]<=35.0f||s.sub[2]<=35.0f||s.sub[3]<=35.0f||s.sub[4]<=35.0f||s.sub[5]<=35.0f ){
             strcpy(s.result,"FAIL");
             strcpy(s.grade,"NIL");
                
        }
        else
        {
                strcpy(s.result,"PASS");
                s.total=s.sub[0]+s.sub[1]+s.sub[2]+s.sub[3]+s.sub[4]+s.sub[5];
                s.avg=s.total/6.0;
                if (s.avg>60)
                {
                        strcpy(s.grade,"first class");
                }
                else if (s.avg>50)
                {
                        strcpy(s.grade,"second class");
                }
                else
                {
                        strcpy(s.grade,"third class");
                }
                printf(" Total is %d\n",s.total);
                printf(" Average is %.2f\n",s.avg);
        }
        printf(" Result is %s\n",s.result);
        printf(" Grade is %s\n",s.grade);

        return 0;
}
