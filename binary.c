#include <stdio.h>

int binary(int a, int b[], int c){
	int pl=0;
	int pr=a-1;
	
	while(1){
		if(b[(pl+pr)/2] > c)
			pr=((pl+pr)/2)-1;
		if(b[(pl+pr)/2] < c)
			pl=((pl+pr)/2)+1;
		if(b[(pl+pr)/2] == c){
			return (pl+pr)/2;
			break;
		}
	}
}

void main(){
	int i;
	int n;
	int *push;
	int out;
	int output;
	
	printf("��� ���� : ");
	scanf("%d", &n);
	
	push=(int *)calloc(n, sizeof(int));
	
	printf("������������ �Է��ϼ���.\n");
	for(i=0; i<n; i++){
		printf("x[%d] : ", i);
		scanf("%d", &push[i]);
	}
	
	printf("�˻� �� : ");
	scanf("%d", &out);
	
	output=binary(n, push, out);
	
	printf("%d��(��) x[%d]�� �ֽ��ϴ�.", out, output);
	
	free(push);
}
