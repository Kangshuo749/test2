//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
//����
//arr[i][0]�����1����i��j��ȵ�ʱ��arr[i][j]�����1
//arr[i][j]=arr[i-1][j]+arr[i-1][j-1]
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (i == j || j==0) {
//				arr[i][j] = 1;
//             }
//			else {
//				arr[i][j] =arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <=i; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
