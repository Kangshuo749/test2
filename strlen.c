//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
////���������Ĵ��룬�������У�һ��Ҫ�ǵ�һ���£�
////У������ĺϷ��ԣ����͵ľ���У���ָ��
//size_t myStrlen(const char* str) {
//	//��Ҫ�����ַ�ʽУ��
//	//�˴���У��ֻ��У���ָ�룬����У��Ұָ��
//	//���str��Ϊ�գ�����һ����������Чָ�룬���﷨�������޷�ʶ���
//	/*if (str == NULL) {
//		return 0;
//	}*/
//	//assert��һ�����ԣ���һ����
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