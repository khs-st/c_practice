#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS

void checkScore(int mScore, int cScore) {
    printf("\n-------------------------");
    printf("\n���� �� �÷��̾��� �����Դϴ�.");
    printf("\n�÷��̾��� ���� : %d", mScore);
    printf("\n��ǻ���� ���� : %d", cScore);
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
        printf("�ֻ��� ������ �����ϰڽ��ϴ�. \n"); 
        

    printf("\n");

    printf("------------------------------------------------------------------------\n");
    setColor(15);
    printf("���Ḧ ���� ��� ���� 0�� �Է��Ͻÿ�.\n\n");
    printf("�� �� ���� �ֻ����� �����ðڽ��ϱ�? ");
    scanf_s(" %d", &n);
    if (n==0) {
        printf("------------------------------------------------------------------------\n");
        printf("\n������ �����Ͻðڽ��ϱ�?\n\n���Ḧ ���ϸ� 0�� �Է��Ͻÿ�.\n\n���Ḧ ������ �ʴٸ� �ƹ� ���ڳ� �Է��Ͻÿ�. \n");
        scanf_s(" %d", &n);
        if (n == 0) {

            printf("------------------------------------------------------------------------\n");
            printf("\n");
            setColor(14);
            printf("������ �����մϴ�.");  return 0;
            
        }
        else {
            printf("�ٽ� �����մϴ�.\n");
            printf("�� �� ���� �ֻ����� �����ðڽ��ϱ�? ");
            scanf_s(" %d", &n);
        }
    }
       
    printf("���� ���� : �ֻ����� �� %d �� ���� �ֻ��� ���� ���� �� ���� �÷��̾ �¸��ϰ� �˴ϴ�.", n);
    printf("\n�ֻ��� ������ �����ϰڽ��ϴ�.");
    printf("\n------------------------");
    diceEnd = n;
    while (diceCount < diceEnd) {
        printf("\n\n�ֻ����� �����ּ���.\n1�� �ֻ��� ������, 2�� ���� ���� �� Ȯ���ϱ� : ");
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
            setColor(12);
            printf("\n�߸� �Է��ϼ̽��ϴ�.");
            setColor(15);
        }
    }
    if (mScore > cScore) {
        setColor(14);
        checkScore(mScore, cScore);
        printf("\n\n�÷��̾��� �¸��Դϴ�!");
  }
    else if (mScore < cScore) {
        setColor(12);
        checkScore(mScore, cScore);
        printf("\n\n�÷��̾��� �й��Դϴ�...");
    }
    else if (mScore = cScore) {
        setColor(14);
        checkScore(mScore, cScore);
        printf("\n\n���º��Դϴ�.");
    }

    return 0;
}