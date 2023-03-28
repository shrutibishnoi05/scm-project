#include <stdio.h>
int main(){
int num,greatest=0,smallest;
do{
        printf("enter number\n");
        scanf("%d",&num);
        if(num>=greatest){
            greatest=num;
        }
        else if(num<=smallest){
            smallest=num;}
}

        while(num!=0);
        printf("greatest %d\n",greatest);
        printf("smallest %d",smallest);}

