vector<int> a[2];
 
void solve() {
	a[0].clear();
	a[1].clear();
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int x;
		scanf("%d", &x);
		a[x & 1].push_back(i);
	}
	if ((int)a[1].size() >= 3) {
		printf("YES\n%d %d %d\n", a[1][0], a[1][1], a[1][2]);
	} else if ((int)a[1].size() >= 1 && (int)a[0].size() >= 2) {
		printf("YES\n%d %d %d\n", a[1][0], a[0][0], a[0][1]);
	} else
		printf("NO\n");
}