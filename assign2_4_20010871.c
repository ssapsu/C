/***********************************************************************
* FILENAME :        assign2_4_20010871.c
*
* DESCRIPTION :
*       정수 n을 입력받아 1부터 n까지 존재하는 소수를 출력하는 프로그램이다.
*
* PUBLIC FUNCTIONS :
*       None
*
* NOTES :
*
*       정수 n을 입력받는 함수 get_integer와 소수 판별함수인 is_prime을 이용한 함수이다.
*
*
*
* AUTHOR :    Hyeonsu Oh (hans324oh@sejong.ac.kr)
*
*
*/
#include <stdio.h>

int is_prime(int);				//소수인지 판별하는 함수
int get_integer(void);			//정수를 입력받는 함수
int main()
{
	int n, result;
	n = get_integer();
	printf("1 부터 %d까지 소수는 ", n);
	for (int i = 0; i < n; i++)//1부터 n까지 반복
	{
		result = is_prime(i);  //i번째 정수가 소수인지 판별
		if (result == 1)	   //소수라면(result==1) i를 출력한다.
			printf("%d ", i);
	}
	printf("(이)가 있습니다.");
	return 0;
}
int get_integer(void)
{
	int n;
	printf("정수를입력하시오 : ");
	scanf_s("%d", &n);
	return n;
}								//n을 입력받고 값을 리턴한다.
int is_prime(int i)
{
	int divisors = 0, j;
	for (j = 1; j <= i; j++)
	{
		if (i % j == 0)
			divisors++;			//자기자신과 1로만 나눠진다면 반환하는지 확인하는 알고리즘
	}
	return (divisors == 2);
}