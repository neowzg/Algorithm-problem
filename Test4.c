#include<stdio.h>//uncle-lu
//��ŵ�������ǽ����⻯��Ϊ���򵥵����⡣������Ҫ��A��BŲn��n>=2������ʱ����Ӧ���Ȱ�����n-1��Ų��C�ϣ�Ȼ���ٰѵ�n��Ų��B�ϣ��ٰ�C�ϵ�n-1��Ų��B
//���Է��������б߽�ģ���n==1ʱֱ���ƶ��Ϳ����ˡ���������ֱ���ҳ�һ��Ųn���ķ����Ϳ����ˣ�Ȼ����ñ߽硣
void han(int n,char A,char B,char C)
{
	if (n==1)
	{
		printf("Move disk %d from %c to %c\n",n,A,C);//objective 2����߽�����ֱ���ƶ��Ϳ����ˡ�
	}
	else
	{
		han(n-1,A,C,B);
		printf("Move disk %d from %c to %c\n",n,A,C);
		han(n-1,B,A,C);
		//objective 1�����
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	han(n,'A','B','C');
	return 0;
}

