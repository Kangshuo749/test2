//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
////形如这样的代码，在面试中，一定要记得一件事，
////校验参数的合法性，典型的就是校验空指针
//size_t myStrlen(const char* str) {
//	//主要有两种方式校验
//	//此处的校验只能校验空指针，不能校验野指针
//	//如果str不为空，而是一个其他的无效指针，从语法层面是无法识别的
//	/*if (str == NULL) {
//		return 0;
//	}*/
//	//assert是一个断言，是一个宏
//	assert(str != NULL);
//	size_t size = 0;
//	while (str[size] != '\0') {
//		size++;
//	}
//	return size;
//}
//int main() {
//	char* p = "abcd";
//	//p = NULL;
//	printf("%d\n", myStrlen(p));
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
char* myStrcpy(char* str1, const char* str2) {

}
int main() {
	char dest[4] = { 0 };
	char src[] = "abcd";
	myStrcpy(dest, src);
	printf("%s\n", dest);
	system("pause");
	return 0;
}