#include <stdio.h>

void main ()
{
	int a,i,j,b;
	int n;

	printf("Please input a year number:");
	scanf("%d",&a);
	
	if (a>=2003)                                            //求输入年份的1月1号相对2003年1月1号相差一周中的几天（%7）
	{
		n=(a-2003)*365%7;
		for (i=2003; i<a; i++)                                //求过去了多少个闰年
		{
			if (i%400==0 || i%4==0 && i%100!=0)                 //如果有闰年，n++
				n++;
		}
	}
	else
	{
		n=(2003-a)*365%7;
		for (i=a; i<2003; i++)
		{
			if (i%400==0 || i%4==0 && i%100!=0)
				n++;
		}
	}
	
	if (a>=2003)                                               //求输入年份1月1号星期几
		n=(n+3)%7;
	else if (3-n>0)
		n=(3-n)%7;
	else
		n=(n-3)%7;
	
	printf("                        ====JANUARY====                        \n");       //一月
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                  //二月
	n=(n+31)%7;
	if (a%400==0 || a%4==0 && a%100!=0)
		b=29;
	else
		b=28;
	printf("                       ====FEBRUARY====                        \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+b; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else 
			printf("    ");
	}
	
	printf("\n");                                                                      //三月
	n=(n+b)%7;
	printf("                         ====MARCH====                         \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else 
			printf("    ");
	}

	printf("\n");                                                                    	//四月
	n=(n+31)%7;
	printf("                         ====APRIL====                         \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+30; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                    //五月
	n=(n+30)%7;
	printf("                          ====MAY====                          \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                            //六月
	n=(n+31)%7;
	printf("                         ====JUNE====                          \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+30; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else 
			printf("    ");
	}
	
	printf("\n");                                                                       //七月
	n=(n+30)%7;
	printf("                         ====JULY====                          \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                          //八月
	n=(n+31)%7;
	printf("                        ====AUGUEST====                        \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                     //九月
	n=(n+31)%7;
	printf("                       ====SEPTEMBER====                       \n");
	printf("   Sun      Mon      Tues     Wed     THur      Fri      Sat   \n");
	
	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+30; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                          //十月
	n=(n+30)%7;
	printf("                        ====OCTOBER====                        \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");
	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                   //十一月
	n=(n+31)%7;
	printf("                       ====NOVERMBER====                       \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");
	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+30; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                      //十二月
	n=(n+30)%7;
	printf("                        ====DECEMBER====                       \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");
	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	printf("\n");
}





	





