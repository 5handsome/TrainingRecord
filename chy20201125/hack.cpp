#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int n;
char st[21000];
int main()
{
	scanf("%d%s",&n,st);//���� 
	if(n==26)//���У����n�������26���Ϳ���ֱ�����ԭ�ַ����� 
	{
		printf("%s",st);
		return 0;
	}
	for(int i=0;i<strlen(st);i++)//strlen�ǻ�ȡ�ַ������� 
	{
		int x=n;//ÿ�ζ�Ҫ����x����Ϊ����x����Ҫ-26�� 
		if(st[i]+x>'z')//���У��������n֮������ĸ�������´�a��ʼ�ӡ� 
		{
			x-=26;
		}
		printf("%c",st[i]+x);//����� 
	}
	return 0;
}
