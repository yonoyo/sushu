#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int sushu(int su){
	for (int i = 2; i < sqrt(su); i++){
		if (su%i == 0)
			return 0;
	}	
			return 1;
	}

int main() {
	int n = 0;
	int a = 0;
	printf("������һ������\n");
	scanf("%d", &n);
	a = sushu(n);
	if (a == 1)
		printf("������\n");
	else
		printf("��������\n");
		system("pause");
	return 0;
}
