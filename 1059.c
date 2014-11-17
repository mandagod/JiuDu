/*
题目描述：
设a、b、c均是0到9之间的数字，abc、bcc是两个三位数，且有：abc+bcc=532。求满足条件的所有a、b、c的值。
输入：
题目没有任何输入。
输出：
请输出所有满足题目条件的a、b、c的值。
a、b、c之间用空格隔开。
每个输出占一行。
样例输入：
样例输出：
来源：
2000年清华大学计算机研究生机试真题
答疑：
解题遇到问题?分享解题心得?讨论本题请访问：http://t.jobdu.com/thread-7783-1-1.html
*/
#include <stdio.h>

int main() {
	// abc+bcc=532 => 100a+110b+12c=532
	int a; // [0, 5]
	int b; // [0, 4]
	int c; // [0, 9]

	for (a = 0; a < 6; a++)
		for (b = 0; b < 5; b++)
			for (c = 0; c < 10; c++)
			    //printf("sum: %d\n", (a*100 + b*110 + c*12));
				if ((a*100 + b*110 + c*12) == 532)
					printf("%d %d %d\n", a, b, c);
	
	return 0;
}