//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void shift(char arr[],int k) {
//	int j = 0;
//	int len = strlen(arr);
//	for(j=0;j<k;j++){
//		int i = 0;
//		char tmp = arr[0];
//		for (i = 0; i < len - 1; i++) {
//			arr[i] = arr[i + 1];
//		}
//		arr[i] = tmp;
//	}
//}
//int main() {
//	char arr[] = "ABCD";
//	int k = 0;
//	printf("���������ַ�\n");
//	scanf("%d", &k);
//	shift(arr,k);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void leftShift(char arr[], int k) {
		int j = 0;
		int len = strlen(arr);
		for(j=0;j<k;j++){
			int i = 0;
			char tmp = arr[0];
			for (i = 0; i < len - 1; i++) {
				arr[i] = arr[i + 1];
			}
			arr[i] = tmp;
		}
	}
void rightShift(char arr[], int k) {
	int j = 0;
	int len = strlen(arr);
	for (j = 0; j < k; j++) {
		int i = 0;
		char tmp = arr[len - 1];
		for (i = 0; i < len - 1; i++) {
			arr[i] = arr[i - 1];
		}
		arr[0] = tmp;
	}
}
int judge(char* a, char* b) {
	char* s;
	int i = 0;
	int len1 = strlen(a);
	int len2 = strlen(b);
	if (len1 != len2) {
		return 0;
	}
	for (i = 0; i < len1; i++) {
		s = a;
		leftShift(s, i);
		if (strcmp(s, b) == 0) {
			return 1;
		}
		s = a;
		rightShift(s, i);
		if (strcmp(s, b) == 0) {
			return 1;
		}
	}
	return 0;
}
int main() {
	char a[] = "ABCDEFG";
	char b[] = "EBCFGAD";
	int n = judge(a, b);
	if (n == 0) {
		printf("�ַ���b�����ַ���a��ת��õ���\n");
	}
	else {
		printf("�ַ���b���ַ���a��ת��õ���\n");
	}
	system("pause");
	return 0;
}