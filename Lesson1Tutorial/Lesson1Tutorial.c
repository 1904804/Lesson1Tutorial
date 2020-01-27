//Lesson 1 Tutorial
#include <stdio.h>

/*void main()
{
	int myAge;
	int myMark;
	float myCoffee;
	char myBestGrade;
	char myName[10];

	printf("Please enter your age : ");

	scanf_s("%d", &myAge);

	printf("my age is %d", myAge);

	printf("\nWhat mark would you like ?");

	scanf_s("%d" , &myMark);

	printf("Your mark is - %d" , myMark);

	printf("How much did you pay for your coffee ?\n");

	scanf_s("%f", &myCoffee);

	printf("You pay \x9C%.2f", myCoffee);

	printf("What is your best grade this year ?");
	scanf_s(" %c", &myBestGrade);
	printf("Well done on your %c ", myBestGrade);

	printf("What is your name - ");
	scanf_s("%s", &myName);
	printf("Hello - %s", myName);

}*///more on varibles

/*void main()//test calculator
{
	int number1;
	int number2;
	int number3;
	int numberTotal;
	char numberCalc;

	printf("What do you want to do + - p or - - t ? \n");
	scanf_s(" %c", &numberCalc);

	printf("Please enter your first number - \n");
	scanf_s("%d", &number1);
	printf("Please enter your second number - \n");
	scanf_s("%d", &number2);
	printf("Please enter your third number - \n");
	scanf_s("%d", &number3);

	
	printf("You entered %d and %d and %d \n", number1 ,number2 , number3);
	printf("%c", numberCalc);
	if (numberCalc == 'p')
		numberTotal = number1 + number2 + number3;
		printf("You choose ADD /n");
		printf("The total is %d /n", numberTotal);
	if (numberTotal == 't')
		numberTotal = number1 - number2 - number3;
		printf("You choose TAKEAWAY /n");
		printf("The total is %d /n", numberTotal);

}*/

void main()
{
	int lenght;
	int width;
	int totalArea;

	float amount;
	float convertion;
	float convertedAmount;

	printf("Area of an regtangle :)\n\n");
	printf("Please enter the lenght of the area - \n");
	scanf_s("%d", &lenght);
	printf("Please enter the width of the area - \n");
	scanf_s("%d", &width);

	totalArea = lenght * width;

	printf("The total area is %d \n", totalArea);

	printf("Currency convertion :)\n\n");

	printf("Please enter the amount of UK Pounds you wish to convert - ");
	scanf_s("%f", &amount);
	printf("Please enter the currency convertion amount - ");
	scanf_s("%f", &convertion);
	convertedAmount = amount * convertion;
	printf("You will have $%.2f from \x9C%.2f \n", convertedAmount, amount);
}