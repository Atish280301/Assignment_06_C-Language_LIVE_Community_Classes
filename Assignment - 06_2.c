/*Assignment-06 C Language LIVE Community Classes MySirgG*/
/*Write a program to find last digit of a given number*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	
	int number, last_digit;
	
	printf("Enter A Number :");
	scanf("%d",&number);
	
	last_digit = number % 10;
	
	printf("Last Digit : %d",last_digit);	

	getch();
}
/*Submitted By

Atish Kumar Sahu
kumarsahuatish280301@gmail.com

*/