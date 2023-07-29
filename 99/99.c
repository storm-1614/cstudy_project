/* 九九乘法表*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	int EXIT_SUCCESS = 0;
	for (int i=1;i<10;i++){
		for (int j=1;j<i+1;j++){
			printf(" %d*%d=%d ",j,i,i*j);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
