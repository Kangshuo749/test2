//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
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
	printf("请输入要查找的数字\n");
	int a = 0;
	scanf("%d", &a);
	if (Find(arr, a)) {
		printf("%d在该数组中\n",a);
	}
	else {
		printf("%d不在该数组中\n", a);
	}
	system("pause");
	return 0;
}