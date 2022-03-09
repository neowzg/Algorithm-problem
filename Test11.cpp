#include<cstdio>//uncle-lu
#include<algorithm>
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
          sum_all+=a[i].h*(x-a[i].x);//objective 1�����ָ��߸����Ĳ���
        }
	}
	return sum_all;
}

bool cmp(node a,node b)
{
	return a.x < b.x;
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
	std::sort(a+1,a+1+n,cmp);
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
		if(2*sum_left>tot)//objective 2ʲô������԰�right���mid��
		{
			ans_mean=sum_left;//objective 3��¼��ǰ�𰸵��������С
			ans=mid;
			right=mid;
		}
		else if(2*sum_left==tot)
        {
            ans=mid;
			ans_mean=sum_left;//objective 4�������
            left=mid;
	}
	/*
	 * objective 5 while���ָ��߾���������(������ڿհ׿յ��Ĳ���)
	 */
	while(ans<r&&ans_mean==sum(ans+1))ans++;
	printf("%lld\n",ans);
	return 0;
}
}
