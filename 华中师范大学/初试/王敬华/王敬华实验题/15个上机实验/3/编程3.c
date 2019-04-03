#include<stdio.h>
#include<string.h>

main()
{
	int a[99]={0},b[99]={0},c[10000]={0};
	char d[100]={0};
	int i,j,m,n;
	printf("请输入乘数：");
	
	scanf("%s",d);
    i=strlen(d);
	m=i;
	for(j=0;j<i;j++)
		a[i-j-1]=d[j]-'0';
    printf("请输入被乘数:");
    scanf("%s",d);

    i=strlen(d);
	n=i;
	for(j=0;j<i;j++)
		b[i-j-1]=d[j]-'0';

	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			c[i+j]=c[i+j]+a[i]*b[j];
     for(i=0;i<m+n;i++)
	 {
		 if(c[i]>9)
		 {
			 c[i+1]=c[i]/10+c[i+1];

             c[i]=c[i]%10;
		 }
	 }
	 printf("这两个数的积是：");
	 for(i=m+n;i>0;i--)
		 if(c[i]!=0)
			 break;
     for(j=i;j>=0;j--)
		 printf("%1d",c[j]);

	 
  return 0;  
}
