int binfind(int val[],int num, int value)
{
	int start=0;
	int end=num-1;
	int mid=(start+end)/2;
//	while(tou<=wei) 
	while(val[mid]!=value && start< end)
	{
		printf("\n¿ªÊ¼²éÕÒ%d, %d, %d",start,end,mid);
		if(val[mid]>value){
			end=mid-1;
		}
		else if(val[mid]<value){
			start=mid+1;
		}
		mid=(start+end)/2;
	}
	if(val[mid]==value)
		return mid;
	else
		return -1;
}
