//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	system("pause");
//	return 0;
//}
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。C
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	char murderer = 'A';
//	for (murderer = 'A'; murderer <= 'D'; murderer++) {
//		if ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D') == 3) {
//			printf("凶手是%c\n", murderer);
//		}
//	}
//	system("pause");
//	return 0;
//}
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1; A <= 5; A++) {
//		for (B = 1; B <= 5; B++) {
//			for (C = 1; C <= 5; C++) {
//				for (D = 1; D <= 5; D++) {
//					for (E = 1; E <= 5; E++) {
//						if ((B == 2) + (A == 3) == 1&&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 && 
//							(C == 5) + (D == 3) == 1&&
//							(E == 4) + (A == 1) == 1&&
//						     A*B*C*D*E==120){
//							printf("A=%d\nB=%d\nC=%d\nD=%d\nE=%d\n", A, B, C, D, E);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a = 20;
//	int b = -10;
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int check_sys() {
//	int i = 1;
//	return(*(char*)&i);
//}
//int main() {
//	int ret = check_sys();
//	if (ret == 1) {
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	char a = 128;
//	printf("%u\n", a);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//	}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main() {
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	short num = 32767;
//	short int a = num + 1;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//unsigned char i = 0;
//int main() {
//	for (i = 0; i <= 255; i++) {
//		printf("hello world\n");
//	}
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int main() {
	double a = 1.6;
	double b = 0.3;
	double c = a + b;
	double d = 1.9;
	if (c-d<0.001&&c-d>-0.001)
		printf("相等\n");
	else
		printf("不相等\n");
	system("pause");
	return 0;
}