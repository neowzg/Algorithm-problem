
#include<stdio.h>//uncle-lu
#include<stdlib.h>
//���Է��֣����������ƶ�ʱ��S��-S�����𽥼�С�ģ���������ֱ�Ӷ�����߶��־ͺ���--Megumin
struct node{
	/*
	 *  x : x����
	 *  y : y����
	 *  h : �߶�
	 *  w : ���
	 */
	long long x,y,h,w;
}a[10010];
long long tot;
long long r,n;
int comp(const void*a, const void*b) {//��ʾ��Ϊ��qsortдһ��cmp�����Ǳ�Ҫ�� --Megumin
	return *(node*)a.x-*(int*)b.x;
}
/* sum����
 * ����:
 *		ͳ�Ʒָ�����ߵ������
 * ����:
 *		x : �ָ���
 *		sum_all : �ָ���������о���ĺ�
 */
long long sum(long long x)
{
	long long sum_all=0;
	for(int i=1;i<=n;++i)
	{
		if(a[i].x+a[i].w<=x)
		{
			sum_all+=a[i].h*a[i].w;
		}
		else
        {
          ____________//objective 1�����ָ��߸����Ĳ���
        }
	}
	return sum_all;
}
int main()
{
	scanf("%lld",&r);
	scanf("%lld",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%lld%lld%lld%lld",&a[i].x,&a[i].y,&a[i].w,&a[i].h);
		tot+=(a[i].h*a[i].w);
	}
	qsort(a+1,n,sizeof(int),cmp);
	/*
	 * ans_mean : ��¼�𰸷ָ��߷ָ�����������С
	 * ans : ��¼�𰸷ָ���
	 */
	long long left=0,right=r+1,mid;
	long long ans_mean;
	long long ans=0;
	while(left+1<right)
	{
		mid=(left+right)/2;
		long long sum_left=sum(mid);
		if(_________)//objective 2ʲô������԰�right���mid��
		{
			________//objective 3��¼��ǰ�𰸵��������С
			ans=mid;
			right=mid;
		}
		else ________//objective 4�������
	}
	/*
	 * objective 5 while���ָ��߾���������(������ڿհ׿յ��Ĳ���)
	 */
	while(_____________)ans++;
	printf("%lld\n",ans);
	return 0;
}
