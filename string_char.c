#include<stdio.h>
#include<string.h>
void sortString(char*inputString,char*outputArray);
int main()
{
 char inputString[100],outputArray[100]  ;
 int main()
 {
   printf("enter a string:\n");
   gets(inputString);
   sortString(inputString,outputArray);
   printf("sorted String \n%s",outputArray);
   getct();
   return 0;

 }
 void sortString(char* inputString, char* outputArray){
/* initialize counterArray to 0 */
int counterArray[256] ={0}, length, counter, index;
length = strlen(inputString);
/* Count frequency of characters in input array*/
for(counter = 0; counter < length; counter++){
counterArray[inputString[counter]]++;
}
/* Populate output array */for(counter = 0, index = 0; counter < 256; counter++){
if(counterArray[counter] != 0){
while(counterArray[counter] > 0){
outputArray[index++] = counter;
counterArray[counter]--;
}
}
}
outputArray[index] = '\0';
}
}
