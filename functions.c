#include<stdio.h>
char len(char str[]){int i=0;
while(str[i]){
i=i+1;
}
printf("\n length of the string is %d",i);
}
char copy(char str[]){
char copy[100];
int i=0;
while(str[i]){
copy[i]=str[i];
i=i+1;
}
printf("\nstring after copy: ");
i=0;
while(copy[i]){
printf("%c",copy[i]);
i=i+1;
}
}
char conct(char str1[],char str2[]){char concte[100];
int i=0,j=0;
while(str1[i]){
concte[i]=str1[i];
i=i+1;
}
while(str2[j]){
concte[i]=str2[j];
i=i+1;
j=j+1;
}
printf("\nstring after concatination is :");
i=0;
while(concte[i]){
printf("%c",concte[i]);
i=i+1;
}
}
char upp(char str[]){
int i=0;
printf("\n string in upper:\n");while(str[i]){
printf("%c",str[i]-32);
i=i+1;
}
}
char compare(char str1[],char str2[]){
int i=0,n=0,k=0;
while(str1[i]||str2[i]){
if(str1[i]>str2[i]){
k++;
i=100;
}
else if(str1[i]==str2[i]){
k=k;
n=n;
i++;
}
else{
n++;
i=100;
}}
if(k>0){
printf("\nstring 2 is grater");
}
else if(n>0){
printf("\nstring 3 is grater");
}
else if(k==0&&n==0){
printf("\nboth strings are equal");
}
}
int main(){
char str[100],str1[100],str2[100];
printf("enter string number 1");
gets(str);
printf("\n enter string number 2");
gets(str1);
printf("\n enter string number 3");
gets(str2);
len(str);
copy(str);conct(str1,str2);
upp(str);
compare(str1,str2);
return 0;
}
