#include<stdio.h>//uncle-lu
//���Ƕ��޸ĵĲ��ֽ��в�֣�ÿ�β���ֻ�������β�����������һά��ʱ�临�Ӷȡ�
int line[10010];
int change[10010];//�޸ĵĲ��ֵĲ��
int n, q, p;

int main()
{
	scanf("%d", &n);
	for(int i=1; i<=n; ++i)
		scanf("%d", &line[i]);

	scanf("%d", &q);
	for(int i=1; i<=q; ++i)
	{
		int a, b, val;
		scanf("%d %d %d", &a, &b, &val);
		change[a]+=val;
		change[b+1]-=val;//objective 1���ò���޸�change����
	}

	for(int i=1;i<=n;i++)
    {
       change[i]+=change[i-1];
    }//objective 2���������Ĩƽ


	scanf("%d", &p);
	for(int i=1;i<=p;++i)
	{
		int temp;
		scanf("%d", &temp);
		printf("%d\n",line[temp]+change[temp]);//objective 3����ʲô��
	}

	return 0;
}
