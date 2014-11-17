#include <stdio.h>

int main(){
	int n;
	int i;
    int a;
	
	int min;
	int max;
	int extra;

	while(scanf("%d", &n) != EOF){
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a);
			if (a & 0x1)
				printf("0 0\n");
			else {
				max = a / 2;
				min = a / 4;
				extra = (a % 4) / 2;
				printf("%d %d\n", min + extra, max);
			}
		}
	}
	
	return 0;
}