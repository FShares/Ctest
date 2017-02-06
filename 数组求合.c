#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%d",sum(a,5));
} 
int sum(int *a,int n){
	return
		(n<1)?
			0:sum(a,n-1)+a[n-1];
}
