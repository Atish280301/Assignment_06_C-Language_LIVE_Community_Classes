/*Assignment-06 C Language LIVE Community Classes MySirgG*/
/*7. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int number;
	
	printf("Enter Value :");
	scanf("%d",&number);
	
	int rev = number / 10;
	
	rev = rev * 10;
	
	printf("Result : %d",rev);
	
	getch();
}
/*Submitted By

Atish Kumar Sahu
kumarsahuatish280301@gmail.com

*/