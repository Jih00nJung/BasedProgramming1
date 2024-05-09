#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PI 3.141592

/* 주석문: 실행시 무시하고 실행됨 */


int class1(void) {
//  OT 안 감
}


int class2(void) {
    printf("Hello, world\n");
    printf("반갑습니다.\n");

    return 0;
}


int class3(void) {
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

//  정수 입력 받아서 출력하기
    int num, num2, plus;
    printf("정수를 입력하세요.");
    scanf_s("%d %d", &num, &num2);
    printf("당신이 입력한 정수는 %d, %d입니다.\n", num, num2);

//  입력받은 정수의 합 출력하기
    plus = num + num2;

    printf("입력된 정수의 합은 %d + %d = %d입니다.\n", num, num2, plus);


//  직접형 표준 입출력 함수 : getch() : enter를 누르지 않고도 값이 전달되는 함수, 값이 전달되는 시점이 어떻게 되는 걸까? --- keyup이 발생될때 값이 전달된다고 한다.

    char ch;
    printf("문자를 입력하세요.");
    ch = getchar();
    printf("%c", ch);
    char op1, op2;

    printf("문자 2개를 연속해서 입력하세요.\n");
    printf("첫번째 문자 입력\n");
    scanf_s("%c", &op1, sizeof(op1));

    getchar();  // 버퍼 메모리를 비워주는 역할을 한다.

    printf("두번째 문자 입력\n");
    scanf_s("%c", &op2, sizeof(op2));

    printf("첫번째 문자 출력 : %c\n", op1);
    printf("두번째 문자 출력 : %c\n", op2);

//  도전 문제 2
    float su;

    printf("소수 여섯번째 자리까지 실수 입력 : ");
    scanf_s("%f", &su);

    printf("소수 둘째 자리까지 출력 : %.2f\n", su);
    printf("전체 자리수 6자리, 소수 첫째자리까지 출력 : %06.1f\n", su);

    return 0;
}


int class4(void) {
//  공강이었음
    return 0;
}


int class5_1(void) {
//  C언어에서 사용하는 식별자와 예약어

    char ch_1, ch_2;
    ch_1 = 'a';

    short num1;
    int num2;
    long long num3;

    printf("자료형의 크기를 구하는 함수 : sizeof() 함수\n\n");
    printf("1. short형 변수 : %d 바이트 \n", sizeof(num1));
    printf("2. int형 변수 : %d 바이트 \n", sizeof(num2));
    printf("3. long long형 변수 : %d 바이트 \n", sizeof(num3));
    printf("1바이트는 8비트입니다.\n\n");
    printf("1. short형 변수 : %d 비트 \n", sizeof(num1) * 8);
    printf("2. int형 변수 : %d 비트 \n", sizeof(num2) * 8);
    printf("3. long long형 변수 : %d 비트 \n", sizeof(num3) * 8);

    return 0;
}

int class5_2(void) {

    signed short short1, short2;
    short1 = 32767;
    short2 = 32767 + 8;

    printf("signed short형의 유효 범위 : -32768 ~ 32767 \n");
    printf("1. 변수 num1 = 32767은 정상 출력 : %7d\n", short1);
    printf("2. 변수 num2 = 32767 + 8은 오버플로 발생 (이상한 값이 출력됨) : %7d\n", short2);


    unsigned short un_short_a, un_short_b, result;

    printf("unsigned short형의 유효 범위 : 65,535 \n");
    printf("1. 첫번째 정수 입력 : ");
    scanf_s("%d", &un_short_a);
    printf("2. 두번째 정수 입력 : ");
    scanf_s("%d", &un_short_b);

    result = un_short_a - un_short_b;
    printf("\n뺄셈 연산 : %d - %d = %d \n\n\n", un_short_a, un_short_b, result);

    return 0;
}

int class5_3(void) {

    float height, weight, swap, bmi;

    printf("키 입력(cm):");
    scanf_s("%f", &height);
    printf("몸무게 입력(kg):");
    scanf_s("%f", &weight);

    swap = height / 100;
    bmi = weight / (swap * swap);
    printf("BMI = 체중(kg) / (키(m) x 키(m)) \n");
    printf("cm로 입력한 키를 m로 환산해서 사용 \n");
    printf("BMI = %.2f\n", bmi);

    return 0;
}

int class5_4(void) {
    char alphabet;
    alphabet = 'A';

    printf("알파벳 대문자를 문자형 변수에 대입 : alphabet = \'A\' \n");
    printf("알파벳 출력 : %c \n", alphabet);
    printf("아스키코드 값 출력 : %d \n", alphabet);

    return 0;
    }

int class5_5(void) {
    float f_num;
    f_num = 812.345F;

    printf("float형 상수 출력 : 812.345F \n");
    printf("e지수형으로 출력 : %e \n", f_num);
    printf("E지수형으로 출력 : %E \n", f_num);


    return 0;
}

int class5_6(void) {
    char arr[6] = "space";
    char input[13];

    printf("arr[6] = \"space\" \n");
    printf("문자열 상수 출력 : %s \n", arr);

    printf("문자열 입력:");
    scanf_s("%s", input, sizeof(input));

    printf("제시한 문자열 상수 + 입력한 문자열 = %s%s \n", arr, input);



    return 0;
}

int class5_7(void) {
    float r, area = 0;

    printf("기호상수 PI : 3.141592 \n");
    printf("원의 넓이 = PI * 반지름 * 반지름 \n");

    printf("반지름 입력(cm): ");
    scanf_s("%f", &r);
    area = PI * r * r;

    printf("반지름이 %fcm인 원의 넓이는 %fcm \n", r, area);



    return 0;
}

int challenge1(void) {
    int of, df;

    of = 32767 + 10;
    df = -32767 - 10;

    printf("오버플로 해결 : %d \n", of);
    printf("오버플로 해결 : %d \n", df);
}

int challenge3(void) {
    int a = 7, b = 3;
    float result;

    result = (float) a / b;

    printf("a = 7, b = 3일 때 a / b는 %f \n", result);

    return 0;
}

int class6_1(void) {
//  연산자
    int a = 8;
    int var = a--;              // 8
    int var2 = a;               // 7
    printf("var = %d \n", var);
    printf("var2 = %d \n", var2);

    return 0;
}

int class6_2(void) {
//  증감 연산자
    int val_1, val_2, a, b;

    printf("a = 10, b = 15일 때 \n");

    a = 10;
    b = 15;
    val_1 = ++a + b--;

    printf("1. val_1 = ++a + b-- = %d, a = %d, b = %d \n", val_1, a, b);

    a = 10;
    b = 15;
    val_2 = a++ + --b;

    printf("2. val_2 = a++ + --b = %d, a = %d, b = %d \n", val_2, a, b);

    return 0;
}

int class6_3(void) {
//  논리 연산자
    int a, b, c, val1, val2, val3, val4, val5;
    a = 0, b = 5, c = 8;

    val1 = a && b;
    val2 = a || c;
    val3 = (a >b) && (a < c);
    val4 = !val3;
    val5 = b && c;

    printf("a = 0, b = 5, c = 8일 때 \n");
    printf("1. a && b : %d \n", val1);
    printf("2. a || c : %d \n", val2);
    printf("3. (a >b) && (a < c) : %d \n", val3);
    printf("4. !val3 : %d \n", val4);
    printf("5. b && c : %d \n", val5);

    return 0;
}

int class6_4(void) {
    int num1, num2, max, min;

    printf("정수 2개를 차례대로 입력 \n");

    printf("첫 번째 정수 : ____ \n");
    scanf_s("%d", &num1);

    printf("두 번째 정수 : ____ \n");
    scanf_s("%d", &num2);

    max = (num1 > num2) ? num1 : num2;
    min = (num1 < num2) ? num1 : num2;

    printf("둘 중 큰 수 : %d \n", max);
    printf("둘 중 작은 수 : %d \n", min);

    return 0;
}

int class6_5(void) {
//  시프트 연산자로 비트 연산
    int num, val1, val2, val3, val4;
    num = 5;

    val1 = num << 1;
    val2 = num << 2;
    val3 = num >> 1;
    val4 = num >> 2;

    printf("num = 5일 때 \n");
    printf("1. 왼쪽 시프트 연산 \n");
    printf("num << 1 : %d \n", val1);
    printf("num << 2 : %d \n", val2);
    printf("num >> 1 : %d \n", val3);
    printf("num >> 2 : %d \n", val4);

    return 0;
}

int class6_6(void) {
//  포인터
    int a = 35, val;
    int *addr;

    addr = &a;
    val = *addr;

    printf("a = 35일 때 \n");
    printf("1. 변수 a의 주소 : %d \n", addr);
    printf("2. 변수 a의 주소 (16진수) : %X \n", addr);
    printf("3. 포인터 변수 *addr에 저장된 값 : %d \n", val);

    return 0;
}

int class6_7(void) {
    int a = 20, sum = a + 30;
    printf("%d", sum);
    sum = (a = 20, a + 30);
    printf("콤마 연산자 사용 : %d", sum);

    return 0;
}

#define MB 1024

int challenge4(void) {
    int input, gb;

    printf("GB(기가바이트) 단위로 데이터 입력 :");
    scanf_s("%d", &input);

    gb = input * MB;

    printf("입력한 데이터 양 : %d GB \n", input);
    printf("환산한 데이터 양 : %d KB \n", gb);


    return 0;
}

int challenge5(void) {
    int a, b, result;

    printf("비트 연산을 수행할 정수 입력 :");
    scanf_s("%d", &a);
    printf("왼쪽으로 비트 이동할 정수 입력 :");
    scanf_s("%d", &b);

    result = a << b;

    printf("비트 연산 결과 : %d << % d = %d \n", a, b, result);


    return 0;
}

int class7_1(void) {

    int input_num, result;

    printf("정수 입력: ");
    scanf_s("%d", &input_num);


    if(input_num > 0) {
        printf("입력한 정수 %d는 양의 정수입니다.\n", input_num);
    }
    printf("조건문이 거짓일때도 실행됨 \n");

    result = input_num % 2;

    if(result != 0)
        printf("입력한 정수 %d는 \"홀수\"입니다. \n", input_num);
    else
        printf("입력한 정수 %d는 \"짝수\"입니다. \n", input_num);


    return 0;
}

int class7_2(void) {
    char alphabet;

    printf("알파벳 입력: ");
    scanf_s("%c", &alphabet, sizeof(alphabet));

    if(alphabet >= 'A' && alphabet <= 'Z') { // 알파벳이 대문자인지 판별
        printf("입력한 알파벳 %c는 \"대문자\"이고 \n", alphabet);
        printf("아스키코드 값은 %d입니다. \n", alphabet);

    } else {
        printf("입력한 알파벳 %c는 \"소문자\"이고 \n", alphabet);
        printf("아스키코드 값은 %d입니다. \n", alphabet);
    }


    return 0;
}

int class7_3(void) {
    int jumsu, mok;
    char grade;

    printf("점수 입력 :");
    scanf_s("%d", &jumsu);

    if(jumsu > 100 || jumsu < 0) {
        printf("점수 허용 구간이 아닙니다. \n");
        printf("프로그램을 다시 시작하세요 \n");
    }
    else {

        if (jumsu >= 90) grade = 'A';
        else if (jumsu >= 80) grade = 'B';
        else if (jumsu >= 70) grade = 'C';
        else if (jumsu >= 60) grade = 'D';
        else grade = 'F';

        mok = jumsu / 10;

        printf("입력한 점수: %d \n", jumsu);
        printf("점수 등급: %c 학점 \n", grade);
        printf("입력한 몫 : %d0 \n", mok);
    }

    return 0;
}

int class7_4(void) {
    char blood;

    printf("A형 : A 또는 a \n");
    printf("B형 : B 또는 b \n");
    printf("AB형 : C 또는 c \n");
    printf("O형 : O 또는 o \n");
    printf("혈액형에 해당하는 알파벳 입력 : ");
    scanf_s("%c", &blood, sizeof(blood));

    if(blood == 'A' || blood == 'a') {
        printf("A형 \n");
    } else if(blood == 'B' || blood == 'b') {
        printf("B형 \n");
    } else if(blood == 'C' || blood == 'c') {
        printf("AB형 \n");
    } else if(blood == 'O' || blood == 'o') {
        printf("O형 \n");
    }
    else {
        printf("허용되지 않는 문자입니다. \n");
        printf("대소문자 구별 없이 A, B, C, O만 허용됩니다. \n");
        printf("프로그램을 다시 시작하세요. \n");
    }



    return 0;
}

int class7_5(void) {

    char season;

    printf("봄 : A 또는 a \n");
    printf("여름 : S 또는 s \n");
    printf("가을 : D 또는 d \n");
    printf("겨울 : F 또는 f \n");
    printf("좋아하는 계절에 해당하는 알파벳 입력 : ");
    scanf_s("%c", &season, sizeof(season));

    switch (season) {
        case 'A':
        case 'a':
            printf("선택한 계절: 봄 \n");
            break;

        case 'S':
        case 's':
            printf("선택한 계절: 여름 \n");
            break;

        case 'D':
        case 'd':
            printf("선택한 계절: 가을 \n");
            break;

        case 'F':
        case 'f':
            printf("선택한 계절: 겨울 \n");
            break;

        default:
            printf("선택한 계절 : 오류!! \n");
            printf("알파벳은 대소문자 구별없이 A, S, D, F만 허용됩니다. \n");
            break;
    }


    return 0;
}


int challenge7_1(vold) {

    int keynum, result;

    printf("정수 입력: ");
    scanf_s("%d", &keynum);

    result = keynum % 2;

    if(result != 0) {
        printf("입력한 %d는 \"홀수\"입니다. \n", keynum);
    } else
        printf("입력한 %d는 \"짝수\"입니다. \n", keynum);

    return 0;
}

int challenge7_2(void) {
    int input, check;

    printf("정수 입력: ");
    scanf_s("%d", &input);

    check = input % 3;

    switch (check) {
        case 0:
            printf("입력한 %d는 3의 배수입니다. \n", input);
            break;

        default:
            printf("입력한 %d는 3의 배수가 아닙니다. \n", input);
            break;
    }
    

    return 0;
}

int class7_6(void) {
    int cnt, star;

    for(cnt = 1; cnt <= 5; cnt++) {
        printf("%d행: ", cnt);
        for(star = 1; star <= cnt; star++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(cnt = 1; cnt <= 5; cnt++) {
        printf("%d행: ", cnt);
        for(star = 5; star >= cnt; star--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int class7_7(void) {
    int su, cnt, hap = 0;

    re:
    printf("어디까지 합을 구할까요? : ");
    scanf_s("%d", &su);

    if(su < 0) {
        printf("음의 정수는 허용하지 않습니다. \n");
        printf("프로그램을 다시 시작합니다. \n");
        goto re;
        
    } else {
        cnt = 1;

        while (cnt <= su) {
            hap += cnt;
            printf("%d회 반복 누적합: %d\n", cnt, hap);
            cnt++;
        }
        printf("1부터 %d까지의 누적합: %d\n", su, hap);
    }


    return 0;
}



// rand() : 랜덤값을 출력하는 함수 (항상 무작위로 출력하는 것은 아니다.)
int class8_1(void) {
    int cnt = 0;
    printf("1~45 중에서 숫자 6개 출력 \n");
    printf("rand() : ");

    for (cnt = 1; cnt <= 6; cnt++) {
        printf(" %d ", rand());
    }
    printf("\n");

    printf("1 + (rand() %% 45 ) : ");

    for (cnt = 1; cnt <= 6; cnt++) {
        printf(" %d ", (rand() % 45));
    }
    printf("\n");

    for (cnt = 1; cnt <= 6; cnt++) {
        printf(" %d ", 1 + (rand() % 45));
    }
    printf("\n");


    return 0;
}
#define NUM 45
// srand() : 난수가 발생하는 시간을 다르게 적용하여 무작위의 숫자를 출력해준다.
int class8_2(void) {
    int cnt;

    printf("1~45 중에서 숫자 6개 출력 \n");
    srand((unsigned) time(NULL));               // 시간 차별화

    printf("srand() 출력 : ");

    for (int cnt = 0; cnt < 6; ++cnt) {
        printf(" %d ", 1 + (rand() % NUM));                 // 1~45 사이의 값 출력
    }
    printf("\n");

    return 0;
}


#include <math.h>
int class8_3(void) {
    double result, target = 3.58;

    printf("double형 변수 target의 값 : 3.58 \n");

    result = ceil(target);
    printf("올림 함수 ceil() 사용 결과 : %.2f \n", result);

    result = floor(target);
    printf("올림 함수 floor() 사용 결과 : %.2f \n", result);

    return 0;
}

// fabs() 함수는 제시한 실수의 절댓값을 구할 때 사용하는 함수이다.
int class8_4(void) {
    double result, weight1, weight2;

    printf("내 몸무게 입력(kg) : ");
    scanf_s("%if", &weight1);

    printf("선생님 몸무게 입력(kg) : ");
    scanf_s("%if", &weight2);

    result = weight1 - weight2;
    printf("[뺄샘 연산] %.2f - %.2f = %.2f \n");
    result = fabs(weight1 - weight2);
    printf("[절댓값} %.2f - %.2f = %.2f", weight1, weight2, result);


    return 0;
}


// pow() 함수는 실수값의 제곱을 반환하고, sqrt() 함수는 실수값의 제곱근을 반환한다.
int class8_5(void) {
    int choice;
    double result, num1, num2;

    do {
        printf("1. 제곱값 출력 프로그램 \n");
        printf("2. 제곱근 출력 프로그램 \n");
        printf("3. 프로그램 종료 \n");
        printf("번호 선택(1~3) : ");
        scanf_s("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                printf("1. 제곱값 출력 프로그램 \n");
                printf("실수 입력 : ");
                scanf_s("%lf", &num1);

                printf("지수 실수 입력 : ");
                scanf_s("%lf", &num2);

                result = pow(num1, num2);

                printf("%f의 %f승 결과 : %f \n\n", num1, num2, result);
                break;

            case 2:
                printf("2. 제곱근 출력 프로그램 \n");
                printf("실수 입력 : ");
                scanf_s("%lf", &num1);

                result = sqrt(num1);

                printf("%f의 제곱근 결과 : %f \n\n", num1, result);
                break;

            case 3:
                printf("프로그램을 종료합니다. \n");
                return 0;
                break;

            default:
                printf("선택 오류! 숫자 1, 2, 3 중에서 선택하세요. \n\n");
                continue;
                break;
        }
    } while (1);
}

#include <conio.h>

int class8_6(void) {
    system("title system() 함수 사용 프로그램");

    printf("현재 프로그램이 존재하는 디랙토리 정보 출력 \n");

    system("dir");              // 현재 디랙토리 정보 출력
    printf("\n\n 아무 키나 누르면 프로그램이 종료됩니다. \n");
    printf("문자 입력: ");

    _getch();               // 문자 입력 함수

    system("cls");              // 화면을 모두 지움
    return 0;
}

int Call_val(int su);

int class8_7(void) {
    int num = 100, after;

    printf("[main() 함수 영역] \n");
    printf("전 > 함수 호출하기 전의 값 : %d \n\n", num);

    after = Call_val(num);

    printf("[main() 함수 영역] \n");
    printf("후 > 함수 호출 후의 값 : %d \n\n", after);


    return 0;
}

int Call_val(int su) {
    printf("[Call_val() 함수 영역] \n");
    printf("수행 > 전달받은 값 100에 5를 더하여 반환 \n\n");

    su += 5;
    return su;
}


// 사용자 지정 함수를 이용하여 팩토리얼 계산

int Fact(int n);

int class8_8(void) {
    int input, result;

    printf("전달 > 팩토리얼 구할 정수를 입력: ");

    scanf_s("%d", &input);
    printf("호출 > Fact() 함수 호출하여 팩토리얼 계산 \n");

    result = Fact(input);
    printf("회신 > %d! : %d \n", input, result);


    return 0;
}

int Fact(int n) {
    if(n <= 1) return 1;
    else {
        printf("수행 > %d! : %d * (%d - 1) \n", n, n, n);
        return (n * Fact(n-1));
    }
}


// 도전과제 코드 작성

char bool_err(char yn);
void n_end(char yn);
void test_score();
char score_err(int score);
char grade(int score);


void challenge8() {
    char bool;

    do {
        printf("\등급 변환 프로그램을 시작하려면 Y를 입력하세요.");
        scanf_s("%c", &bool);

        if (bool == 'Y' || bool == 'y') {
            test_score();
            getchar();
            break;
        } else if (bool == 'N' || bool == 'n') {
            n_end(bool);
            break;
        } else {
            bool_err(bool);
            getchar();
            break;
        }
    }
    while (1);
}

void test_score() {

    int mid_test, fin_test, total = 0;

    printf("\n 중간고사 점수를 입력하세요. (50점 만점) \n");
    scanf_s("%d", &mid_test);
    if(mid_test < 0 || mid_test > 50) score_err(mid_test);
    else total += mid_test;

    printf("\n 기말고사 점수를 입력하세요. (50점 만점) \n");
    scanf_s("%d", &fin_test);
    if(fin_test < 0 || fin_test > 50) score_err(fin_test);
    else {
        total += fin_test;
        grade(total);
        getchar();
        challenge8();
    }

}

char bool_err(char yn) {
    return printf("\n 입력한 알파벳 %c는(은) 유효하지 않은 문자입니다. Y, N 중에서 입력해주세요. \n", yn);
}

char grade(int score) {
    if(score > 94 && score < 101) {
        return printf("당신의 시험점수 합계는 %d, 등급은 A+입니다. \n", score);
    } else  if(score > 89 && score < 95) {
        return printf("당신의 시험점수 합계는 %d, 등급은 A0입니다. \n", score);
    } else if(score > 84 && score < 90) {
        return printf("당신의 시험점수 합계는 %d, 등급은 B+입니다. \n", score);
    } else if(score > 79 && score < 85) {
        return printf("당신의 시험점수 합계는 %d, 등급은 B0입니다. \n", score);
    } else if(score > 74 && score < 80) {
        return printf("당신의 시험점수 합계는 %d, 등급은 C+입니다. \n", score);
    } else if(score > 69 && score < 75) {
        return printf("당신의 시험점수 합계는 %d, 등급은 C0입니다. \n", score);
    } else if(score > 64 && score < 70) {
        return printf("당신의 시험점수 합계는 %d, 등급은 D+입니다. \n", score);
    } else if(score > 59 && score < 65) {
        return printf("당신의 시험점수 합계는 %d, 등급은 D0입니다. \n", score);
    } else {
        return printf("당신의 시험점수 합계는 %d, 등급은 F입니다. \n", score);
    }
}

char score_err(int score) {
    printf("\n각 시험점수를 50점 이내로 입력해주세요.\n");
    test_score();
}

void n_end(char yn) {
    printf("\n 알파벳 %c를 입력하셨습니다. 프로그램을 종료합니다.", yn);
    exit(0);
}








int main(void) {
//    class1();
//    class2();
//    class3();
//    class4();
//    class5_7();
//    challenge5();
//    class6_7();
//    class7_3();
//    class7_4();
//    class7_5();
//    class7_6();
//    class7_7();
//    challenge7_1();
//    challenge7_2();
//    class8_1();
//    class8_8();
    challenge8();



    return 0;
}