#include<stdio.h>
main()
{
	FILE *fp;
	int i,num;
	char a[100];
	
	fp=fopen("even.txt","w");
	
	for(i=50;i<70;i++)
	{
		if(i%2==0)
		{
			putw(i,fp);
		}
    }
		fclose(fp);
			
		fp=fopen("even.txt","r");
			
		while((num=getw(fp))!=EOF)
			{
				printf("%d\n",num);
			}
			fclose(fp);
			
			printf("\n\n-------------------------------\n\n");
		
	fp=fopen("odd.txt","w");
	for(i=50;i<70;i++)
	{
		if(i%2==1)
		{
			putw(i,fp);
		}
    }
		fclose(fp);
			
		fp=fopen("odd.txt","r");
			
		while((num=getw(fp))!=EOF)
			{
				printf("%d\n",num);
			}
			fclose(fp);
		
	
	
	
}
