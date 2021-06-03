#include<stdio.h>
#include<stdlib.h>
//回调函数形如这个样子
//如果认为x y符合排序要求，返回1，不符合排序要求返回0
typedef  int(*Cmp)(int x, int y);
void bubbleSort(int arr[], int len, Cmp cmp) {//Cmp是类型，cmp是变量
	for (int bound = 0; bound < len; bound++) {
		for (int cur = len - 1; cur > bound; cur--) {
			//if (arr[cur - 1] > arr[cur]) {
			if (cmp(arr[cur - 1], arr[cur]) != 1) {
				int tmp = 0;
				tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}
int less(int x, int y) {
	//这个函数用于表示升序排序
	//x比y小，就是符合排序要求
	return x < y ? 1 : 0;
}
int greater(int x, int y) {
	return x > y ? 1 : 0;
}
typedef struct Student {
	int id;
	char name[100];
	int score;
}Student;
typedef int(*CmpStudent)(Student* x, Student* y);
//这个排序函数，是实现者实现的
void bubbleSortStudent(Student arr[], int len, CmpStudent cmp) {
	for (int bound = 0; bound < len; bound++) {
		for (int cur = len - 1; cur > bound; cur--) {
			if (cmp(&arr[cur - 1], &arr[cur]) != 1) {
				Student tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;

			}
		}
	}
}
//比较规则是调用者实现的
int cmpIdDesc(Student* x, Student* y) {
	return x->id > y->id ? 1 : 0;
}
int cmpScoreDesc(Student* x, Student* y) {
	return x->score > y->score ? 1 : 0;
}
//如果分数不同，按照分数降序排序
//如果分数相同，按照id升序排序
int cmpScoreDescAndIdDesc(Student* x, Student* y) {
	if (x->score == y->score) {
		return x->id > y->id ? 1 : 0;
	}
	return x->score > y->score ? 1 : 0;
}
///////////////////////////////////////////////////////////////////////////////
//通过void*实现，一个排序函数，能够支持多种类型
//////////////////////////////////////////////////////////////////////////////

//此处的len表示数组中元素的个数
//unitLen表示数组中每个元素的大小
//每个元素的大小本来是包含在数组类型里的，但是此处迫于无奈使用使用void*来支持多种不同的类型的数组
//于是每个元素到底多长就需要程序员手动指定
//一会再加回调函数
void bubbleSortGeneral(void* arr, int len, int unitLen) {

}
int main() {
	/*int arr[] = { 9,5,2,7,3,6,8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len, greater);
	for(int i=0;i<len;i++){
		printf("%d\n", arr[i]);
	}*/
	Student students[] = {
		{1,"张三",96},
		{2,"李四",90},
		{3,"王五",86},
		{4,"赵六",98},
		{5,"陈七",90}
	};
	int len = sizeof(students) / sizeof(students[0]);
	bubbleSortStudent(students, len, cmpScoreDescAndIdDesc);
	for (int i = 0; i < len; i++) {
		printf("%s\n", students[i].name);
	}
	system("pause");
	return 0;
}