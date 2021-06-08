#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp1(const void* x, const void* y) {//整型
	return(*(int*)x) - (*(int*)y);
}
int cmp2(const void* x, const void* y) {//字符型
	return(*(char*)x) - (*(char*)y);
}
int cmp3(const void* x, const void* y) {//字符串型
	return strcmp(*(char**)x, *(char**)y);
}
int cmp4(const void* x, const void* y) {//浮点型
	return (*(double*)x) - (*(double*)y);
}

int main() {
	int i = 0;
	int arr1[] = { 1,23,45,32,42,54,2,47,86 };
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, len1, sizeof(arr1[0]), cmp1);
	for (i = 0; i < len1; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	char arr2[] = { 'a','f','g','h','R','Y','M' };
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr2, len2, sizeof(arr2[0]), cmp2);
	for (i = 0; i < len2; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	char* arr3[] = { "asd","tfs","TF","hgf","uh","DFE" };
	int len3 = sizeof(arr3) / sizeof(*arr3);
	qsort(arr3, len3, sizeof(*arr3), cmp3);
	for (i = 0; i < len3; i++) {
		printf("%s ", arr3[i]);
	}
	printf("\n");
	double arr4[] = { 4.3,23.2,45.7,32.66,42.34,54.78,2.70,47.6,86.6 };
	int len4 = sizeof(arr4) / sizeof(arr4[0]);
	qsort(arr4, len4, sizeof(arr4[0]), cmp4);
	for (i = 0; i < len4; i++) {
		printf("%f ", arr4[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}