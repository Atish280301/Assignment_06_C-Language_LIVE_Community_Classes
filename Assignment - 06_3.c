/*Assignment-06 C Language LIVE Community Classes MySirgG*/
/*3. Write a program to find first digit of a given three digit number*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int number, first_digit, digit, count=0, digit1;
	
	printf("Enter Number:");
	scanf("%d",&number);
	
	int num = number;
	
	while(num != 0)
	{
		digit = num / 10;
		num = digit;
		count++;
	}
	if(count != 3)
	{
		printf("Invalid number");
	}
	else
	{
		digit1 = (int)log10(number);
		first_digit = (int)(number/pow(10,digit1));
		printf("First Digit : %d\n",first_digit);	
	}
	
	getch();
}
/*Submitted By

Atish Kumar Sahu
kumarsahuatish280301@gmail.com

*/