//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX_ROW 4
#define MAX_COL 4
int Find(int arr[MAX_ROW][MAX_COL], int a) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (a == arr[row][col]) {
				return 1;
				break;
			}
		}
	}
	return 0;
}
int main() {
	int arr[MAX_ROW][MAX_COL] = { 1,2,3,4,2,3,4,5,3,4,5,6,4,5,6,7};
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			printf("%d\t", arr[row][col]);
		}
		printf("\n");
	}
	printf("������Ҫ���ҵ�����\n");
	int a = 0;
	scanf("%d", &a);
	if (Find(arr, a)) {
		printf("%d�ڸ�������\n",a);
	}
	else {
		printf("%d���ڸ�������\n", a);
	}
	system("pause");
	return 0;
}