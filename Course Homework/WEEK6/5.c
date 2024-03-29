/*
编写程序，计算下列多项式的值:
poly(n,x)=1, 当 n=0；
poly(n,x)=x, 当 n=1；
poly(n,x)=((2*n-1)*x* poly(n-1,x)-(n-1)* poly(n-2,x))/n, 当 n>1；
输入：n和x，格式："%d%lf"。(n<20)
	输出：第n个多项式在x处的值，格式："%lf\n"。
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
