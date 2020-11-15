#include<cstdio>
#include<iostream>
using namespace std;

int n,m,t,q,p,count,startx,starty;
int a[100][100];
bool v[100][100]; //1��ʾ· 0������  2��ʾ�ϰ� 2��ʾ���� 
int xx[4]={0,0,1,-1};//���
int yy[4]={-1,1,0,0};//���


int main()
{
	void dfs(int,int);
	scanf("%d %d %d",&n,&m,&t);
	for(int ii = 1; ii <= n ; ii ++)
	{
		for(int kk = 1; kk <= m; kk ++)
		{
			a[ii][kk] = 1;
		
		}
	}
	
			
	scanf("%d %d",&startx,&starty);
	cin >> p >> q;
	v[startx][starty] = 2;
	for(int i = 0; i < t; i ++)
	{
		int t1,t2;
		cin >> t1 >> t2;
		a[t1][t2] = 0;
	}
	dfs(startx,starty);
	cout << count << endl;
	
}

void dfs(int x,int y)
{
	if(x == p && y == q)
	{
		count ++;
		return;
	}
	else
	{	
		for(int i = 0; i < 4; i ++)
		{
			
			if(a[x + xx[i]][y + yy[i]] == 1 && v[x + xx[i]][y + yy[i]] == 0)
			{
				v[x][y] = 1;
				dfs(x + xx[i],y + yy[i]);
				v[x][y] = 0;
			}
		}
	
}
	return ;
	
	
}
