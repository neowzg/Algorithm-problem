
#include<stdio.h>//uncle-lu
#include<stdlib.h>
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
int comp(const void*a, const void*b) {//提示：为了qsort写一个cmp函数是必要的 --Megumin
	return *(node*)a.x-*(int*)b.x;
}
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
          ____________//objective 1处理被分割线隔开的部分
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
		if(_________)//objective 2什么情况可以把right变成mid？
		{
			________//objective 3记录当前答案的左区间大小
			ans=mid;
			right=mid;
		}
		else ________//objective 4处理二分
	}
	/*
	 * objective 5 while将分割线尽量往右移(处理存在空白空挡的部分)
	 */
	while(_____________)ans++;
	printf("%lld\n",ans);
	return 0;
}
