#include<stdio.h>
void cube(int n)
{
 int a[n][n];
 int i,j,*p;
 
 for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  	  printf("a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);	
    }
  }
  
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  	  p=&a[i][j];
  	  printf("%d\n",(*p)*(*p)*(*p));
    }
  }
}
  
  int main()
  {
  	int n;
  	
  	printf("enter array size:");
  	scanf("%d",&n);
  	
  	cube(n);
  }

