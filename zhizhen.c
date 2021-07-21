//1.
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//&a是int(*)[5],+1跳过数组，指向5后面的元素，还是int(*)[5]，但是强转为int*。
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//printf("%d,%d\n",a[1],p[-1]);与上一样
//	//a+1:数组转换为指针，加一指向二，解引用结果是二
//	//因为ptr是int*，所以减一是跳过一个数字，指向5
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
//这个代码定义了一个struct Test类型
//给出结构体20个字节·
//struct Test {
//		int Num;
//		char* pcName;
//		short sDate;
//		char cha[2];
//		short sBa[4];
//}*p=NULL;
//创建两个全局变量
//test类型是struct Test
//p类型是struct Test*
//typedef struct Test {
//		int Num;
//		char* pcName;
//		short sDate;
//		char cha[2];
//		short sBa[4];
//}p2;
//p2是类型
//并不推荐使用全局变量
//全局变量的作用域是整个工程，假设某个全局变量的值被改坏，难找。
//全局变量的生命周期是跟随整个程序，哪怕代码中不想再使用这个全局变量，也无法释放对应的内存。
int main(){
	//printf("%p\n", p + 0x1);//打印16进制的20，也就是14
	//printf("%p\n",(unsigned long)p+0x1);//p是0，强制类型转换后也是0，0加一是1.
	////这个代码原则上来说是不应该编译通过的，但是强制类型转换很厉害，
	////相当于明确告诉编译器，这个代码的正确性我自己负责，你别管
	//printf("%p\n", (unsigned int*)p+0x1);//指针加一跳过一个元素，四个字节
	//int a[4] = { 1,2,3,4 };
	//int* ptr1 = (int*)(&a + 1);
	//int* ptr2 = (int*)((int)a + 1);//a相当于得到了一个int*,假设里面存的地址0x100,
	////(int)a把int*强转为int,里面的内容还是0x100,再+1操作，此时就是单纯的整数相加，
	////结果是0x101,把0x101强转为int*,最终ptr2是一个int*类型的指针，同时里面存的地址0x101
	////接下来针对ptr2进行解引用，解引用的操作就是从0x101这个地址开始，读取四个字节，因为ptr2是int*类型
	////读出的四个字节01 00 00 00 02 00 00 00....00 00 00 02就是得到的数据，
	////注意这里数据是按照小端字节序来排列的，取出这四个字节同样按照小端理解，得到整数0x02 00 00 00
	//printf("%x,%x", ptr1[-1], *ptr2);//%x是16进制打印
	//int a[3][2] = { (0,1),(2,3),(4,5) };
	//(0,1)这是逗号表达式，逗号表达式整个表达式的值就是最后一个的值
	//这种设定，可以理解为是一个bug.
	//int* p;
	//p = a[0];
	//printf("%d", p[0]);
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    system("pause");
	return 0;
}