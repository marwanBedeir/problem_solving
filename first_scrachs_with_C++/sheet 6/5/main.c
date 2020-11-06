#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[30];
    int age;
}user;

typedef union {
    char state[30];
    char country[30];
}place;
int main()
{
    int an;
    user a;
    place p;
    printf("Your name : ");
    scanf("%s",a.name);
    printf("\nYour age : ");
    scanf("%d",&a.age);
    printf("\nDo you are a U.S citizen\n\nif your answer is'YES' press 1\nif your answer is'NO' press 0\n: ");
    scanf("%d",&an);
    if (an==1)
    {
        printf("\nWhat is your state : ");
        scanf("%s",p.state);
    }
    else
    {
        printf("\nWhat is your country : ");
        scanf("%s",p.country);
    }
    return 0;
}
