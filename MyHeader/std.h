int sum(int *a,int n){
	return
		(n<1)?
			0:sum(a,n-1)+a[n-1];
}

void swap(int *a,int* b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

void reverse(int a[],int lo,int hi){
	if(lo<hi){
		swap(&*(a+lo),&*(a+hi));
		reverse(a,lo+1,hi-1);
	} 
}
 
 
