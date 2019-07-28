#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	int  i,j, n;
	char a[100][100],temp[100];
	printf("\nEnter No. Of Elements:");
scanf("%d",&n);
printf("\nEnter List:");
for(i=1;i<=n;i++)
{
 printf("\na[%d]:",i);
  scanf("%s",a[i]);
}
//sorting Process
for(j=1;j<=n-1;j++)
{
        for(i=1;i<=n-j;i++)
        {
            if(strcmp(a[i],a[i+1])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],temp);
            }
        }
}
printf("\nSorted List:");
for(i=1;i<=n;i++)
{
 printf("\na[%d]=%s",i,a[i]);
}
	return 0;
}
