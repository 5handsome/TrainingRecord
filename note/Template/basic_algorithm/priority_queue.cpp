#include <algorithm>
#include <bitset>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <cassert>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define debug
// #define ONLINE_JUDGE

const double PI = acos(-1.0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;
const long long INFLL = 0x3f3f3f3f3f3f3f3fll;
#define memset0(x) memset(x, 0, sizeof(x))
#define memsetM1(x) memset(x, -1, sizeof(x))
#define memsetINF(x) memset(x, 0x3f, sizeof(x))
#define memsetNINF(x) memset(x, 0xcf, sizeof(x))
#define ios_                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#ifdef debug
#define dbg(x)                                           \
    {                                                    \
        cout << "In line " << __LINE__ << endl;          \
        x                                                \
        cout << "-----------------" << __LINE__ << endl; \
    }
#else
#define dbg(x)
#endif

/*code*/
struct tmp1{
    int x;
    bool operator<(tmp1 n){
        return x<n.x;//大顶堆
    }
};
priority_queue<tmp1> queue1;

//or

struct tmp2{
    bool operator()(tmp1 &a,tmp1 &b){
        return a.x<b.x;
    }
};
priority_queue<tmp1,vector<tmp1>,tmp2> queue2;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
    int startTime = clock();
#endif
    // ios;
    
    queue1.push({5});
    queue1.size();
    queue1.empty();
    tmp1 x= queue1.top();
    queue1.pop();

#ifndef ONLINE_JUDGE
    printf("Time = %dms\n", clock() - startTime);
#endif
    return 0;
}

/*code*/