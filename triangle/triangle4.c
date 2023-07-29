/* like:
 *      *******
 *       *****
 *        ***
 *         *
 *
 *         注:写得太答辩了，还要改改
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int EXIT_SUCCESS = 0;
	int line;
	printf("输入行数:");
	scanf("%d",&line);

	for (int i=0;i<line+1;i++){
		for (int space=0;space<i;space++){
			printf(" ");
		}
		for (int star=0;star<line*2-2*i-1;star++){
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
