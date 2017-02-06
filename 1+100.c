#include<stdio.h>
int main(){
	printf("%d",sum(100));
}
int sum(int n){
	return 
		(n<1)?
		0:sum(n-1)+n;
}
