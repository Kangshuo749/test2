#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ص���������������������Ϊx y��������Ҫ�󣬷���1������������Ҫ�󷵻�0
//typedef  int(*cmp)(int x, int y);
//void bubblesort(int arr[], int len,cmp cmp) {//cmp�����ͣ�cmp�Ǳ���
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
//	//����������ڱ�ʾ��������
//	//x��yС�����Ƿ�������Ҫ��
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
////�������������ʵ����ʵ�ֵ�
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
////�ȽϹ����ǵ�����ʵ�ֵ�
//int cmpiddesc(student* x, student* y) {
//	return x->id > y->id ? 1 : 0;
//}
//int cmpscoredesc(student* x, student* y) {
//	return x->score > y->score ? 1 : 0;
//}
////���������ͬ�����շ�����������
////���������ͬ������id��������
//int cmpscoredescandiddesc(student* x, student* y) {
//	if (x->score == y->score) {
//	return x->id > y->id ? 1 : 0;
//	}
//	return x->score > y->score ? 1 : 0;
//}
///////////////////////////////////////////////////////////////////////////////////
//////ͨ��void*ʵ�֣�һ�����������ܹ�֧�ֶ�������
//////////////////////////////////////////////////////////////////////////////////
////����ǱȽ��������飬�˴���void*��ʹ��int*��ֵ������ǱȽ�Student���飬�˴���void*��ʹ��Student*��ֵ
//typedef int (*Cmp)(void*, void*);
////�˴���len��ʾ������Ԫ�صĸ���
////unitlen��ʾ������ÿ��Ԫ�صĴ�С
////ÿ��Ԫ�صĴ�С�����ǰ���������������ģ����Ǵ˴���������ʹ��ʹ��void*��֧�ֶ��ֲ�ͬ�����͵�����
////����ÿ��Ԫ�ص��׶೤����Ҫ����Ա�ֶ�ָ��
////һ���ټӻص�����
//void bubblesortgeneral(void* arr,int len,int unitlen,Cmp cmp) {
//	//arr��[ ]ô��
//	//void*�����ǲ��ܹ����н����ò�����
//	for (int bound = 0; bound < len; bound++) {
//		for (int cur = len - 1; cur > bound; cur--) {
//			//Ϊ����arr���void*�ܹ������ã�����Ҫǿ������ת��
//			//ͬ�ⶼת����char*
//			char* carr = (char*)arr;
//			//Ҫȡ��Ԫ����cur-1��cur
//			//p1ָ��cur-1���Ԫ�ص��׵�ַ
//			char* p1 = carr + (cur - 1) * unitlen;
//			//p2ָ��cur���Ԫ�ص��׵�ַ
//			char* p2 = carr + cur*unitlen;
//			if (cmp(p1, p2) != 1) {
//				//����
//				//����һ����ʱ�Ŀռ�
//				char tmp[1024] = { 0 };
//				//�Ȱ�p1ָ����ڴ濽����tmp��
//				memcpy(tmp, p1, unitlen);
//				memcpy(p1, p2, unitlen);
//				memcpy(p1, tmp, unitlen);
//			}
//		}
//	}
//}
////����������������
//int cmpInt(void* x, void* y) {
//	//��x��y��������int*�����
//	int* ix = (int*)x;
//	int* iy = (int*)y;
//	return *ix < *iy ? 1 : 0;
//}
////��ѧ�����շ���������
//int cmpStudent(void* x, void* y) {
//	student* sx = (student*)x;
//	student* sy = (student*)y;
//	return sx->score > sy->score ? 1 : 0;
//}
//дһ������ʵ���������ļӼ��˳�
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
	//�����û��������������������û����밴��ʲô���Ĺ�������
	int x = 0;
	int y = 0;
	printf("��������������\n");
	scanf("%d %d", &x, &y);
	printf("������Ҫ���е�����\n");
	printf("1.�ӷ���2.������3.�˷���4.����");
	int choice = 0;
	scanf("%d", &choice);
	//�������һ������ָ������
	Func arr[] = {
		NULL,
		add,
		sub,
		mul,
		division
	};
	int ret = arr[choice](x, y);
	printf("%d\n", ret);
	//�����û������ѡ����������ĸ�����
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
		printf("�������choice����\n");
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
		{1,"����",96},
		{2,"����",90},
		{3,"����",86},
		{4,"����",98},
		{5,"����",90}
	};*/
	//int len2 = sizeof(students) / sizeof(students[0]);
	/*bubblesortstudent(students, len2, cmpscoredescandiddesc);
	for (int i = 0; i < len2; i++) {
		printf("%s\n", students[i].name);
	}*/
	system("pause");
	return 0;
}
