#include<stdio.h> 
struct date
{
	int year;
	int month;
	int day;
};

struct student
{
	int id;
	char name[20];
	struct date birthday;
};

void main02()
{
	struct student student1 = {
		.id = 01,
		.name = "Tom",
		.birthday = {
			.year = 2003,
			.month = 11,
			.day = 23
}
	};
	struct student student2 = {
		.id = 02,
		.name = "Jerry",
		.birthday = {
			.year = 2004,
			.month = 12,
			.day = 24
	}
	};
	printf("id:%d,name:%s,birthday:%d.%d.%d\n", student1.id, student1.name, student1.birthday.year, student1.birthday.month, student1.birthday.day);
	printf("id:%d,name:%s,birthday:%d.%d.%d\n", student2.id, student2.name, student2.birthday.year, student2.birthday.month, student2.birthday.day);
}
