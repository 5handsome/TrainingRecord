#include<bits/stdc++.h>
using namespace std;
int cmp(string a, string b) {
	return a + b > b + a; //��ƴ�Ӻ��ֵ�������ǰ�� 
}
int main() {
	int n;
	string s[50];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) cin >> s[i];
	sort(s + 1, s + n + 1, cmp);
	for (int i = 1; i <= n; i++) cout << s[i];
	return 0;
}
