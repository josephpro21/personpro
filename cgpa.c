#include <stdio.h>

int main()

{

int num_of_subjects = 0; //To store number of subjects

float temp = 0;

float sum = 0; //To store total grade 

float cgpa = 0.0; //To store total CGPA 

printf("Enter number of number of subjects\n");

scanf("%d", &num_of_subjects);

printf("Enter the subject Grade i.e [0-5]\n");

for(int i =1; i<= num_of_subjects; i++)

{

printf("Enter %d  Grade\t", i);

scanf("%f", &temp); //get individual semester GPA

sum += temp; //Add all sem GPA

}

cgpa = sum/(float)num_of_subjects; //Calculate average

printf("Over all GPA is\t%.2f\n", cgpa ); //The .2f trancuates the cgpa to 2 dp

return 0;

}
