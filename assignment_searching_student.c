// 학생 검색 프로그램

#include <stdio.h>

typedef struct stu_data {
    int sno;
    char name[10];
    char gender;
    char address[20];
    int korean;
    int math;
    int english;
    double avg;
} ST;

ST m[7];
int cnt = 0;

void insert_student() {
    if (cnt >= 7) {
        printf("더 이상 학생을 입력할 수 없습니다.\n");
        return;
    }

    printf("%d번째 학생의 정보를 입력하세요\n", cnt + 1);
    printf("학번 :");
    scanf("%d", &m[cnt].sno);
    printf("이름 :");
    scanf("%s", m[cnt].name);
    printf("성별 (M 또는 F로 입력하세요) :");
    scanf(" %c", &m[cnt].gender); // 공백 추가하여 이전 입력의 개행 문자 제거
    printf("주소 :");
    scanf("%s", m[cnt].address);
    printf("국어 :");
    scanf("%d", &m[cnt].korean);
    printf("수학 :");
    scanf("%d", &m[cnt].math);
    printf("영어 :");
    scanf("%d", &m[cnt].english);

    double sum = m[cnt].korean + m[cnt].math + m[cnt].english;
    m[cnt].avg = sum / 3.0;
    cnt++;
}

void search_sno() {
    // 학번 검색
    int target_sno;
    printf("검색할 학생의 학번을 입력하세요: ");
    scanf(" %d", &target_sno);

    for (int i = 0; i < cnt; i++) {
        if (m[i].sno == target_sno) {
            printf("학번: %d\n", m[i].sno);
            printf("이름: %s\n", m[i].name);
            printf("성별: %c\n", m[i].gender);
            printf("주소: %s\n", m[i].address);
            printf("국어: %d\n", m[i].korean);
            printf("수학: %d\n", m[i].math);
            printf("영어: %d\n", m[i].english);
            printf("평균: %.2f\n", m[i].avg);
            return;
        }
    }
    printf("입력한 학번을 가진 학생을 찾을 수 없습니다.\n");
}

void search_gender() {
    // 성별 검색
    char target_gender;
    printf("검색할 학생의 성별을 입력하세요: ");
    scanf(" %c", &target_gender); // 공백 추가하여 이전 입력의 개행 문자 제거

    int found = 0;
    for (int i = 0; i < cnt; i++) {
        if (m[i].gender == target_gender) {
            printf("학번: %d\n", m[i].sno);
            printf("이름: %s\n", m[i].name);
            printf("성별: %c\n", m[i].gender);
            printf("주소: %s\n", m[i].address);
            printf("국어: %d\n", m[i].korean);
            printf("수학: %d\n", m[i].math);
            printf("영어: %d\n", m[i].english);
            printf("평균: %.2f\n", m[i].avg);
            printf("\n");
            found = 1;
        }
    }
    if (!found) {
        printf("입력한 성별을 가진 학생을 찾을 수 없습니다.\n");
    }
}

void score_array() {
    // 성적 정렬 (내림차순)
    printf("학생들의 성적을 내림차순으로 출력합니다.\n");

    for (int i = 0; i < cnt - 1; i++) {
        for (int j = 0; j < cnt - i - 1; j++) {
            if (m[j].avg < m[j + 1].avg) {
                ST temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < cnt; i++) {
        printf("학번: %d\n", m[i].sno);
        printf("이름: %s\n", m[i].name);
        printf("성별: %c\n", m[i].gender);
        printf("주소: %s\n", m[i].address);
        printf("국어: %d\n", m[i].korean);
        printf("수학: %d\n", m[i].math);
        printf("영어: %d\n", m[i].english);
        printf("평균: %.2f\n", m[i].avg);
        printf("\n");
    }

    printf("학생들의 성적을 내림차순으로 출력했습니다.\n");
}

int main(void) {
    int function14;

    while (1) {
        printf("원하는 기능의 번호를 입력하세요\n"
               "1. 학생 입력\n"
               "2. 학번 검색\n"
               "3. 성별 검색\n"
               "4. 성적 출력\n"
               "0. 프로그램 종료\n");
        scanf(" %d", &function14);

        switch (function14) {
            case 1:
                insert_student();
                break;
            case 2:
                search_sno();
                break;
            case 3:
                search_gender();
                break;
            case 4:
                score_array();
                break;
            case 0:
                printf("프로그램을 종료합니다.\n");
                return 0;
            default:
                printf("잘못된 선택입니다. 다시 선택하세요.\n");
        }
    }
}
