//====================================
//==	Created By: Luc Gaupin		==
//==	Date......: Jan 9, 2018		==
//==	Purpose...: Assignment1		==
//====================================

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define PAUSE system("PAUSE")
#define CLS system("CLS")
#define FLUSH myFlush()

//	======== Prototype Functions ========
int userInput();
int primeNum(int, int);

//	======== main() Here ========
int main()
{
	userInput();
}

//	======== Function Declaration ========
int userInput()
{
	int num, checkNum;
	printf("Please Enter A Number Between 2 & %i: ", INT_MAX);
	scanf_s("%d", &num);

	checkNum = primeNum(num, num / 2);
		if (checkNum == 1)
		{
			printf("%d is a prime number.\n", num); PAUSE;
		}
		else
		{
			printf("%d is not a prime number.\n", num); PAUSE;
		}

	return 0;
}

int primeNum(int num, int i)
{
	if (i == 1)
	{
		return 1;
	}

	else
	{
		if (num % i == 0)
		{
			return 0;
		}
		else
		{
			return primeNum(num, i - 1);
		}
	}
}

//	======== myFlush() Here ========
void myFlush()
{
	while (getchar() != '\n');
}//	End myFlush()
