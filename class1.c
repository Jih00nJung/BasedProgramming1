#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 주석문: 실행시 무시하고 실행됨 */

int main(void) {
/* ----------------------------------------------------------------

//  강의 1주차
  printf("Hello, world\n");
  printf("반갑습니다.\n");


//  강의 2주차
    printf("삑~삑~삑 소리 세 번 : \a\a\a ♬ ♬ ♬\n");
    printf("테스트 글자\r 앞에 있는 글을 덮어씁니다.\n");
    printf("[Tab] 키 사용\t 일정한 간격\t 좋습니다.\n");
    printf("컴퓨터를 \"사랑\"합니다. 큰따옴표 출력\n");

//  표준 출력 형식 지정자
    printf("%d, %d\n", 123, 456789);



    printf("|%d|\n", 789);
    printf("|%5d|\n", 789);
    printf("|%05d|\n", 789);



//  C 언어에서는 String을 사용하는 자바와 달리 char 변수명[]을 사용한다.
    char name[20];

//  한글 문자열 출력은 어떻게 하는지 모르겠다. -- char 대신 wchar_t를 사용해서 변수를 만들고 출력할 때는 %s 대신 %ls를 사용해서 출력하면 된다고 한다.
    printf("이름을 입력하세요.");

//  문자열을 입력받는 함수
    scanf_s("%s", &name);

    printf("안녕하세요. %s님\n", name);

*/ // -----------------------------------------------------------------

/*
//  정수 입력 받아서 출력하기
    int num, num2, plus;
    printf("정수를 입력하세요.");
    scanf_s("%d %d", &num, &num2);
    printf("당신이 입력한 정수는 %d, %d입니다.\n", num, num2);

//  입력받은 정수의 합 출력하기
    plus = num + num2;

    printf("입력된 정수의 합은 %d + %d = %d입니다.\n", num, num2, plus);
*/

//  직접형 표준 입출력 함수 : getch() : enter를 누르지 않고도 값이 전달되는 함수, 값이 전달되는 시점이 어떻게 되는 걸까? --- keyup이 발생될때 값이 전달된다고 한다.

    /*char ch;
    printf("문자를 입력하세요.");
    ch = getchar();
    printf("%c", ch);
*/
/*
    char op1, op2;

    printf("문자 2개를 연속해서 입력하세요.\n");
    printf("첫번째 문자 입력\n");
    scanf_s("%c", &op1, sizeof(op1));

    getchar();  // 버퍼 메모리를 비워주는 역할을 한다.

    printf("두번째 문자 입력\n");
    scanf_s("%c", &op2, sizeof(op2));

    printf("첫번째 문자 출력 : %c\n", op1);
    printf("두번째 문자 출력 : %c\n", op2);

*/

//  도전 문제 2
    float su;

    printf("소수 여섯번째 자리까지 실수 입력 : ");
    scanf_s("%f", &su);

    printf("소수 둘째 자리까지 출력 : %.2f\n", su);
    printf("전체 자리수 6자리, 소수 첫째자리까지 출력 : %06.1f\n", su);







    return 0;
}