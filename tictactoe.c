// 틱택토 코드 만들기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 5

void print_board(char board[R][C]);
int check_winner(char board[R][C], char player);
int is_valid_move(char board[R][C], int row, int col, char player);
void initialize_board(char board[R][C]);

int main(void) {
    char tic[R][C];
    int r, c;
    int turn = 0;

    srand(time(NULL));
    initialize_board(tic);

    printf("초기 게임 설정, O 12개와 X 13개 배치\n");

    print_board(tic);

    printf("게임을 시작합니다. O 플레이어부터 행과 열을 입력해 주세요.\n");

    while (1) {
        char current_player = (turn % 2 == 0) ? 'O' : 'X';
        char opponent = (current_player == 'O') ? 'X' : 'O';
        printf("Player %c의 차례입니다. 상대방의 %c를 뒤집을 위치를 입력하세요 (행 열): ", current_player, opponent);
        scanf("%d %d", &r, &c);

        if (r >= 0 && r < R && c >= 0 && c < C && tic[r][c] == opponent) {
            tic[r][c] = current_player;
            print_board(tic);
            if (check_winner(tic, current_player)) {
                printf("Player %c가 승리했습니다!\n", current_player);
                break;
            }
            turn++;
        } else {
            printf("잘못된 입력입니다. 다시 시도하세요.\n");
        }
    }

    return 0;
}

void print_board(char board[R][C]) {
    for (int j = 0; j < R; j++) {
        printf("|---|---|---|---|---|\n");
        for (int k = 0; k < C; k++) {
            printf("| %c ", board[j][k]);
        }
        printf("|\n");
    }
    printf("|---|---|---|---|---|\n\n");
}

int check_winner(char board[R][C], char player) {

    for (int i = 0; i < R; i++) {
        int count = 0;
        for (int j = 0; j < C; j++) {
            if (board[i][j] == player) {
                count++;
                if (count == 5) return 1;
            } else {
                count = 0;
            }
        }
    }

    for (int j = 0; j < C; j++) {
        int count = 0;
        for (int i = 0; i < R; i++) {
            if (board[i][j] == player) {
                count++;
                if (count == 5) return 1;
            } else {
                count = 0;
            }
        }
    }

    for (int i = 0; i <= R - 5; i++) {
        for (int j = 0; j <= C - 5; j++) {
            int count = 0;
            for (int k = 0; k < 5; k++) {
                if (board[i + k][j + k] == player) {
                    count++;
                    if (count == 5) return 1;
                } else {
                    break;
                }
            }
        }
    }

    for (int i = 4; i < R; i++) {
        for (int j = 0; j <= C - 5; j++) {
            int count = 0;
            for (int k = 0; k < 5; k++) {
                if (board[i - k][j + k] == player) {
                    count++;
                    if (count == 5) return 1;
                } else {
                    break;
                }
            }
        }
    }

    return 0;
}

void initialize_board(char board[R][C]) {
    int total = R * C;
    int used[total];
    int index = 0;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i = 0; i < total; i++) {
        used[i] = i;
    }
    for (int i = total - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = used[i];
        used[i] = used[j];
        used[j] = temp;
    }

    for (int i = 0; i < 12; i++) {
        int pos = used[index++];
        int row = pos / C;
        int col = pos % C;
        board[row][col] = 'O';
    }
    for (int i = 0; i < 13; i++) {
        int pos = used[index++];
        int row = pos / C;
        int col = pos % C;
        board[row][col] = 'X';
    }
}