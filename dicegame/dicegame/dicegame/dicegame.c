#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

void checkScore(int mScore, int cScore) {
    printf("\n-------------------------");
    printf("\n���� �� �÷��̾��� �����Դϴ�.");
    printf("\n�÷��̾��� ���� : %d", mScore);
    printf("\n��ǻ���� ���� : %d", cScore);
    printf("\n-------------------------");
}

int main() {
    int diceCount = 0;
    int diceEnd = 3;
    int mScore = 0;
    int cScore = 0;
    int num;
    srand(time(NULL));

    printf("���� ���� : �ֻ����� �� 3 �� ���� �ֻ��� ���� ���� �� ���� �÷��̾ �¸��ϰ� �˴ϴ�.");
    printf("\n�ֻ��� ������ �����ϰڽ��ϴ�.");
    printf("\n------------------------");

    while (diceCount < diceEnd) {
        printf("\n\n�ֻ����� �����ּ���. 1�� �ֻ���, ������ 2�� ���� ���� �� Ȯ���ϱ� : ");
        scanf_s("%d", &num);

        if (num == 1) {
            int mResult = (rand() % 6) + 1;
            int cResult = (rand() % 6) + 1;

            mScore += mResult;
            cScore += cResult;

            printf("\n\n�÷��̾��� �����Դϴ�. �ֻ����� �����ϴ�.");
            printf("\n\n�층! �ֻ����� ���� %d �Դϴ�.", mResult);
            printf("\n\n���� �� ������ %d �Դϴ�.", mScore);

            printf("\n\n\n��ǻ���� �����Դϴ�. �ֻ����� �����ϴ�.");
            printf("\n\n�층! �ֻ����� ���� %d �Դϴ�.", cResult);
            printf("\n\n���� �� ������ %d �Դϴ�.", cScore);

            diceCount++;
        }
        else if (num == 2) {
            checkScore(mScore, cScore);
        }
        else {
            printf("\n�߸� �Է��ϼ̽��ϴ�.");
        }
    }
    if (mScore > cScore) {
        checkScore(mScore, cScore);
        printf("\n\n�÷��̾��� �¸��Դϴ�!");
  }
    else if (mScore < cScore) {
        checkScore(mScore, cScore);
        printf("\n\n�÷��̾��� �й��Դϴ�...");
    }
    else if (mScore = cScore) {
        checkScore(mScore, cScore);
        printf("\n\n���º��Դϴ�.");
    }

    return 0;
}