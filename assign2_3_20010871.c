/*******************************************************************
* NAME :            assign2_3_20010871.c
*
* DESCRIPTION :     간단한 정수 계산기
*
* INPUTS :
*       PARAMETERS:
*           int		num1,num2		                -> 연산에 필요한 두 정수형 변수
*			char	op								-> 어떤 연산을 할 것인지 혹은 반복을 종료할 것인지에 사용할 문자형 변수
*
* OUTPUTS :
*       RETURN :	0
*            Type:   int
*
*
* NOTES :
*
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;	//입력받을 값
	char op;	//입력받을 문자형 변수
	
	do
	{	
		char enter;
		printf("*************************\n\nA----Add\nS----Subtract\nM----Multiply\nD----Divide\nQ----Quit\n\n*************************\n");
		printf("연산을 선택하시오: ");
		scanf("%c", &op);
		enter=getchar();				//엔터입력을 없애기 위해서
		if (op == 'Q') break;	//Q를 입력받을 시 do-while loop 나가기
		else if (op == 'A' || op == 'S' || op == 'M' || op == 'D')	//Q가 아니고 A,S,M,D일 경우
		{
			printf("두수를 공백으로 분리하여 입력하시오: ");
			scanf_s("%d %d", &num1, &num2);
			switch (op)
			{
			case 'A':
			{
				printf("%d + %d = %d\n", num1, num2, num1 + num2);
				break;
			}
			case 'S':
			{
				printf("%d - %d = %d\n", num1, num2, num1 - num2);
				break;
			}
			case 'M':
			{
				printf("%d * %d = %d\n", num1, num2, num1 * num2);
				break;
			}
			case 'D':
			{
				if (num2 == 0)
				{
					printf("분모가 0이 되어서는 안됩니다\n다시 입력해주세요.\n");							//분모가 0일 경우 수학적으로 오류임으로 사용자에게 다시 입력하라고 알린다. 
					continue;
				}
				printf("%d / %d = %lf\n", num1, num2, (double)(num1) /(double)(num2));
				break;
			}
			}
		}
		else
			continue;

		getchar();														//엔터키를 받기 위함
	} while (1);
	return 0;
}

