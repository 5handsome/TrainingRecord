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
	scanf("%d%s",&n,st);//输入 
	if(n==26)//特判，如果n输入的是26，就可以直接输出原字符串。 
	{
		printf("%s",st);
		return 0;
	}
	for(int i=0;i<strlen(st);i++)//strlen是获取字符串长度 
	{
		int x=n;//每次都要更新x，因为下面x可能要-26。 
		if(st[i]+x>'z')//特判，如果加上n之后不是字母，就重新从a开始加。 
		{
			x-=26;
		}
		printf("%c",st[i]+x);//输出。 
	}
	return 0;
}
