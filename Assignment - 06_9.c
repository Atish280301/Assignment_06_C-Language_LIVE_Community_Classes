/*Assignment-06 C Language LIVE Community Classes MySirgG*/
/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	float USD_INR = 76.23;
	
	float ammount;
	printf("Enter Ammount : ");
	scanf("%f",&ammount);
	
	printf("USD Value Of Ammount : %f",ammount/USD_INR);
	
	getch();
}
/*Submitted By

Atish Kumar Sahu
kumarsahuatish280301@gmail.com

*/