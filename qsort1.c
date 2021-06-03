#include<stdio.h>
#include<stdlib.h>
//�ص����������������
//�����Ϊx y��������Ҫ�󣬷���1������������Ҫ�󷵻�0
typedef  int(*Cmp)(int x, int y);
void bubbleSort(int arr[], int len, Cmp cmp) {//Cmp�����ͣ�cmp�Ǳ���
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
	//����������ڱ�ʾ��������
	//x��yС�����Ƿ�������Ҫ��
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
//�������������ʵ����ʵ�ֵ�
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
//�ȽϹ����ǵ�����ʵ�ֵ�
int cmpIdDesc(Student* x, Student* y) {
	return x->id > y->id ? 1 : 0;
}
int cmpScoreDesc(Student* x, Student* y) {
	return x->score > y->score ? 1 : 0;
}
//���������ͬ�����շ�����������
//���������ͬ������id��������
int cmpScoreDescAndIdDesc(Student* x, Student* y) {
	if (x->score == y->score) {
		return x->id > y->id ? 1 : 0;
	}
	return x->score > y->score ? 1 : 0;
}
///////////////////////////////////////////////////////////////////////////////
//ͨ��void*ʵ�֣�һ�����������ܹ�֧�ֶ�������
//////////////////////////////////////////////////////////////////////////////

//�˴���len��ʾ������Ԫ�صĸ���
//unitLen��ʾ������ÿ��Ԫ�صĴ�С
//ÿ��Ԫ�صĴ�С�����ǰ���������������ģ����Ǵ˴���������ʹ��ʹ��void*��֧�ֶ��ֲ�ͬ�����͵�����
//����ÿ��Ԫ�ص��׶೤����Ҫ����Ա�ֶ�ָ��
//һ���ټӻص�����
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
		{1,"����",96},
		{2,"����",90},
		{3,"����",86},
		{4,"����",98},
		{5,"����",90}
	};
	int len = sizeof(students) / sizeof(students[0]);
	bubbleSortStudent(students, len, cmpScoreDescAndIdDesc);
	for (int i = 0; i < len; i++) {
		printf("%s\n", students[i].name);
	}
	system("pause");
	return 0;
}