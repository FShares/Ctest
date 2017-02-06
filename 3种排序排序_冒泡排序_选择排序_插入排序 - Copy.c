#include <stdio.h>
#include <time.h>
#define MAX 6
int array[MAX];
int count = MAX;

/********�������飬������Ԫ��************/
void BuildArray()
{
    int i=0;
	time_t tms;
	
	srand((unsigned int)time(&tms));//��������� 
    printf("�������Ԫ��: ");
    for(i=0; i<count; i++)
    {
        array[i]=rand()%100;//�����
		printf("%d ",array[i]); 
    }
    printf("\n");
}
/**********�����������Ԫ��*************/
void Traverse(int arr[], int count)
{
    int i;
    printf("�������: ");
    for(i=0; i<count; i++) printf("%d\t", arr[i]);
    printf("\n");
}
void BublleSort(int arr[], int count)
{
    int i,j,temp;
    for(j=0; j<count-1; j++) /* ���ݷ�Ҫ����n-1��*/
        for(i=0; i<count-j-1; i++)/* ֵ�Ƚϴ��Ԫ�س���ȥ��ֻ��ʣ�µ�Ԫ���е����ֵ�ٳ���ȥ�Ϳ����� */
        {
            if(arr[i]>arr[i+1])/* ��ֵ�Ƚϴ��Ԫ�س����� */
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
    for(i=1; i<count; i++)//������������֣��ӵڶ�������Ԫ�ؿ�ʼ
    {
        temp = arr[i];//������ǰԪ�أ��ȱ���������������
        for(j=i-1; j>-1&&arr[j]>temp;j--)//�ӵ�ǰԪ�ص���һ��Ԫ�ؿ�ʼ���Һ��ʵ�λ�ã�һֱ���ҵ���Ԫ��
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
        min = arr[i];//�Դ�Ԫ��Ϊ��׼
        for(j=i+1; j<count; j++)//��j��ǰ�����ݶ����źõģ����Դ�j��ʼ������ʣ�µ�Ԫ������С��
        {
            if(min>arr[j])//��ʣ��Ԫ������С���Ǹ��ŵ�arr[j]�� 
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
    BuildArray();//��������
    Traverse(array, count);//����������

    BublleSort(array, count);//ð������
    Traverse(array, count);//�������������
    
    InsertSort(array, count);//��������
    Traverse(array, count);//�������������
     
    SelectSort(array, count);//��������
    Traverse(array, count);//�������������
    return 0;
}
