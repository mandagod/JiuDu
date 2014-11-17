/*
题目描述：
对于给定的正整数 n，计算其十进制形式下所有位置数字之和，并计算其平方的各位数字之和。
输入：
每行输入数据包括一个正整数n(0<n<40000)，如果n=0 表示输入结束，并不用计算。
输出：
对于每个输入数据，计算其各位数字之和，以及其平方值的数字之和，输出在一行中，之间用一个空格分隔，但行末不要有空格。
样例输入：
4
12
97
39999
0
样例输出：
4 7
3 9
16 22
39 36
来源：
2011年吉林大学计算机研究生机试真题
答疑：
解题遇到问题?分享解题心得?讨论本题请访问：http://t.jobdu.com/thread-7829-1-1.html
*/

#include <stdio.h>

int SumOfDigs(int a);
int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		if (n > 0 && n < 40000) {
			printf("%d %d\n", SumOfDigs(n), SumOfDigs(n * n));
		}
	}
	return 0;
}

int SumOfDigs(int a) {
    int sum = 0;
	while (a != 0) {
		sum += a % 10;
		a /= 10;
	}
	
	return sum;
}