/**********�����������Ԫ��*************/
void Traverse(int arr[], int count)
{
    int i;
    //printf("�������: ");
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

/*
 ��һ�ˣ���n����¼���ҳ��ؼ�����С�ļ�¼���һ����¼����;
 �ڶ��ˣ��ӵڶ�����¼��ʼ ��n-1����¼����ѡ���ؼ�����С�ļ�¼��ڶ�����¼����;
 �Դ�����...
 ��i�ˣ���ӵ�i����¼��ʼ��n-i+1����¼��ѡ���ؼ�����С�ļ�¼���i����¼����;
 ֱ���������а��ؼ�������. 
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
		//ѡ����С��Ԫ��
		key=SelectMinKey(a,n,i);
		if(key!=i){
			//��СԪ�����i��Ԫ�ػ���
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

