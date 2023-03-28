#include <stdio.h>
int main()
{int y,m,t;
printf("year\n ");
scanf("%d",&y);
printf("month\n ");
scanf("%d",&m);

switch(m){
case 12:
t=31;
case 11:
t+=30;
case 10:
t+=31;
case 9:
t+=30;
case 8:
t+=31;
case 7:
t+=31;
case 6:
t+=30;
case 5:
t+=31;
case 4:
t=30;
case 3:
t+=31;
if (y%4==0){
case 2:
t+=29;
case 1:
t+=31;
}
else if (y%4!=0){
t+=59;}


}

printf("total days %d",t)}
