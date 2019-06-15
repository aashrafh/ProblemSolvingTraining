#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#define Endl "\n"
#define LL long long
using namespace std;
const int INF = 1e5 + 9;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false); }
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int a[INF];
int main()
{
	init();
	int n, m;
	cin >> n >> m;
	int ans = 0;
	while (n != m)
	{
		if (m > n)
			if (m % 2 == 0) m /= 2, ans++;
			else m++, ans++;
		else if (n > m) m++, ans++;
	}
	cout << ans << Endl;
	//system("PAUSE");
	return 0;
}
