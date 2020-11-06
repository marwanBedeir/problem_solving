#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,p;

    scanf("%f",&s);

    p=(s/400)*100;

    if (p>=85){
            printf("excellent");
    }

    else {
            if (p>=75){
        printf("very good");
        }

          else {
                if (p>=65){
            printf("Good");}

                else {
                        if (p>=50)

        printf("pass");

                      else{
                            printf("fail");
                          }
                      }
                }

          }



    return 0;
}
