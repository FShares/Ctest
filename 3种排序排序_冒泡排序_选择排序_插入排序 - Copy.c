#include <stdio.h>
#include <time.h>
#define MAX 6
int array[MAX];
int count = MAX;

/********创建数组，并输入元素************/
void BuildArray()
{
    int i=0;
	time_t tms;
	
	srand((unsigned int)time(&tms));//随机数种子 
    printf("随机数组元素: ");
    for(i=0; i<count; i++)
    {
        array[i]=rand()%100;//随机数
		printf("%d ",array[i]); 
    }
    printf("\n");
}
/**********遍历输出数组元素*************/
void Traverse(int arr[], int count)
{
    int i;
    printf("数组输出: ");
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

int main()
{ 
    int i;
    BuildArray();//创建数组
    Traverse(array, count);//输出最初数组

    BublleSort(array, count);//冒泡排序
    Traverse(array, count);//输出排序后的数组
    
    InsertSort(array, count);//插入排序
    Traverse(array, count);//输出排序后的数组
     
    SelectSort(array, count);//插入排序
    Traverse(array, count);//输出排序后的数组
    return 0;
}
