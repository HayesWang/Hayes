/*ĳ������ߵ�¥��һ�����ݣ��õ�����������¥�������Ⱥ�������С�
���������0�㡣������һ���������к��ֹͣ�ڸ�¥�㣬������0�㡣
��д��������������һ�����е�ʱ�䡣
����ÿ��1����Ҫ6�롣ÿ��1����Ҫ4�롣
����ĳ��ͣ�������������˶��٣���ͣ��5�롣
¥��ֵ���ڵ���1��С��100 , 0�������б�ʾ�����������롣
���룺�����������У�������Ҫͣ���ĸ�¥�㣩����1���ո�ָ�����0��ʾ������
�������������ʱ�䣨�룩��
*/
#include<stdio.h>

int main()
{
	int layer,time=0,cnt=0,before=0;
	scanf("%d",&layer);
	while(layer!=0){
		if(layer>before){
			time+=(layer-before)*6;
			before=layer;
		}else if(layer<before){
			time+=(before-layer)*4;
			before=layer;
		}
		cnt+=1;
		scanf("%d",&layer);
	}
	time+=5*cnt;
	printf("%d",time);
	return 0;
}