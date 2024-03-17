/*
������㡣��������һ��������Y���Լ���һ��������N����һ���ո�ָ���
�����Y�꿪ʼ��ĵ�N����������һ�꣨���Y���������꣬��Y֮��ĵ�һ��������Y����

�����ʽ������������Y��N���ÿո�ָ�

���������һ������
*/

#include <stdio.h>

// �ж�һ������Ƿ�������
int is_leap_year(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int Y, N, count = 0;

    scanf("%d %d", &Y, &N);

    // ���Y���������꣬�ȰѼ�������һ
    if (is_leap_year(Y)) {
        count++;
    }

    while (count < N) {
        Y++; // ��������
        if (is_leap_year(Y)) {
            count++;
        }
    }

    printf("%d\n", Y);

    return 0;
}
