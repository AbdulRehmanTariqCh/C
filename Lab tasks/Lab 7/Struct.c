#include<stdio.h>
#include<string.h>
#define STUDENTS 3

struct Student
{
	int rollno;
	char name[50];
	float fee;
};

int main()
{
	int input, i, chk = 0;
	struct Student Stu[STUDENTS];

	do {
		if (chk == 0) {
			printf("\n1. Add record\n2. View record\n3. Exit\n\n_\r");
		}
		else {
			printf("\n1. Overwrite record\n2. View record\n3. Exit\n\n_\r");
		}
		scanf("%d", &input);
		chk++;
		switch (input)
		{
		case 1:
			for (i = 0; i < STUDENTS; i++)
			{
				printf("\nName: ");
				fflush(stdin);
				fgets(Stu[i].name, 50, stdin);
				printf("Roll number: ");
				scanf("%d", &Stu[i].rollno);
				printf("Fee: ");
				scanf("%f", &Stu[i].fee);
			}
			break;
		case 2:
			for (i = 0; i < STUDENTS; i++)
			{
				printf("Student no.%d: \n\t  Name: ", i + 1);
				puts(Stu[i].name);
				printf("\t  Roll number: %d\n", Stu[i].rollno);
				printf("\t  Fee: %.2f\n", Stu[i].fee);
			}
			break;
		case 3:
			exit(0);
		default:
			printf("Invalid input!\n");
		}
	} while (input != 3);

	system("pause");
	return 0;
}