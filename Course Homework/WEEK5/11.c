/*
ÿ��һ��ʼ����һ���ڻ�����ǩ�ֵ��˻���ţ����һ��ǩ�ֵ��˻������š�����ǩ���ļ�¼����Ӧ���ҵ����쿪�ź����ŵ��ˡ�
��¼��֤ÿ���˵�ǩ��ʱ���������ǩ��ʱ�䣬����û��������ͬʱǩ����ǩ�ˡ�
���룺һ��ļ�¼����¼��������M��ͷ��M�Ǽ�¼���������M�У�ÿ�еĸ�ʽΪ��
ID_number Sign_in_time Sign_out_time������ʱ����HH:MM:SS��ʽ������ID number��һ��������15���ַ����ַ����� 
�������һ����������쿪�������ŵ���Ա��ID�š�������ID�ű�����һ���ո������

�������룺
3 
CS301111 15:30:28 17:00:10 
SC3021234 08:00:00 11:25:25 
CS301133 21:45:00 21:58:40
���������
SC3021234 CS301133
*/
#include<stdio.h>

struct sign
{
    char ID[20];
    int s1h;
    int s1m;
    int s1s;
    int soh;
    int som;
    int sos;
}stu[100];

int main(){
    int n,a[100],b[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s %d:%d:%d",stu[i].ID,&stu[i].s1h,&stu[i].s1m,&stu[i].s1s);
        scanf("%d:%d:%d",&stu[i].soh,&stu[i].som,&stu[i].sos);
    }
    for(int i=1;i<=n;i++){
        a[i]=stu[i].s1h*10000+stu[i].s1m*100+stu[i].s1s;
        b[i]=stu[i].soh*10000+stu[i].som*100+stu[i].sos;
    }
    int min=__INT_MAX__,max=0,mm,nn;
    for(int i=1;i<=n;i++){
        if(a[i]<min){
            min=a[i];
            mm=i;
        }
        if(b[i]>max){
            max=b[i];
            nn=i;
        }
    }
    printf("%s %s",stu[mm].ID,stu[nn].ID);
}