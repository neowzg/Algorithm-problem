#include<stdio.h>//uncle-lu

int n, top;
int line[100];
//��������n�����浱ǰn��ʣû�мӹ���ֵ��Ȼ��Ե�ǰ��ʣ����������
void func(int last)
{
	if(n == 0)
	{
		if(top!=1)//objective 3�������top�ж�ǰ��һ���nȫ�����˵�״̬�����ң������һ��n�������ˣ�������������Ӧ����ô������
            printf("%d",line[1]);//˼����Ϊʲô��ֱ�Ӱ�line[1]�Ž�forѭ�����أ�
		for(int i=2; i<=top; ++i)
			printf("+%d", line[i]);
		printf("\n");
		return ;
	}

	for(int i=last; i<=n; ++i)
	{
      	top++;
		line[top] = i;
		n-=i;//objective 1�ڽ�����һ������ǰҪ��ʲô׼������ʾ�����������
		func(i);
		n+=i;//objective 2֮���أ�
		top--;
	}

	return ;
}

int main()
{
	scanf("%d",&n);
  	top=0;//��ʾ���ǵó�ʼ����������ʱ�������Ϊ����ʼ����������ac����wa��
	func(1);
	return 0;
}
