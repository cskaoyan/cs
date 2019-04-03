#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

struct Student
{
	char name[20];

	long int ID,birtheday,age;
	
};

void main()
{
	FILE *fp;
	Student s[10],r[10];
	int i,now;
	printf("请输入现在的日期（如20080808）：");
	scanf("%d",&now);

	for(i=0;i<10;i++)
	{
		printf("请输入第%d个学生的学号：",i+1);
		scanf("%ld",&s[i].ID);
		printf("请输入第%d个学生的姓名：",i+1);
		scanf("%s",s[i].name);
		printf("请输入第%d个学生的生日（如19920101）：",i+1);
		scanf("%d",&s[i].birtheday);
		s[i].age=(now-s[i].birtheday)/10000;
		
	}

	fp=fopen("F:\\student.txt","wb");
	if(fp==NULL)
	{
		printf(" can not creat file F:\\student.txt");
		exit(0);
	}
	fwrite(s,sizeof(Student),10,fp);
	fclose(fp);
	
	fp=fopen("F:\\student.txt","rb");
	if(fp==NULL)
	{
		printf(" can not open file F:\\student.txt");
		exit(0);
	}
	fread(r,sizeof(Student),10,fp);
	fclose(fp);
	printf("________result___________\n");
	printf("____ID_________________name______________age\n");
	for(i=0;i<5;i++)
	{
			printf("%10ld %15s               %2d \n ",r[i].ID,r[i].name,r[i].age);
	}
}
