#include<cstdio>

using namespace std;

int main()
{
	int m,n,temp;
	int l,r,arr[100010]={0};//������ 
	bool b;					//0�Ƚ��ȳ���1�Ƚ���� 
	char c[5];
	scanf("%d",&m);
	for(int t=1;t<=m;t++)
	{
		scanf("%d",&n);
		scanf("%s",c);
		if('F'==c[2]){
			b=0;
		}else b=1;
		l=1,r=0;				//r��Խ�磬l>rʱ˵����Ԫ�� 
		for(int i=1;i<=n;i++)
		{
			scanf("%s",c);
			if('I'==c[0]){
				scanf("%d",&arr[++r]);
			}else{
				if(l>r)printf("None\n");
				else{
					if(b){
						//�Ƚ����
						printf("%d\n",arr[r--]);
					}else{
						printf("%d\n",arr[l++]);
					}
				}
			}
		}
	}
	
	return 0;
 } 
