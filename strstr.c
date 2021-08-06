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
//	//1.�ҵ�dest�Ľ���λ��
//	int destTail = 0;
//	while (dest[destTail] != '\0') {
//		destTail++;
//	}
//	//ѭ��������ʱ��destTail������ָ����dest��\0λ��
//	//2.�����ݿ�������
//	int i = 0;
//	while (src[i] != '\0') {
//		dest[destTail + i] = src[i];
//		i++;
//	}
//	//3.��destTail����λ����Ϊ\0.
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
	//���αȽ�ÿ���ַ�֮��Ĵ�С��ϵ
	const char* p1 = str1;
	const char* p2 = str2;
	while (*p1 != '\0' && *p2 != '\0') {
		//�Ƚ�p1��p2ָ����ַ��Ĵ�С��ϵ
		if (*p1 < *p2) {
			return -1;
		}
		else if (*p1 > *p2) {
			return 1;
		}
		else {
			//��ȾͱȽ���һ���ַ�
			p1++;
			p2++;
		}
	}
	//����p1��ʼָ����ַ����ǡ�abcd��
	//����p2��ʼָ����ַ����ǡ�ab��
	//��ʱѭ��������ʱ��p1��û��ĩβ��p2�Ѿ���ĩβ��
	//��Ҫ�Ƚ��������µĴ�С��ϵ
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
