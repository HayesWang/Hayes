/*
��a+aa+aaa+aaaa+��+aa...a��n����������aΪ1��9֮���������
���磺��a = 1, n = 3ʱ����1+11+111֮��Ϊ123��
���룺������е�����a������������n
�������ʽ�ͽ����
�������룺
2 7
���������
2+22+222+2222+22222+222222+2222222=2469134
*/
#include <stdio.h>
#include <math.h>
int main(){
    int a,n,sum=0;
    scanf("%d %d",&a,&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",a);
            sum+=a*pow(10,j-1);
        }
        if(i!=n) printf("+");
    }
    printf("=%d",sum);
}