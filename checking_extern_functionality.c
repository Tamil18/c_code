#include<stdio.h>
void main()
{
	print();
	printvalue();
}
int print(void)
{
		extern int a;
	    int number=100;
		char letter = 'c';
		char letter1 = 'c';
		printf("the number is : %d the letter is : %d the letter2 is : %c the number is : %d\n",number,letter,letter1,a);
}

