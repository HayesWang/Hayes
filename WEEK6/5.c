/*
��д���򣬼������ж���ʽ��ֵ:
poly(n,x)=1, �� n=0��
poly(n,x)=x, �� n=1��
poly(n,x)=((2*n-1)*x* poly(n-1,x)-(n-1)* poly(n-2,x))/n, �� n>1��
���룺n��x����ʽ��"%d%lf"��(n<20)
	�������n������ʽ��x����ֵ����ʽ��"%lf\n"��
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double poly(int n, double x);
int main()
{
	int a;
	double b;
	scanf("%d%lf", &a, &b);
	printf("%lf", poly(a, b));
	return 0;
}
double poly(int n, double x)
{
	if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else return (((2 * n - 1) * x * poly(n - 1, x) - (n - 1) * poly(n - 2, x)) / n);
}
