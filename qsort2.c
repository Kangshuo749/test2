#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//回调函数形如这个样子如果认为x y符合排序要求，返回1，不符合排序要求返回0
//typedef  int(*cmp)(int x, int y);
//void bubblesort(int arr[], int len,cmp cmp) {//cmp是类型，cmp是变量
//	for (int bound = 0; bound < len; bound++) {
//		for (int cur = len - 1; cur > bound; cur--) {
//			//if (arr[cur - 1] > arr[cur]) {
//			if(cmp(arr[cur-1],arr[cur])!=1){
//				int tmp = 0;
//				tmp = arr[cur - 1];
//				arr[cur-1] = arr[cur];
//			arr[cur] = tmp;
//		    }
//		}
//	}
//}
//int less(int x, int y) {
//	//这个函数用于表示升序排序
//	//x比y小，就是符合排序要求
//	return x < y ? 1 : 0;
//}
//int greater(int x, int y) {
//	return x > y ? 1 : 0;
//}
//typedef struct student {
//int id;
//char name[100];
//	int score;
//}student;
//typedef int(*cmpstudent)(student* x, student* y);
////这个排序函数，是实现者实现的
//void bubblesortstudent(student arr[], int len, cmpstudent cmp) {
//	for (int bound = 0; bound < len; bound++) {
//	for (int cur = len - 1; cur > bound;cur--) {
//		if (cmp(&arr[cur-1],&arr[cur]) != 1) {
//			student tmp = arr[cur - 1];
//			arr[cur - 1] = arr[cur];
//			arr[cur] = tmp;
//
//			}
//		}
//	}
//}
////比较规则是调用者实现的
//int cmpiddesc(student* x, student* y) {
//	return x->id > y->id ? 1 : 0;
//}
//int cmpscoredesc(student* x, student* y) {
//	return x->score > y->score ? 1 : 0;
//}
////如果分数不同，按照分数降序排序
////如果分数相同，按照id升序排序
//int cmpscoredescandiddesc(student* x, student* y) {
//	if (x->score == y->score) {
//	return x->id > y->id ? 1 : 0;
//	}
//	return x->score > y->score ? 1 : 0;
//}
///////////////////////////////////////////////////////////////////////////////////
//////通过void*实现，一个排序函数，能够支持多种类型
//////////////////////////////////////////////////////////////////////////////////
////如果是比较整型数组，此处的void*就使用int*赋值，如果是比较Student数组，此处的void*就使用Student*赋值
//typedef int (*Cmp)(void*, void*);
////此处的len表示数组中元素的个数
////unitlen表示数组中每个元素的大小
////每个元素的大小本来是包含在数组类型里的，但是此处迫于无奈使用使用void*来支持多种不同的类型的数组
////于是每个元素到底多长就需要程序员手动指定
////一会再加回调函数
//void bubblesortgeneral(void* arr,int len,int unitlen,Cmp cmp) {
//	//arr能[ ]么？
//	//void*本身是不能够进行解引用操作的
//	for (int bound = 0; bound < len; bound++) {
//		for (int cur = len - 1; cur > bound; cur--) {
//			//为了让arr这个void*能够解引用，就需要强制类型转换
//			//同意都转换成char*
//			char* carr = (char*)arr;
//			//要取的元素是cur-1和cur
//			//p1指向cur-1这个元素的首地址
//			char* p1 = carr + (cur - 1) * unitlen;
//			//p2指向cur这个元素的首地址
//			char* p2 = carr + cur*unitlen;
//			if (cmp(p1, p2) != 1) {
//				//交换
//				//先有一个临时的空间
//				char tmp[1024] = { 0 };
//				//先把p1指向的内存拷贝到tmp上
//				memcpy(tmp, p1, unitlen);
//				memcpy(p1, p2, unitlen);
//				memcpy(p1, tmp, unitlen);
//			}
//		}
//	}
//}
////把整数按照升序排
//int cmpInt(void* x, void* y) {
//	//把x和y当成两个int*来理解
//	int* ix = (int*)x;
//	int* iy = (int*)y;
//	return *ix < *iy ? 1 : 0;
//}
////把学生按照分数降序排
//int cmpStudent(void* x, void* y) {
//	student* sx = (student*)x;
//	student* sy = (student*)y;
//	return sx->score > sy->score ? 1 : 0;
//}
//写一个代码实现两个数的加减乘除
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int division(int x, int y) {
	return x / y;
}
typedef int(*Func)(int, int);
int main() {
	//先让用户输入两个整数，再让用户输入按照什么样的规则运算
	int x = 0;
	int y = 0;
	printf("请输入两个整数\n");
	scanf("%d %d", &x, &y);
	printf("请输入要进行的运算\n");
	printf("1.加法；2.减法；3.乘法；4.除法");
	int choice = 0;
	scanf("%d", &choice);
	//在这里搞一个函数指针数组
	Func arr[] = {
		NULL,
		add,
		sub,
		mul,
		division
	};
	int ret = arr[choice](x, y);
	printf("%d\n", ret);
	//根据用户输入的选择决定调用哪个函数
	/*int ret = 0;
	if (choice ==1) {
		ret = add(x, y);
	}
	else if (choice == 2) {
		ret = sub(x, y);
	}
	else if (choice == 3) {
		ret = mul(x, y);
	}
	else if (choice == 4) {
		ret = division(x, y);
	}
	else {
		printf("您输入的choice有误\n");
	}*/
	//printf("%d\n", ret);
	/*int arr[] = { 9,5,2,7,3,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubblesortgeneral(arr, len, sizeof(arr[0]),cmpInt);
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}*/
   /* int arr[] = { 9,5,2,7,3,6,8 };
    int len1 = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, len1, greater);
	for(int i=0;i<len1;i++){
		printf("%d\n", arr[i]);
	}*/
	/*student students[] = {
		{1,"张三",96},
		{2,"李四",90},
		{3,"王五",86},
		{4,"赵六",98},
		{5,"陈七",90}
	};*/
	//int len2 = sizeof(students) / sizeof(students[0]);
	/*bubblesortstudent(students, len2, cmpscoredescandiddesc);
	for (int i = 0; i < len2; i++) {
		printf("%s\n", students[i].name);
	}*/
	system("pause");
	return 0;
}
