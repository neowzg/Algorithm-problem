#include<stdio.h>//uncle-lu
#include<stdbool.h>
/*
对当前的位置进行深度优先搜索，找到每个可以填进去的数进行尝试。搜完了这个位置以后回溯继续搜。
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
		print();//objective 4一共n个数都搜完了我们应该干啥？
	}
	for(int i=1; i<=n; ++i)
	{
		if(visit[i])
            continue;//objective 1 如果这个数用过了怎么办？
		else
        {
          visit[i]=true;
          line[x]=i;
          dfs(x+1);
          visit[i]=false;//objective 2如果没用过要搜索这个数，需要处理哪些东西？为了不重复我们应该如何利用visit数组标记？
        }
	}
	return;
}

int main()
{
	scanf("%d",&n);
	dfs(1);//objective 3我们应该先搜哪里？
	return 0;
}
