/*��дһ�����򣬶���n���û������͵绰���룬
���������ֵ�˳�����к�����û��������͵绰���룬n�Ӽ������롣
�������룺3
zhang 12345678
wang 23456789
liu 34567890
���������
liu 34567890
wang 23456789
zhang 12345678*/

#include <stdio.h>
#include <string.h>

struct info {
	char name[50];
	char nums[50];
};

void swap(struct info *a,struct info *b){
    struct info tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

int main(void)
{
	struct info clients[50], a;
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s%s", clients[i].name, clients[i].nums);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (strcmp(clients[j].name, clients[j + 1].name) > 0) {
				swap(&clients[j],&clients[j+1]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%s %s\n", clients[i].name, clients[i].nums);
	}

	return 0;
}