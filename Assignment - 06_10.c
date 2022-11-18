/*Assignment-06 C Language LIVE Community Classes MySirgG*/
/*10. Write a program to take a three digit number from the user and rotate its digits by one
position towards the right.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int number, count = 0;
	printf("Enter Value : ");
	scanf("%d",&number);
	
	int n = number;
	
	while(n!=0)
	{
		int d = n / 10;
		n = d;
		count++; 
	}
	if(count == 3)
	{
		int rem = number % 10;
		int div = number / 10;
		
		rem = rem * 100;
		int result = rem + div;
		
		printf("Result : %d",result);
	}
	else
	{
		printf("Invalid Number");
	}
	
	getch();
}

/*Submitted By

Atish Kumar Sahu
kumarsahuatish280301@gmail.com

*/