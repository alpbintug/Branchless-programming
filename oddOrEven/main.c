#include <stdio.h>
void branched_evenOrOdd(int value) {

	if (value % 2)
	{
		printf("Odd\n");
		return;
	}
	printf("Even\n");
	return;
}

void branchless_evenOrOdd1(int value) {
	char result[2][6] = { "Even\n","Odd\n" };
	printf("%s", result[value % 2]);
	return;
}

void branchless_evenOrOdd2(int value) {
	(value & 1 && printf("Odd\n")) || printf("Even\n");
	return;
}
int main()
{
    //CHANGE THE VALUE ACCORDING TO YOUR NEEDS
	int i = 0;
	for(i;i<100;i++)
        branchless_evenOrOdd1(i);
	return 0;
}
