// 학생 검색 프로그램

typedef struct stu_data {
    int sno;
    char name[10];
    char gender;
    char address[20];
    int korean;
    int math;
    int english;
} ST;

int main(void) {
    ST m[7];
    int cnt;

    for(cnt = 0; cnt < 30; cnt++) {
        printf("%d번째 학생의 정보를 입력하세요\n", cnt + 1);
        printf("학번 :");
        scanf_s("%d", &m[cnt].sno);
        printf("이름 :");
        scanf_s("%s", &m[cnt].name);
        printf("성별 (M 또는 F로 입력하세요) :");
        scanf_s(" %c", &m[cnt].gender);
        printf("주소 :");
        scanf_s("%s", &m[cnt].address);
        printf("국어 :");
        scanf_s("%d", &m[cnt].korean);
        printf("수학 :");
        scanf_s("%d", &m[cnt].math);
        printf("영어 :");
        scanf_s("%d", &m[cnt].english);
    }

    // 학번 검색
    int target_sno;
    printf("검색할 학생의 학번을 입력하세요: ");
    scanf("%d", &target_sno);

    for(cnt = 0; cnt < 30; cnt++) {
        if(m[cnt].sno == target_sno) {
            printf("학번: %d\n", m[cnt].sno);
            printf("이름: %s\n", m[cnt].name);
            printf("성별: %c\n", m[cnt].gender);
            printf("주소: %s\n", m[cnt].address);
            printf("국어: %d\n", m[cnt].korean);
            printf("수학: %d\n", m[cnt].math);
            printf("영어: %d\n", m[cnt].english);
            break;
        }
    }

    if(cnt == 30) {
        printf("입력한 학번을 가진 학생을 찾을 수 없습니다.\n");
    }


    // 성별 검색
    int target_gender;
    printf("검색할 학생의 성별을 입력하세요: ");
    scanf("%c", &target_gender);

    for(cnt = 0; cnt < 30; cnt++) {
        if(m[cnt].gender == target_gender) {
            printf("학번: %d\n", m[cnt].sno);
            printf("이름: %s\n", m[cnt].name);
            printf("성별: %c\n", m[cnt].gender);
            printf("주소: %s\n", m[cnt].address);
            printf("국어: %d\n", m[cnt].korean);
            printf("수학: %d\n", m[cnt].math);
            printf("영어: %d\n", m[cnt].english);
        }
        printf("\n");
    }

    if(cnt == 30) {
        printf("입력한 성별을 가진 학생을 찾았습니다.\n");
    }


    return 0;
}