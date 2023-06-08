#include<stdio.h>
main()
{
	char a[100],*p;
	int length=0;
	printf("enter any string:");
	gets(a);

	int i;
	
	p=a;
	
	for(i=0;*p!='\0';i++)
	{
		length++;
		p++;
	}
	printf("%s=>%d",a,length);
}
