//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
//	printf("左旋几个字符\n");
//	scanf("%d", &k);
//	shift(arr,k);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
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
		printf("字符串b不是字符串a旋转后得到的\n");
	}
	else {
		printf("字符串b是字符串a旋转后得到的\n");
	}
	system("pause");
	return 0;
}