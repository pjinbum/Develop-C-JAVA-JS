#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number, attempts = 0;

    // 난수를 위한 시드 설정
    srand(time(0));

    // 1부터 100 사이의 난수 생성
    number = rand() % 100 + 1;

    printf("1부터 100 사이의 숫자를 맞춰보세요.\n");

    do {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number) {
            printf("더 작은 숫자를 입력하세요.\n");
        } else if (guess < number) {
            printf("더 큰 숫자를 입력하세요.\n");
        } else {
            printf("정답입니다! 축하합니다.\n");
            printf("시도한 횟수: %d\n", attempts);
            break;
        }
    } while (1);

    return 0;
}