#include<stdio.h>//uncle-lu
#include<stdbool.h>
/*
�Ե�ǰ��λ�ý�����������������ҵ�ÿ���������ȥ�������г��ԡ����������λ���Ժ���ݼ����ѡ�
*/
int n;
int line[10];
bool visit[10];
void print()
{
	for(int i=1; i<=n; ++i)
		printf("%d ", line[i]);
	printf("\n");
	return ;
}
void dfs(int x)
{
	if(x>n)
	{
		print();//objective 4һ��n����������������Ӧ�ø�ɶ��
	}
	for(int i=1; i<=n; ++i)
	{
		if(visit[i])
            {dfs(i+1);
            visit[i]=0;}//objective 1 ���������ù�����ô�죿
		else
        {
          visit[i]=1;
          line[i]=i;
          //objective 2���û�ù�Ҫ�������������Ҫ������Щ������Ϊ�˲��ظ�����Ӧ���������visit�����ǣ�
        }
	}
	return;
}

int main()
{
	scanf("%d",&n);
	dfs(1);//objective 3����Ӧ���������
	return 0;
}
