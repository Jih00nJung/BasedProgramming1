// 도전과제 코드 작성

char bool_err(char yn);
void n_end(char yn);
void test_score();
char score_err(int score);
char grade(int score);


void main() {
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
        main();
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