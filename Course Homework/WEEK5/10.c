/*
��һ�����е����ֵ��Ȼ��ͳ�Ƹ����ֵ���������г��ֵĴ���
���룺Ԫ�ظ���n��n��������n<200����Ҫ���������n��Ȼ��������n������
��������ֵ�����ֵĴ��������ݼ���һ�����Ÿ�����

�������룺
1 2
���������
2,1
*/
#include<stdio.h>
#include<string.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int n,a[201];
    memset(a,999999,sizeof(a));
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(a[j]>a[j+1]&&i!=n){
                swap(&a[j],&a[j+1]);
            }
        }
    }
   /*
   for(int i=1;i<=n;i++){
        printf("%d",a[i]);
    }
   */ 
    //printf("\n");
    int max=a[n],ctr=0;
    for(int i=n;i>=1;i--){
        if(a[i]!=max) break;
        ctr++;
    }
    printf("%d,%d",max,ctr);
}