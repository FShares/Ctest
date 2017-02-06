#include<stdio.h>
void main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	reverse(a,0,9);
	//swap(&*(a+1),&*(a+5));
	//printf("%d",sum(a,5));
	int i;
	for (i=0;i<10;i++)
		printf("%d",a[i]);
} 

void reverse(int a[],int lo,int hi){
	if(lo<hi){
		swap(&*(a+lo),&*(a+hi));
		reverse(a,lo+1,hi-1);
	} 
}
 
void swap(int *a,int* b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
