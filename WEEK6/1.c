/*
��̼��㺯��ack(m,n)��ֵ��m,n�Ķ������ǷǸ�����(m<=3��n<=9)��
��m=0ʱ��ack(0,n)=n+1
��n=0ʱ��ack(m,0)=ack(m-1,1)
��������£�ack(m,n)=ack(m-1,ack(m,n-1))

*/

#include <stdio.h>

int ack(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ack(m - 1, 1);
    } else {
        return ack(m - 1, ack(m, n - 1));
    }
}

int main() {
    int m, n;

    // ���� m �� n ��ֵ
    scanf("%d %d", &m, &n);

    // ���� ack(m,n) ��ֵ��������
    printf("ack(%d,%d)=%d",m,n,ack(m, n));

    return 0;
}
