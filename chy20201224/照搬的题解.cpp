#include<iostream>//P1706
#include<cstdio>
#include<cstring>
#include<string>
#include<iomanip>
#include <algorithm>
#include<cmath>
#include<vector>
#include<set>
using namespace std;
int a[10];
int main()
{
	int n,i,j=1,k;
	cin>>n;
	for(i=1;i<=n;i++)
	 {a[i]=n-i+1;j*=i;}//��Ŀ����û˵Ҫ��С�������
     //������������ǳ�ʼ��ֵΪ�������
     //��a[1~n]=n~1;˳�����n!
	for(i=1;i<=j;i++)
	 {next_permutation(a+1,a+n+1);
	  for(k=1;k<=n;k++)
	   cout<<"    "<<a[k];//��һ�����һ��
       //�ո��鸴��
	  cout<<endl;
	 }
	 return 0;
}
