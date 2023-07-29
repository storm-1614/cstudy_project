/* like:
 *
 *		    *
 *		   **
 *		 ****
 *		*****
 *
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	int EXIT_SUCCESS=0;
	int line;
	printf("请输入行数:");
	scanf("%d",&line);
	int z = line;

	for (int i=1;i<line+1;i++){
		for (int j=z;j!=1;j--){
			printf(" ");
		}
		for (int k=0;k<i;k++){
			printf("*");
		}
		z--;
		printf("\n");
	}

	return EXIT_SUCCESS;
}
