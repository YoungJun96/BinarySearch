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
	
	printf("요소 개수 : ");
	scanf("%d", &n);
	
	push=(int *)calloc(n, sizeof(int));
	
	printf("오름차순으로 입력하세요.\n");
	for(i=0; i<n; i++){
		printf("x[%d] : ", i);
		scanf("%d", &push[i]);
	}
	
	printf("검색 값 : ");
	scanf("%d", &out);
	
	output=binary(n, push, out);
	
	printf("%d는(은) x[%d]에 있습니다.", out, output);
	
	free(push);
}
