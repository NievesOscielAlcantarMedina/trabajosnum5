#include <stdio.h>
int main ()
{
  int hour,minute;

  printf("enter time");
  scanf("%d",&hour);


    printf("enter minute");
  scanf("%d",&minute);


if ( hour<12 & minute<=59){
printf ("good morning");
}else if(hour<18 &minute<=59)
{
    printf ("good evening");
}else if(hour<23 &minute<=59)

printf ("good night");

else if(hour>23 &minute<=59)
{
printf ("not valid");
}
}


