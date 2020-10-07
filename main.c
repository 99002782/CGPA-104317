#include <stdio.h>
void calculate(int cgpa);
int main()

{

int num_sem = 0;

float temp = 0;

float sum = 0;

float gpa = 0.0;

printf("Enter number of semesters\n");

scanf("%d", &num_sem);

printf("Enter max GPA per semester Example: In US it is 4, in India it is 10\n");
int i;

for(i =1; i<= num_sem; i++)

{

printf("Enter %d sem GPA\t", i);

scanf("%f", &temp);

sum += temp;

}

gpa = sum/(float)num_sem;

printf("Over all GPA is\t%f\n", gpa );
calculate(gpa);
}
void calculate(int cgpa)
{

if(cgpa<5)
printf("D");
if(cgpa>5&&cgpa<=6)
printf("C");
if(cgpa>6&&cgpa<=7)
printf("B");
if(cgpa>7&&cgpa<=8)
printf("A");


}
