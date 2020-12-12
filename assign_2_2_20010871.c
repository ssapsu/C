/*******************************************************************
* NAME :            assign2_2_20010871.c
*
* DESCRIPTION :     사용자로부터 정수n을 입력받아 피라미드꼴을 만드는 함수
*
* INPUTS :
*       PARAMETERS:
*           int      n                      -> 몇 번 반복을 받을 건지 입력받기 위한 정수
*
* OUTPUTS :
*       RETURN :   0
*            Type:   int
*
*
* NOTES :
*
*/
#include <stdio.h>

int main()
{
    int n, i = 1, j = 0; //n은 사용자로부터 몇 번 반복할 것인지 받기 위한 변수, i,j는 반복문을 돌리기 위한 변수
    printf("정수를 입력하시오: ");
    scanf_s("%d", &n);
    for (i; i <= n; i++)            //사용자로부터 입력받은 수:n 번 실행한다.
    {
        for (j = 1; j <= i; j++)    //한 줄에는 1부터 n까지의 숫자가 나열된다.
        {
            printf("%d ", j);        
        }
        printf("\n");               //한 줄을 마치면 줄넘김을 한다.
    }
    return 0;
}