#include <stdio.h>
#include <string.h>
char sPreorder[30];
char sInorder[30];

void Postorder(char *sPreorder, char *sInorder, int len);
int main()
{
	while( scanf("%s %s",sPreorder, sInorder) != EOF){
	    //printf("%s, %s, len=%d\n", sPreorder, sInorder, strlen(sPreorder));
		Postorder(sPreorder, sInorder, strlen(sPreorder));
		printf("\n");
	}
	return 0;
}

void Postorder(char *sPreorder, char *sInorder, int len) {
	int i;
	//printf("%s, %s, len=%d\n", sPreorder, sInorder, len);
	if (len <= 0)
		return;
		
	if (len == 1)
	{
		printf("%c", sInorder[0]);
		return;
	}
		
	for (i = 0; i < len ; i++) {
		if (sPreorder[0] == sInorder[i]) {
			break;
		}
	}
	
	if (i < len){
		//printf("Left\n");
		Postorder(sPreorder + 1, sInorder, i);
		if ((len - i - 1) > 0){
			//printf("Right\n");
			Postorder(sPreorder + i + 1, sInorder + i + 1, len - i - 1);
		}
		printf("%c", sInorder[i]);
	}
}