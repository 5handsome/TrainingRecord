//����ֽ�㣬���ֳ���,�Ҵ�����������ֵ�mgoal 
/*#include<iostream>
using namespace std;
int left search(int l,int r)
{
	while(l<r)
	{
		int mid=(l+r)/2;
		if(q[mid]>=goal)//���ڵ��ڵ�д����>= ����Ϊ����ڵ㣬���Կ��Ե��ڣ������кܶ��goal ʱ������ߵ�goal 
		{
			r=mid;
		}
		else
		{
			l=mid+1;
		}
	}
	if(q[mid]!=goal)
	{
		return -1;
	}
	return 1;
} */

/*��һ���� 
int search one(int l,int r)
{
	while(l<r)
	{
		int mid=(l+r)/2;
	    if(q[mid]==goal)
	    {
	    	
		    return mid;
	    }
	    els if(q[mid]>goal)
	    {
		    r=mid;
	    }
	    else
	    {
		    l=mid+1;
	    }
	}
	return -1;
} */

//while(m--)�����m������0��ִ��ѭ��                  ��int ������ ���Կ���10��6�η�����

#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int a[1000001];
int erfen(int a[],int l,int r,int k)
{
	if(r==l)
	{
		if(k==a[l])
		{
			return l;
		}
		else
		{
			return -1;
		}
	}
	if(l<r)
	 {
	 	int mid=(l+r)/2;
		if(k<=a[mid])
		{
			erfen(a,l,mid,k);
		}
		else
		{
			erfen(a,mid+1,r,k);//mid+1����������ڵ� 
		}
	 }
		
}
int main()
{
	int n,m,k;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(m--)
	{
		cin>>k;
		cout<<erfen(a,1,n,k)<<" ";
	}
	return 0;
}




 
