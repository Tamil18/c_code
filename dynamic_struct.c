#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_VALUE 2
typedef struct 
{
	int student_id;
	char name[20];
	float percentage;
}student;


void main()
{
	student * value=malloc(MAX_VALUE * sizeof (student));
	//printf("%d",value);
	printf("enter details\n");
	for (int i = 0; i < MAX_VALUE; i++)
	{   
		printf("index value :%d",i);
		//printf("enter stu_id");
		value[i].student_id=10 ;
		//printf("enter name");
		value[i].name= "tamil" ;
		//printf("enter percentage");
		value[i].percentage=55.5;
	}

	for (int i = 0; i < MAX_VALUE; i++)
	{
		printf("student_id is :%d\n",(value+i)->student_id);
		printf("student_name is :%s\n",(value+i)->name);
		printf("student_percentage :%f\n",(value+i)->percentage );
	}
}
