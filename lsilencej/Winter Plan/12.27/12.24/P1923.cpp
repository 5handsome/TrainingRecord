#include<bits/stdc++.h>
using namespace std;
long long a[10000000];
int main() {
	long long n, t;
	scanf("%lld%lld", &n, &t);
	for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
	nth_element(a + 1, a + t + 1, a + n + 1); // STL�⺯����ʱ�临�Ӷ�ΪO(n) ��ֻ�����tС������tǰ��һ������С������һ�������󣬵�˳��ȷ�� 
	printf("%lld", a[t + 1]);
	return 0;
}
