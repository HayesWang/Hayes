/*
���һ��������ĳһ�Σ�����������Ԫ�أ��ĸ�Ԫ��ֵ����ͬ�������Ϊ��ֵ���жΡ���ֵ���ж���Ԫ�صĸ���������ֵ���жεĳ��ȡ�
���룺 �������������г���N��N������������1<=N<=50), N��������ÿ����֮���Կո������
����� �����г������ĵ�ֵ���жε�ʼĩ�±꣨0��N-1������Ӣ�Ķ��ŷָ������û�е�ֵ���жΣ������NO
˵����
����ж��ͬ�ȳ��ȵĵ�ֵ���У�ֻ�����һ����ֵ���е���ֹ�±ꡣ
�������룺
7
3 1 2 1 1 2 2
���������
3,4
*/
#include<stdio.h>
#include<string.h>
int main(){
    int a,b[1000],ctr=1,cf[10],st[10];
    memset(cf,0,sizeof(cf));
    memset(st,0,sizeof(st));
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b[i]);
    }
    for(int i=1;i<=a;i++){
        ctr=1;
        int j=i;
        while(b[i+1]==b[i]){
//            printf("%d,%d,%d ",i,b[i],ctr);
            ctr++;
            i++;
            
        }
//        printf("\n %d",cf[b[i]]);
        i=j;
        if(cf[b[i]]<ctr){
            st[b[i]]=i;
            cf[b[i]]=ctr;
//            printf("%d,%d,%d | ",i ,st[b[i]],cf[b[i]]);
        }
    }
    int bgst=0;
    for(int i=0;i<10;i++){
 //       printf("%d %d",st[i],cf[i]);
 //       printf("\n");
        if(cf[i]>cf[bgst]){
            bgst=i;
        }
    }
    if(cf[bgst]!=1){
        printf("%d,%d",st[bgst]-1,st[bgst]+cf[bgst]-2);
    }else{
        printf("NO");
    }
    return 0;
}