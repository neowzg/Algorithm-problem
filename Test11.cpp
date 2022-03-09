#include<cstdio>//uncle-lu
#include<algorithm>
//可以发现，当线向右移动时候S左-S右是逐渐减小的，所以我们直接对这根线二分就好了--Megumin
struct node{
	/*
	 *  x : x坐标
	 *  y : y坐标
	 *  h : 高度
	 *  w : 宽度
	 */
	long long x,y,h,w;
}a[10010];
long long tot;
long long r,n;

/* sum函数
 * 作用:
 *		统计分割线左边的面积和
 * 变量:
 *		x : 分割线
 *		sum_all : 分割线左边所有矩阵的和
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
          sum_all+=a[i].h*(x-a[i].x);//objective 1处理被分割线隔开的部分
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
	 * ans_mean : 记录答案分割线分割出的左区间大小
	 * ans : 记录答案分割线
	 */
	long long left=0,right=r+1,mid;
	long long ans_mean;
	long long ans=0;
	while(left+1<right)
	{
		mid=(left+right)/2;
		long long sum_left=sum(mid);
		if(2*sum_left>tot)//objective 2什么情况可以把right变成mid？
		{
			ans_mean=sum_left;//objective 3记录当前答案的左区间大小
			ans=mid;
			right=mid;
		}
		else if(2*sum_left==tot)
        {
            ans=mid;
			ans_mean=sum_left;//objective 4处理二分
            left=mid;
	}
	/*
	 * objective 5 while将分割线尽量往右移(处理存在空白空挡的部分)
	 */
	while(ans<r&&ans_mean==sum(ans+1))ans++;
	printf("%lld\n",ans);
	return 0;
}
}
