#include <stdio.h>
int main()
{
	int firstNum, secondNum;
	printf("Enter first number: ");
	scanf("%d", &firstNum);
	printf("Enter second number:");
	scanf("%d", &secondNum);
	printf("Answer sum: %d \n", firstNum+secondNum);
	printf("Answer Minus: %d \n", firstNum-secondNum);
	printf("Answer Multiply: %d \n", firstNum*secondNum);
	printf("Answer Divide: %d \n", firstNum/secondNum);
	return 0;
}
