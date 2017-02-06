/**********遍历输出数组元素*************/
void Traverse(int arr[], int count)
{
    int i;
    //printf("数组输出: ");
    for(i=0; i<count; i++) printf("%d\t", arr[i]);
    printf("\n");
}
void BublleSort(int arr[], int count)
{
    int i,j,temp;
    for(j=0; j<count-1; j++) /* 气泡法要排序n-1次*/
        for(i=0; i<count-j-1; i++)/* 值比较大的元素沉下去后，只把剩下的元素中的最大值再沉下去就可以啦 */
        {
            if(arr[i]>arr[i+1])/* 把值比较大的元素沉到底 */
            {
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
}

void InsertSort(int arr[],int count)
{
    int i,j,temp;
    for(i=1; i<count; i++)//数组分两个部分，从第二个数组元素开始
    {
        temp = arr[i];//操作当前元素，先保存在其它变量中
        for(j=i-1; j>-1&&arr[j]>temp;j--)//从当前元素的上一个元素开始查找合适的位置，一直查找到首元素
        {
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

/*
 第一趟，从n个记录中找出关键码最小的记录与第一个记录交换;
 第二趟，从第二个记录开始 的n-1个记录中再选出关键码最小的记录与第二个记录交换;
 以此类推...
 第i趟，则从第i个记录开始的n-i+1个记录中选出关键码最小的记录与第i个记录交换;
 直到整个序列按关键码有序. 
 */
 /*
int SelectMinKey(int a[], int n, int i)
{
	int k=i,j;
	for(j=i+1;j<n;++j){
		if(a[k]>a[j]);
			k=j;
	}
	return k;
}
void selectSort(int a[], int n)
{
	int key,temp,i;
	for(i=0;i<n;i++)
	{
		//选择最小的元素
		key=SelectMinKey(a,n,i);
		if(key!=i){
			//最小元素与第i个元素互换
			temp=a[i];a[i]=a[key];a[key]=temp;
		}
		printf("%d, %d, %d",a,n,i);
	}
	return;
}
*/
void SelectSort(int arr[], int count)
{
    int i,j,min,temp;
    for(i=0; i<count; i++)
    {
        min = arr[i];//以此元素为基准
        for(j=i+1; j<count; j++)//从j往前的数据都是排好的，所以从j开始往下找剩下的元素中最小的
        {
            if(min>arr[j])//把剩下元素中最小的那个放到arr[j]中 
            {
                temp = arr[j];
                arr[j] = min;
                min = temp;
            }
        }
    }
}

