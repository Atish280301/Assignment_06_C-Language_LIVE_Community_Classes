/*Assignment-06 C Language LIVE Community Classes MySirgG*/
/*4. Write a program to find middle digit of a given three digit number*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int number, middle_digit, digit, count;
	
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
		middle_digit = (number/10)%10;
		printf("Middle Digit : %d\n",middle_digit);	
	}
	
	getch();
}
/*Submitted By

Atish Kumar Sahu
kumarsahuatish280301@gmail.com

*/