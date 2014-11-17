/*
题目描述：
输入两个正整数，求其最大公约数。
输入：
测试数据有多组，每组输入两个正整数。
输出：
对于每组输入,请输出其最大公约数。
样例输入：
49 14
样例输出：
7
来源：
2011年哈尔滨工业大学计算机研究生机试真题
答疑：
解题遇到问题?分享解题心得?讨论本题请访问：http://t.jobdu.com/thread-7780-1-1.html
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