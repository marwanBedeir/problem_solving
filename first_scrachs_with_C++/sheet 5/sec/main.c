#include <stdio.h>
#include <stdlib.h>
typedef struct date_of_birth
{
   int day;
   int mounth;
   int year;
}db;

typedef struct member
{
   char first_name[50];
   char last_name[50];
   char gender[6];
   db d;
   int hight;
   int weight;
}h;

void fun(char fn[],char ln[],char g[],int da,int m,int y,int hh,int w)
{
    int i,age,BMI;
    for(i=0;i<50;i++)
    {
        h.first_name[i]=fn[i];
        h.last_name[i]=ln[i];
        h.gender[i]=g[i];
    }
    for(i=0;i<6;i++)
    {
        h.gender[i]=g[i];
    }
    h.d.day=da;
    h.d.mounth=m;
    h.d.year=y;
    h.hight=hh;
    h.weight=w;
    age=2017-y;
    BMI=w/(hh*hh);
    printf("First name : %s\nLast name : %s\nGender : %s\nDate of birth : %d\%d\%d\nheight : %d\nweight : %d\nAge : %d\nBMI : %d",h.first_name,h.last_name,h.gender,h.d.day,h.d.mounth,h.d.year,h.hight,h.weight,age,BMI);
}
int main()
{
    char fn[50],ln[50],g[6];
    int hh,w,da,m,y;
    printf("Enter your first name : ");
    gets(fn);
     printf("\nEnter your first last : ");
     gets(ln);
      printf("\nEnter your gender : ");
      gets(g);
       printf("\nEnter your date of birth : ");
       scanf("%d",&da);
        printf("\");
        scanf("%d",&m);
         printf("\");
         scanf("%d",&y);
          printf("\nEnter your height : ");
          scanf("%d",&hh);
           printf("\nEnter your weight : ");
           scanf("%d",&w);
    return 0;
}
