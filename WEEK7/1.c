/*"д������������λ�ֽڸ�ʽ���磬���û�����82668634ʱ������Ӧ�����82,668,634��
���룺������
�������λ�ֽ��ʽ��
������
82668634
82,668,634*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char nums[50], output[80];
	int count = 0, j = 0;

	gets(nums);

	for (int i = strlen(nums) - 1; i >= 0; i--) {
		count++;
		if (count % 3 == 0) {
			output[j++] = nums[i];
			output[j++] = ',';
		}
		else output[j++] = nums[i];
	}
	output[j] = '\0';
	for (int i = strlen(output) - 1; i >= 0; i--) {
		if (i == strlen(output) - 1 &&
			output[strlen(output) - 1] == ',') continue;
		printf("%c", output[i]);
	}
	
	return 0;
}