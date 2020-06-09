#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

void checkScore(int mScore, int cScore) {
    printf("\n-------------------------");
    printf("\n현재 각 플레이어의 점수입니다.");
    printf("\n플레이어의 점수 : %d", mScore);
    printf("\n컴퓨터의 점수 : %d", cScore);
    printf("\n-------------------------");
}

int main() {
    int diceCount = 0;
    int diceEnd = 3;
    int mScore = 0;
    int cScore = 0;
    int num;
    srand(time(NULL));

    printf("게임 설명 : 주사위를 총 3 번 굴려 주사위 눈의 합이 더 높은 플레이어가 승리하게 됩니다.");
    printf("\n주사위 게임을 시작하겠습니다.");
    printf("\n------------------------");

    while (diceCount < diceEnd) {
        printf("\n\n주사위를 굴려주세요. 1번 주사위, 굴리기 2번 현재 눈의 합 확인하기 : ");
        scanf_s("%d", &num);

        if (num == 1) {
            int mResult = (rand() % 6) + 1;
            int cResult = (rand() % 6) + 1;

            mScore += mResult;
            cScore += cResult;

            printf("\n\n플레이어의 차례입니다. 주사위를 굴립니다.");
            printf("\n\n띠링! 주사위의 눈은 %d 입니다.", mResult);
            printf("\n\n현재 총 점수는 %d 입니다.", mScore);

            printf("\n\n\n컴퓨터의 차례입니다. 주사위를 굴립니다.");
            printf("\n\n띠링! 주사위의 눈은 %d 입니다.", cResult);
            printf("\n\n현재 총 점수는 %d 입니다.", cScore);

            diceCount++;
        }
        else if (num == 2) {
            checkScore(mScore, cScore);
        }
        else {
            printf("\n잘못 입력하셨습니다.");
        }
    }
    if (mScore > cScore) {
        checkScore(mScore, cScore);
        printf("\n\n플레이어의 승리입니다!");
  }
    else if (mScore < cScore) {
        checkScore(mScore, cScore);
        printf("\n\n플레이어의 패배입니다...");
    }
    else if (mScore = cScore) {
        checkScore(mScore, cScore);
        printf("\n\n무승부입니다.");
    }

    return 0;
}