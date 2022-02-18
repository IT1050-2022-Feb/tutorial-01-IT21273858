/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include<stdio.h>
int main ()
{
	int i,marks[i],total=0;
	float average;
	
	for(i=0;i<2;i++)
	{
		printf("Enter the Marks%d:",i+1);
		scanf("%d",&marks[i]);
		total=total+marks[i];
	}
	average=total/2;
	printf("The Average of the Student is:%.2f",average);
	
	return 0;
}