
#include<stdio.h>//uncle-lu

/*
 * line : �������ߵĳ���
 * mx : �������
 */
int line[10010];
int n,k,mx,l,r,mid,ans;

/* count����:
 * ����:
 *		ͳ�Ƹ���x�����ܽس���������
 *
 * ����:
 *		x : ö�ٳ��Ĵ𰸳���
 */
/*
	 *
	 * ���ִ𰸣�����ö�ٳ��ĳ���ȥ��س����������ٸ���������������--Megumin
	 *
	 */
int count(int x)
{
	int sum = 0;
	for(int i=1;i<=n;++i)
		sum += line[i]/x;
	return sum;
}

int main()
{
	double temp;
	scanf("%d %d",&n,&k);
  	r=0;l=1;
	for(int i=1;i<=n;++i)
	{
		scanf("%lf",&temp);
		line[i] =temp*100;// objective 4���������ױ������
		if(line[i] > r)r = line[i];
	}



	ans=0;
	while(l<=r)
	{
		mid = (l+r)/2;
		if(ans=count(mid)<k)r = mid-1;//objective 1ʲô����ǲ����ģ���Ҫ����Ŀ�곤�ȵģ���ʾ��������count��������
		else
		{
			l=mid+1;//objective 2�������
		}
	}

	printf("%.2lf",r/100.00);// objective3 �����������ױ����
	return 0;
}
