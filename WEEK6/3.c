/*
��дһ�����򣬴Ӽ����϶���һ�����ִ���������ת��Ϊ��Ӧ��СдӢ�����ֵ�����������磺����234�����two three four��
���룺һ������
������ÿո����Ӣ�����ֵ��ʣ�Ӣ����ĸ����Сд����
������
234
two three four
�������룺
0
���������
zero
*/
#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    scanf("%s",c);
    int str=strlen(c);
    for(int i=0;i<str;i++){
        if(i>0) printf(" ");
        switch (c[i]) { // ���������ַ������Ӧ��Ӣ�ĵ���
                case '0':
                    printf("zero");
                    break;
                case '1':
                    printf("one");
                    break;
                case '2':
                    printf("two");
                    break;
                case '3':
                    printf("three");
                    break;
                case '4':
                    printf("four");
                    break;
                case '5':
                    printf("five");
                    break;
                case '6':
                    printf("six");
                    break;
                case '7':
                    printf("seven");
                    break;
                case '8':
                    printf("eight");
                    break;
                case '9':
                    printf("nine");
                    break;
        }
    }
}