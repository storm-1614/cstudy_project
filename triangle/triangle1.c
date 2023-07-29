/*like:
 *
 *    *
 *    **
 *    ***
 *    ****
 *
 *    */


#include <stdio.h>
int main(int argc, char *argv[])
{
	int line;
	printf("输入行数:");
	scanf("%d",&line);
	for (int i = 0;i<line+1;i++){
		for (int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
