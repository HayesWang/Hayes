/*
����һ�����Ȳ����� 100 ���ַ�����ɾ�����е��ظ��ַ���
���룺����Ҫ�����ַ��������Ȳ�����100���ַ������磺abacaeedabcdcd��
�����ɾ���ظ��ַ�����ַ��������磺abced��

�������룺
give
���������
give
*/

#include<stdio.h>
#include<string.h>
int main(){
    char c[101],d[26];
    memset(d,0,sizeof(d));
    scanf("%s",c);
    int str=strlen(c);
    for(int i=0;i<str;i++){
        int j= c[i] - 'a';
        if(d[j]==0){
            d[j]=1;
            printf("%c",c[i]);
        }
    }

}