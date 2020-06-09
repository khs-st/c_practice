#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS

void checkScore(int mScore, int cScore) {
    printf("\n-------------------------");
    printf("\n현재 각 플레이어의 점수입니다.");
    printf("\n플레이어의 점수 : %d", mScore);
    printf("\n컴퓨터의 점수 : %d", cScore);
    printf("\n-------------------------");
}
void setColor(unsigned short text) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),text);
}

int main() {
    int diceCount = 0;
    int diceEnd = 0;
    int mScore = 0;
    int cScore = 0;
    int n = 0;
    int m = 0;
    int num;
    srand(time(NULL));
    printf("------------------------------------------------------------------------\n");
    printf("\n");
    setColor(10); 
        printf("주사위 게임을 실행하겠습니다. \n"); 
        

    printf("\n");

    printf("------------------------------------------------------------------------\n");
    setColor(15);
    printf("종료를 원할 경우 숫자 0을 입력하시오.\n\n");
    printf("총 몇 번의 주사위를 굴리시겠습니까? ");
    scanf_s(" %d", &n);
    if (n==0) {
        printf("------------------------------------------------------------------------\n");
        printf("\n게임을 종료하시겠습니까?\n\n종료를 원하면 0을 입력하시오.\n\n종료를 원하지 않다면 아무 숫자나 입력하시오. \n");
        scanf_s(" %d", &n);
        if (n == 0) {

            printf("------------------------------------------------------------------------\n");
            printf("\n");
            setColor(14);
            printf("게임을 종료합니다.");  return 0;
            
        }
        else {
            printf("다시 실행합니다.\n");
            printf("총 몇 번의 주사위를 굴리시겠습니까? ");
            scanf_s(" %d", &n);
        }
    }
       
    printf("게임 설명 : 주사위를 총 %d 번 굴려 주사위 눈의 합이 더 높은 플레이어가 승리하게 됩니다.", n);
    printf("\n주사위 게임을 시작하겠습니다.");
    printf("\n------------------------");
    diceEnd = n;
    while (diceCount < diceEnd) {
        printf("\n\n주사위를 굴려주세요.\n1번 주사위 굴리기, 2번 현재 눈의 합 확인하기 : ");
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
            setColor(12);
            printf("\n잘못 입력하셨습니다.");
            setColor(15);
        }
    }
    if (mScore > cScore) {
        setColor(14);
        checkScore(mScore, cScore);
        printf("\n\n플레이어의 승리입니다!");
  }
    else if (mScore < cScore) {
        setColor(12);
        checkScore(mScore, cScore);
        printf("\n\n플레이어의 패배입니다...");
    }
    else if (mScore = cScore) {
        setColor(14);
        checkScore(mScore, cScore);
        printf("\n\n무승부입니다.");
    }

    return 0;
}