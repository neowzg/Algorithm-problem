#include<stdio.h>//uncle-lu
#include<string.h>
#include<stdbool.h>
//���ò�������Ƿ���δ��ԣ��ڣ�ǰ���
char line[10010];
int flag[10010];

int main()
{
	scanf("%s",line+1);

	int len = strlen(line+1);

	for(int i=1; i<=len; ++i)
	{
		if(line[i]=='(')flag[i] = 1;
		else flag[i] = -1;
		flag[i]+=flag[i-1];//objective 2Ĩƽ�������
	}

	bool f = true;
	for(int i=1; i<=len; ++i)
	{
		if(flag[i]<0||flag[len])f = false;//objective 1ʲô����Ƿ����˹��ϣ�
	}
	if(f)
		printf("Yes");
	else
		printf("No");

	return 0;
}
