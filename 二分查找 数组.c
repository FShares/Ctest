#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
#include".\MyHeader\sort.h" 
int main(void){
	int a[64];
	int i,num;
	time_t tms;
	srand((unsigned int)time(&tms));//随机数种子 
	for(i=0;i<64;i++)
	{
		a[i]=rand()%100;//随机数
		printf("%d\t",a[i]); 
	}
	//排序 
	BublleSort(a,64); 
	printf("\n排序后：\n");
	Traverse(a,64);

	printf("\n");
	printf("\n输入要查找的数:");
	scanf("%d",&num);
	//二分查找 
	int x= binfind(a,64,num);

	if(x==-1) printf("没有找到\n");
	else{
		printf("找到%d",a[x]);
	}
	system("pause");
	
}
/*
 *  参数：(数组，长度，查找的数据 )
 */
/*
 * 数组一般查找 
int search(int a[],int n,int key)
{
	int i=0;
	for(i;i<n;i++){
		if(key==a[i]){
			return i;
		}
	}
	return -1;	
}
*/ 
int binfind(int val[],int num, int value)
{
	int start=0;
	int end=num-1;
	int mid=(start+end)/2;
	while(val[mid]!=value && start< end)
	{
		printf("\n开始查找%d, %d, %d",start,end,mid);
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
int search2(int a[],int n,int num)
{
	int tou=0;
	int wei=n-1;
	int zhong=(tou+wei)/2;
	while(tou<=wei)
	{
		printf("\n开始查找%d, %d, %d",tou,wei,zhong);
		if(a[zhong]=num) {
			return zhong;
		}
		if(a[zhong]>num){
			wei=zhong-1;
			zhong=(tou+wei)/2;
		}else{
			tou=zhong+1;
			zhong=(tou+wei)/2; 
		}
	}
	return -1;
}
