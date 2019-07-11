#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n, m, x[101], y[101], sm[101], pm[101], sv[101], pv[101];
bool chk(int p) {
	int t = 0;
	for (int i = 0; i < n; ++i) {
		int c = x[i] * p - y[i];
		int L = c / sm[i] + (c%sm[i] ? 1 : 0);
		int mi = 1e9;
		for (int j = 0; j <= L; ++j) {
			int a = c - (sm[i] * j);
			if (a < 0) mi = min(mi, j*pm[i]);
			else mi = min(mi, j*pm[i] + ((a / sv[i] + (a%sv[i] ? 1 : 0))*pv[i]));
		}
		t += mi;
	}
	return t > m;
}
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf("%d %d %d %d %d %d", &x[i], &y[i], &sm[i], &pm[i], &sv[i], &pv[i]);
	}
	int lo = 0, hi = m, d = 0, r = 0;
	while (lo <= hi) {
		d = (lo + hi) / 2;
		if (chk(d)) hi = d - 1;
		else r = d, lo = d + 1;
	}
	printf("%d", r);
}