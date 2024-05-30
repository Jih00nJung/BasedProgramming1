int challenge12_1(void) {
    char *ps;
    char st[11] = { 0 };

    ps = st;

    printf("문자열 입력 (10바이트 이내) : __________ \b\b\b\b\b\b\b\b\b\b");
    scanf_s("%s", st, sizeof(st));

    for(int cnt = 0; cnt < 10; cnt++) {
        printf(" *(ps + %d) : %c\n", cnt, *(ps + cnt));
    }
    return 0;


}

int challenge12_2(void) {

    int cnt, size;
    char *dept[] = {
            "행정학과",
            "법학과",
            "빅데이터사이언스학과",
    };
    printf("전공 학과 선택\n");
    size = sizeof(dept) / sizeof(dept[0]);

    for(cnt = 0; cnt < size; cnt++) {
        printf("%d. %s\n", cnt + 1, dept[cnt]);
    }
    return 0;

}

int challenge12_3(void) {

    int a[5] = {88, 97, 85, 93, 99};
    int (*ap) [5];
    int cnt;

    ap = &a;
    printf("a[5] = {88, 97, 85, 93, 99}\n");

    for(cnt = 0; cnt < 5; cnt++) {
        printf("%d번째 요소 : %d\n", cnt + 1, (*ap)[cnt]);
    }
    return 0;



}

int main(void) {
    challenge12_1();
    challenge12_2();
    challenge12_3();
}


