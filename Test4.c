#include<stdio.h>//uncle-lu
//汉诺塔问题是将问题化简为更简单的问题。当你需要从A到B挪n（n>=2）个的时候，你应该先把上面n-1个挪到C上，然后再把第n个挪到B上，再把C上的n-1个挪回B
//可以发现这是有边界的，当n==1时直接移动就可以了。所以我们直接找出一个挪n个的方法就可以了，然后处理好边界。
void han(int n,char A,char B,char C)
{
	if (n==1)
	{
		printf("Move disk %d from %c to %c\n",n,A,C);//objective 2处理边界我们直接移动就可以了。
	}
	else
	{
		han(n-1,A,C,B);
		printf("Move disk %d from %c to %c\n",n,A,C);
		han(n-1,B,A,C);
		//objective 1见题解
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	han(n,'A','B','C');
	return 0;
}

