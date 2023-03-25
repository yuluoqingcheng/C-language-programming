#include<stdio.h>
#define STUD_N 40
#define COURSE_N 3
void ReadScore(int score[][COURSE_N], long num[], int n);
void AverforStud(int score[][COURSE_N], int sum[], float aver[], int n);
void AverforCourse(int score[][COURSE_N], int sum[], float aver[], int n);
void Print(int score[][COURSE_N], long num[], int sumS[], float averS[], int sumC[], float averC[], int n);
int main(void)
{
	int score[STUD_N][COURSE_N], sumS[STUD_N], sumC[COURSE_N], n;
	long num[STUD_N];
	float averS[STUD_N], averC[COURSE_N];
	printf("input the total number of the student(n<=40):");
	scanf_s("%d", &n);
	ReadScore(score, num, n);
	AverforCourse(score, sumC, averC, n);
	AverforStud(score, sumS, averS, n);
	Print(score,num, sumS, averS,sumC,averC, n);
	return 0;
}
void ReadScore(int score[][COURSE_N], long num[], int n)//读入数据
{
	int i, j;
	printf("input student's ID anf score as:MT EN PH:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%ld", &num[i]);
		for (j = 0; j < COURSE_N; j++)
		{
			scanf_s("%d", &score[i][j]);
		}
	}
}
void AverforStud(int score[][COURSE_N], int sumS[], float averS[], int n)//计算学生的总分和平均分
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		sumS[i] = 0;
		for (j = 0; j < COURSE_N; j++)
			sumS[i] = sumS[i] + score[i][j];
		averS[i] = (float)sumS[i] / COURSE_N;
	}
}
void AverforCourse(int score[][COURSE_N], int sumC[], float averC[], int n)//计算每个科目的总分和平均分
{
	int i, j;
	for (j = 0; j < COURSE_N; j++)
	{
		sumC[j] = 0;
		for (i = 0; i < n; i++)
		{
			sumC[j] = sumC[j] + score[i][j];
		}
		averC[j] = (float)sumC[j] / n;
	}
}
void Print(int score[][COURSE_N], long num[], int sumS[], float averS[], int sumC[], float averC[], int n)//打印数据
{
	int i, j;
	printf("students' ID\t  MT\t  EN\t  PH\T  SUM\t  AVER\n");
	for (i = 0; i < n; i++)
	{
		printf("%12ld\t", num[i]);
		for (j = 0; j < COURSE_N; j++)
			printf("%4d\t", score[i][j]);
		printf("%4d\t%5.1f\n", sumS[i], averS[i]);
	}
	printf("SumofCourse\t");
	for (j = 0; j < COURSE_N;j++)
	{
		printf("%4d\t", sumC[j]);
	}
	printf("\nAverofCourse\t");
	for (j = 0; j < COURSE_N; j++)
	{
		printf("%4.1f\t", averC[j]);
	}
	printf("\n");
}
