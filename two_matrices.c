#include<stdio.h>
int main()
{
    int n, m,p,q,c,d,first[10][10],second[10][10],sum[10][10],diff[10][10];
printf("\nEnter the number of rows and columns of the first matrix\n\n");
scanf("%d%d",&m,&n);
printf("\nenter the number of rows and columns of the second matrix\n\n");
scanf("%d%d",&p,&q);
printf("\nEnter the %d elements of the first matrix \n\n",m*n);
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&first[c][d]);
printf("\nEnter the %d elements of the second matrix\n\n",p*q);
for(c =0;c<p;c++)
for(d=0;d<q;d++)
scanf("%d",&second[c][d]);
printf("\n\nThe first matrix m*n is: \n\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",first[c][d]);
}
printf("\n");
}
printf("\n\nThe second matrix p*q is: \n\n");
for(c=0;c<p;c++)
{
for(d=0;d<q;d++)
{
printf("%d\t",second[c][d]);
}
printf("\n");
}
for(c=0;c<m;c++)
for(d=0;d<n;d++)
sum[c][d]=first[c][d]+second[c][d];
printf("\n\nThe sum of the two entered matrices is: \n\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",sum[c][d]);
}
printf("\n");
}
for(c=0;c<m;c++)
for(d=0;d<n;d++)
diff[c][d]=first[c][d]-second[c][d];
printf("\n\nThe difference(subtraction) of the two entered matriceszis: \n\n");
for(c=0;c<m;c++)
{
for(d =0;d<n;d++)
{
printf("%d\t",diff[c][d]);
}
printf("\n");}
return 0;
}
