#include<stdio.h>#include<string.h>
int main(){
char str[100][100],ch;
int n,i,k;
printf("\n enter the no of strings you want to enter:");
scanf("%d",&n);
i=0;
while(n){
printf("\nenter string number and then in next line enter string");
scanf("%d\n",&k);
gets(str[i]);
printf("\n entered string :");
puts(str[i]);
n--;
i++;
}
i=0;
printf("\nstring starting with a or c :\n");
while(k){
ch=str[i][0];
if(ch=='a'){puts(str[i]);
}
else if(ch=='c'){
puts(str[i]);
}
i++;
k--;
}
return 0;
}
