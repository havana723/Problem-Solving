#include <bits/stdc++.h>

#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ends ' '
#define FF first
#define SS second
//#define int long long
#define pii pair<int,int>
#define tiii tuple<int,int,int>
#define sz(v) (int)(v).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define compress(v) sort(all(v)), (v).erase(unique(all(v)), (v).end())

//////Constants//////////////////////////////////////////////////////////////////////////

const int MOD = 1e9 + 7;
const int INF = 1987654321;
const int LINF = 987654321987654321LL;

//////2D Graph Search////////////////////////////////////////////////////////////////////

const int dx[] = { -1,1,0,0,1,1,-1,-1 };
const int dy[] = { 0,0,-1,1,1,-1,1,-1 };

bool inrange(int i, int j, int n, int m) { return 0 <= i && i < n && 0 <= j && j < m; }

//////Union-Find/////////////////////////////////////////////////////////////////////////

//std::vector<int> UF;
//
//void UF_init(int sz)
//{
//    UF.resize(sz + 1);
//    for (int i = 1; i < UF.size(); i++)
//        UF[i] = i;
//}
//
//int Find(int x)
//{
//    if (UF[x] == x) return x;
//    else return UF[x] = Find(UF[x]);
//}
//
//void Union(int x, int y)
//{
//    x = Find(x);
//    y = Find(y);
//    UF[y] = x;
//}

/////////////////////////////////////////////////////////////////////////////////////////

using namespace std;

int n;
vector<int> vec;

tiii dis(int a, int b, int c) {
	return { abs(a - b) + abs(vec[a] - vec[b]), abs(b - c) + abs(vec[b] - vec[c]), abs(c - a) + abs(vec[c] - vec[a]) };
}

int32_t main(void) {
	FastIO;
}
