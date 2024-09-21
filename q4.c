#include<stdio.h>
#include<conio.h>

main()
{
	char Alphabet='a';
	
	printf("Enter a Alphabet ");
	scanf("%c",&Alphabet);
	
	if(Alphabet>='a')
	
	switch(Alphabet)
	{
		case 'a':printf("This is a Vowel ");
		break;
		case 'e':printf("This is a Vowel ");
		break;
		case 'i':printf("This is a Vowel ");
		break;
		case 'o':printf("This is a Vowel ");
		break;
		case 'u':printf("This is a Vowel ");
		break;
		
		default:
			printf("This is a constant.");
	}
}
