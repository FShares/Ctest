#include<stdio.h>
//ָ���뺯�� 
void swap(int *a,int *b){
	int c;
	c=*b;
	*b=*a;
	*a=c;
}
int main(){
	int a=10,b=20;
	swap(&a,&b);
	printf("%d",a);
}
