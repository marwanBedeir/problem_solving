#include <stdio.h>
#include <stdlib.h>

typedef struct birth_date
{
    int day;
    int month;
    int year;
}bd;
typedef struct Employee
{
    int id_no;
    int salary;
    bd birth;
    int id_tasks[5];

}E;
void input(int id,int salary,int day,int month,int year,int tasks[],E arr[],int x)
{
    size_t i;
    E emp1;

    emp1.id_no=id;
    emp1.salary=salary;
    emp1.birth.day=day;
    emp1.birth.month=month;
    emp1.birth.year=year;

    for(i=0;i<5;i++)
    {
        emp1.id_tasks[i]=tasks[i];
    }
    arr[x]=emp1;
}
int search(E arr[],int size,int s_id)
{
    if(size==0&&s_id!=arr[size].id_no)
        return -1;
    else
    {
    if(s_id==arr[size].id_no)
        return arr[size].salary;
    else
        return search(arr,size-1,s_id);
    }
}

int main()
{
    E arr[3];
    int id,salary,day,month,year,tasks[5],i,t,s_id;

    for(i=0;i<3;i++)
    {
        scanf("%d",&id);
        scanf("%d",&salary);
        scanf("%d",&day);
        scanf("%d",&month);
        scanf("%d",&year);

        for(t=0;t<5;t++)
        {
            scanf("%d",&tasks[i]);
        }

    input(id,salary,day,month,year,tasks,arr,i);
    }
    scanf("%d",&s_id);

    i=search(arr,3,s_id);

    printf("%d",i);
    return 0;
}
