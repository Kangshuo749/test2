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
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���C
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	char murderer = 'A';
//	for (murderer = 'A'; murderer <= 'D'; murderer++) {
//		if ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D') == 3) {
//			printf("������%c\n", murderer);
//		}
//	}
//	system("pause");
//	return 0;
//}
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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
//		printf("С��\n");
//	}
//	else {
//		printf("���\n");
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
		printf("���\n");
	else
		printf("�����\n");
	system("pause");
	return 0;
}