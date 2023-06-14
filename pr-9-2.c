#include<stdio.h>
struct student
{
	int roll_no;
	char name[100];
	int chem_mark;
	int maths_mark;
	int phy_mark;
}s[100];

main()
{
	int i,n;
	int sum=0;
	float p;
	
	printf("enter student number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the student's details:%d\n",i+1);
		
		printf("enter rollno: ");
		scanf("%d",&s[i].roll_no);
		
		printf("enter your name: ");
		fflush(stdin);
		gets(s[i].name);
		
		printf("enter chemistry mark: ");
		scanf("%d",&s[i].chem_mark);
		
		printf("enter maths mark: ");
		scanf("%d",&s[i].maths_mark);
		
		printf("enter physics mark: ");
		scanf("%d",&s[i].phy_mark);
		
	}
	for(i=0;i<n;i++)
	{
		sum=+s[i].chem_mark+s[i].maths_mark+s[i].phy_mark;
		p=(sum*100)/300;
		printf("%s(%d)\nchemistry=>%d\nmaths=>%d\nphysics=>%d\ntotal=>%d\\300\npercent=>%f%%",s[i].name,s[i].roll_no,s[i].chem_mark,s[i].maths_mark,s[i].phy_mark,sum,p);
		
		printf("\n\n-----------------------------------\n\n");
		
	}
}
