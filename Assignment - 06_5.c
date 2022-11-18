/*Assignment-06 C Language LIVE Community Classes MySirgG*/
/*5. Write a program to swap values of two int variables*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int num1, num2, swap;
	
	printf("Enter Value1 : ");
	scanf("%d",&num1);
	
	printf("Enter Value2 : ");
	scanf("%d",&num2);
	
	swap = num1;
	num1 = num2;
	num2 = swap;
	
	printf("New Value1 : %d\n",num1);
	printf("New Value2 : %d\n",num2);
	
	getch();
}
/*Submitted By

Atish Kumar Sahu
kumarsahuatish280301@gmail.com

*/