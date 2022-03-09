#include <iostream>
#include <cstdio>
using namespace std;
int a[1001000];
int n,q,b;
string S;
//直接二分
int find(int x)
{

 	int left=1;
    int right=n;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(a[mid]==x)
            return mid;
        else if(a[mid]<x)
            left=mid+1;
        else if(a[mid]>x)
            right=mid-1;
    }
    return -1;// Not found
}
int main()
{
    cin >> n;
    for(int i = 1;i <= n;i ++)
        scanf("%d",&a[i]);
    cin >> q;
    for(int i = 1;i <= q;i ++){
        scanf("%d",&b);
        if(find(b) != -1)
            S += 'Y';
        else
            S += 'N';
    }
    cout << S << endl;
}
