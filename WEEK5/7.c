/*
��д���������ַ������ַ�����s�У�������һ���ַ�������c���ж�s���Ƿ���c�������򽫸��ַ���s��ɾ�����������û�У�������ַ�����NotFound����
����2�У�1���ַ�����1���ַ���
�����ɾ������ַ���
����1��
���룺
smiles
s
�����
mile
����2��
���룺
smiles
a
�����
NotFound
�������룺
aab
b
���������
aa
*/
#include<stdio.h>
#include<string.h>
int main(){
    char c[100],tg;
    int a[100],fd=0;
    memset(c,'@',sizeof(c));
    memset(a,0,sizeof(a));
    gets(c);
    scanf("%c",&tg);
    int i=0,str=strlen(c);
    while(i<str){
        if(c[i]==tg){
            a[i]=1;
            fd=1;
        }
        i++;
    }
    i=0;
    while(i<str){
        if(fd==0){
            printf("NotFound");
            break;
            
        }
        if(a[i]==0){
            printf("%c",c[i]);
        }
        i++;
    }
}