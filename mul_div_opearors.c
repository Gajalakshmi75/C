#include<stdio.h>
int mul(a,b){
int i,c;
c=a;
for(i=0;i<b;i++){
c=c+a;}
printf("their multiplication is : %d",a);
}
int div(a,b){
int i=0;
while(a>=b){
a=a-b;
i++;
}
printf("reminder is %d",a);
printf("quotient is %d",i);
printf("\n a/b is %d",i);
}
int main(){
int a,b,option;
printf("what do you want\n give input 1 for multiplication \n give input 2 for division\n" );
scanf("%d",&option);
switch(option){
case(1):{
printf("\nenter 1 st value :");
scanf("%d",&a);
printf("\n enter 2 nd value:");
scanf("%d",&b);mul(a,b);
break;
}
case(2):{
printf("\nenter 1 st value :");
scanf("%d",&a);
printf("\n enter 2 nd value:");
scanf("%d",&b);
div(a,b);
break;
}
}
return 0;
}
