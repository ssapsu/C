/*******************************************************************
* NAME :            assign2_1_20010871.c
*
* DESCRIPTION :     종이를 몇 번 접어야 종이의 두께가 지구부터 달의 거리까지 도달할 수 있는 지 알아내는 프로그램
*
* INPUTS :
*       PARAMETERS:
*           double		n		                -> 종이의 두께를 표현하기 위한 변수
*
* OUTPUTS :
*       RETURN :	0
*            Type:   int
*
*
*AUTHOR :    Hyeonsu Oh (hans324oh@sejong.ac.kr)
*
*/
#include <stdio.h>

int main()
{
	double n = 0.0001;//n의 단위는 미터이다.
	int cnt = 0;
	while (n <= 406000000) //두께가 40만 6천 km 이 되기 전까지 while loop 실행
	{
		n = n * 2; //종이를 접을 시 종이의 두께는 두 배가 된다.
		cnt++; // 접고 나서 접은 횟수를 1번 추가시킨다.
	}
	printf("종이 접기를 %d번 하면 종이의 두께가 지구부터 달까지의 거리만큼이 된다", cnt); //접은 횟수 출력
	return 0;
}