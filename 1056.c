/*
��Ŀ������
�����������������������Լ����
���룺
���������ж��飬ÿ������������������
�����
����ÿ������,����������Լ����
�������룺
49 14
���������
7
��Դ��
2011���������ҵ��ѧ������о�����������
���ɣ�
������������?��������ĵ�?���۱�������ʣ�http://t.jobdu.com/thread-7780-1-1.html
*/

#include <stdio.h>

int gcd(int a, int b);
int main() {
	int a;
	int b;
	while(scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", gcd(a, b));
	}
	return 0;
}

int gcd(int a, int b) {
	int temp;
	int x, y;
	
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	
	x = a;
	y = b;
	while (y != 0) {
		temp = x % y;
		x = y;
		y = temp;
	}
	
	return x;
}