#include <stdio.h>
struct student
{
    int REGID;
	char name[30];
	float CGPA;
	char village[30];
	char district[30];
	long long int phone;
};

void main()
{
	int i, n,j;
	struct student st[20], temp;
	printf("Enter number of students data you want to enter:\n");
	scanf("%d",&n);
	for(i=0;i < n;i++)
	{
	    printf("Enter REGID of student %d\n",(i+1));
		scanf("%d",&st[i].REGID);
		printf("Enter name of student %d\n",(i+1));
		scanf("%s",&st[i].name);
		printf("Enter CGPA of student %d\n",(i+1));
		scanf("%f",&st[i].CGPA);
		printf("Enter village name of student %d\n",(i+1));
		scanf("%s",&st[i].village);
		printf("Enter district name of student %d\n",(i+1));
		scanf("%s",&st[i].district);
		printf("Enter phone No of student %d\n",(i+1));
		scanf("%lld",&st[i].phone);

	}
	for(i=0;i < (n-1);i++)
 	{
 		for(j=0;j < (n-i-1);j++)
 		{
 			if(st[j].REGID > st[j+1].REGID)
 			{
 				temp = st[j];
 				st[j] = st[j+1];
 				st[j+1] = temp;
 			}
 		}
 	}
    printf("\n\n\n\t\t******Sorted in ascending order******\n");
 	for(i=0; i < n;i++)
 	{
 		printf("REGID of student %d\n",st[i].REGID);
 		printf("name of student %S\n",st[i].name);
 		printf("CGPA of student %f\n",st[i].CGPA);
 		printf("village name of student %s\n",st[i].village);
 		printf("district name of student %s\n",st[i].district);
 		printf("phone No of student %lld\n",st[i].phone);
 	}
}
