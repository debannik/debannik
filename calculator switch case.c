#include <stdio.h>
#include<conio.h>

void main()
{
	int a,b,result;
	char choice;
	printf("press 1 for add \n press 2 for sub \n press 3 for mul \n press 4 for div \n");
	printf("put value for a: \n");
	scanf("%d",&a);
	printf("put value for b: \n");
	scanf("%d",&b);
	printf("enter your choice: \n");
	scanf("%c",&choice);
	
	switch (choice)
	{
	
	case '+': 
	result=a+b;
	break;
	
	case '-': 
	result=a-b;
	break;
	
	case '*': 
	result=a*b;
	break;
	
	case '/':
	result=a/b;
	break;
}	
	printf("%d is result for the choice made",result);

	getch();
}
