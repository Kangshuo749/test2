#include<stdio.h>
#include<stdlib.h>
int main() {
	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* ptr1 = (int*)(&aa + 1);//&aa的类型是int(*)[2][5],加一跳过整个二维数组指向10后面的元素（超出范围了）
	//int* ptr2 = (int*)(*(aa + 1));//直接取aa+1类型是int(*)[5],*(aa+1)等价于aa[1]等价于一维数组{6，7，8，9，10}
	////接下来的赋值就是把这个一维数组的首元素地址取出来，赋给了ptr2
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	char* a[] = { "work","at","alibaba" };//指针数组，数组里存的是每个字符串的地址
	char** pa = a;//pa里存的是a中首元素的地址
	pa++;//加一跳过一个char*,四个字节
	printf("%s\n", *pa);//%s是打印字符串，是从字符串的起始地址出发，往后找\0,一直打印到\0结束
	system("pause");
	return 0;
}