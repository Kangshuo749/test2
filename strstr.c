//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//size_t myStrlen(const char* str) {
//	assert(str != NULL);
//	size_t size = 0;
//	while (str[size] != '\0') {
//		size++;
//	}
//	return size;
//}
//int main() {
//	char* p = "abcd";
//	printf("%d\n",myStrlen(p));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char* myStrcpy(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	int i = 0;
//	while (src[i] != '\0') {
//		dest[i] = src[i];
//		i++;
//	}
//	dest[i] = '\0';
//	return dest;
//}
//int main() {
//	char dest[1024] = { 0 };
//    char src[]= "hello";
//	myStrcpy(dest, src);
//	printf("%s\n", dest);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char* myStrcat(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	//1.找到dest的结束位置
//	int destTail = 0;
//	while (dest[destTail] != '\0') {
//		destTail++;
//	}
//	//循环结束的时候，destTail变量就指向了dest的\0位置
//	//2.把数据拷贝过来
//	int i = 0;
//	while (src[i] != '\0') {
//		dest[destTail + i] = src[i];
//		i++;
//	}
//	//3.把destTail最后的位置设为\0.
//	dest[destTail + i] = '\0';
//	return dest;
//}
//int main() {
//	char dest[1024] = "hello ";
//	char src[] = "world";
//	myStrcat(dest, src);
//	printf("%s\n", dest);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int myStrcmp(const char* str1, const char* str2) {
	assert(str1 != NULL);
	assert(str2 != NULL);
	//依次比较每个字符之间的大小关系
	const char* p1 = str1;
	const char* p2 = str2;
	while (*p1 != '\0' && *p2 != '\0') {
		//比较p1和p2指向的字符的大小关系
		if (*p1 < *p2) {
			return -1;
		}
		else if (*p1 > *p2) {
			return 1;
		}
		else {
			//相等就比较下一个字符
			p1++;
			p2++;
		}
	}
	//假设p1初始指向的字符串是“abcd”
	//假设p2初始指向的字符串是“ab”
	//此时循环结束的时候p1还没到末尾，p2已经到末尾了
	//需要比较这个情况下的大小关系
	return *p1 - *p2;
}
int main() {
	char str1[] = "abcde";
	char str2[] = "abc";
	int ret = myStrcmp(str1, str2);
	if (ret > 0) {
		printf("str1>str2\n");
	}
	else if (ret < 0) {
		printf("str1<str2\n");
	}
	else {
		printf("str1=str2\n");
	}
	system("pause");
	return 0;
}
