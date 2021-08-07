//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//const char* myStrstr(const char* str1, const char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	assert(str1 != '\0');
//	assert(str2 != '\0');
//	const char* black =str1;
//	//外层循环通过black控制从str1的哪个位置开始找子串
//	while (*black != '\0') {
//		const char* red = black;
//		const char* sub = str2;
//		//内层循环就是从black开始，判断当前这个子串和str2是否相等
//		while (*red != '\0' && *sub != '\0'&&*red==*sub) {
//			red++;
//			sub++;
//		}
//		//以上循环结束有三种可能
//		//1.*red=='\0'，可以直接结束循环，直接进入下次循环
//		//2.*sub=='\0'，找到了，直接返回black
//		//3.*red!=*sub，直接进入下次循环
//		if (*sub == '\0') {
//			return black;
//		}
//		black++;
//	}
//	return NULL;
//}
//int main() {
//	char* str1 = "hello world";
//	char* str2 = "llo";
//	const char* result = myStrstr(str1, str2);
//	printf("%c\n", *result);
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main() {
//	char str[] = "aaaa bbbb cccc dddd";
//	char* pch = strtok(str, " ");
//	while (pch != NULL) {
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ");
//	}
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//void* myMemcpy(void* dest, const void* src, size_t num) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	//按照字节为单位进行拷贝
//	char* cdest = (char*)dest;
//	const char* csrc = (char*)src;
//	for (size_t i = 0; i < num; i++) {
//		cdest[i] = csrc[i];
//	}
//	return dest;
//}
//typedef  struct Student {
//	int id;
//	char name[1024];
//}Student;
//int main() {
//	char str[] = "hello";
//	char str2[1024] = { 0 };
//	myMemcpy(str2, str, sizeof(str));
//	printf("%s\n", str2);
//	system("pause");
//	return 0;
//}
//int main() {
//	Student s1 = { 1,"zhangsan" };
//	Student s2;
//	myMemcpy(&s2, &s1, sizeof(Student));
//	printf("%d,%s\n", s2.id, s2.name);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* myMemmove(void* dest, const void* src, size_t num) {
	assert(dest != NULL);
	assert(src != NULL);
	assert(num != 0);
	char* cdest = (char*)dest;
	const char* csrc = (const char*)src;
	if (csrc <= cdest && cdest <= csrc + num) {
		//如果内存重叠了，就倒着拷贝
		for (size_t i = num; i > 0; i--) {
			cdest[i - 1] = csrc[i - 1];
		}
		return dest;
	}
	else {
		//如果不重叠，正着拷贝
		for (size_t i = 0; i < num; i++) {
			cdest[i] = csrc[i];
		}
		return dest;
	}
}
int main() {
	int arr[] = { 1,2,3,4 };
	int arr2[100] = { 0 };
	myMemmove(arr2, arr, sizeof(arr));
	for (int i = 0; i < 4; i++) {
		printf("%d\n", arr2[i]);
	}
	system("pause");
	return 0;
}
