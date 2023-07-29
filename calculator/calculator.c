#include <stdio.h>

float plus(float first,float second);
float minus(float first,float second);
float mult(float first,float second);
float divide(float first,float second);

int main(){
	float first_num,second_num;
	char sign;

	printf("输入计算符(+,-,*,/):");
	scanf("%c",&sign);

	printf("输入第一个数字:");
	scanf("%f",&first_num);


	printf("输入第二个数字:");
	scanf("%f",&second_num);
	printf("\n");
	switch (sign) {
		case '+':
			printf("%f%c%f=%f\n",first_num,sign,second_num,plus(first_num,second_num));
			break;
		case '-':
			printf("%f%c%f=%f\n",first_num,sign,second_num,plus(first_num,second_num));
			break;
		case '*':
			printf("%f%c%f=%f\n",first_num,sign,second_num,mult(first_num,second_num));
			break;
		case '/':
			printf("%f%c%f=%f\n",first_num,sign,second_num,divide(first_num,second_num));
			break;
		default:
			printf("Error,try again pls.\n");
		
	}
}

float plus (float first,float second){
	return first + second;
}

float minus(float first,float second){
	return first - second;
}

float mult (float first,float second){
	return first * second;
}

float divide (float first,float second){
	return first / second;
} 
