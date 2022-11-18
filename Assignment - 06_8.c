/*Assignment-06 C Language LIVE Community Classes MySirgG*/
/*8. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int number, digit;
	
	printf("Enter Number: ");
	scanf("%d",&number);
	
	printf("Enter Digit : ");
	scanf("%d",&digit);
	
	int res = digit / 10;
	
	if(res == 0)
	{
		number = number * 10 + digit;
		printf("New Value : %d",number);
	}
	else
	{
		printf("you can give single digit value in digit variable");
	}
	
	getch();
}
/*Submitted By

Atish Kumar Sahu
kumarsahuatish280301@gmail.com

*/