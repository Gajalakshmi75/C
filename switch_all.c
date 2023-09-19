#include<stdio.h>
int main()
{
    float a,b;
    int x,y,pow;
    int op;
    printf("WELCOME TO BASIC MAATHEMATICAL OPERATIONS");
    printf("\n \n \n \n");
    printf("Here are the some operations \n");
    printf("1.Addition \n2.subtraction \n3.multiplication \n4.division \n5.modulus \n6.power");
    printf("\n \n");
    printf("Enter your number:");
    scanf("%f %f",&a,&b);
    printf("enter your option:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("sum of the %f and %f is:%f",a,b,a+b);
        break;
        case 2:
        printf("subtraction of the %f and %f is:%f",a,b,a-b);
        break;
        case 3:
        printf(" multiplication  of the %f and %f is:%f",a,b,a*b);
        break;
        case 4:
        printf("sdivision of the %f and %f is:%f",a,b,a/b);
        break;
        case 5:
            printf("modulus of %f and %f is:%d",x,y,x%y);
            break;
        case 6:
            while(y)
            {
              pow=pow*a;
              y--;

            }
            printf("power id %d",pow);
            break;
        default:
            printf("Enter the correct option");
            break;
    }
    return 0;
}
