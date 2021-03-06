#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<map>
using namespace std;
int n;
int arr[1005];
vector<int> ans;
int main(void) {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	ans.push_back(0);
	for (int i = 1; i <= n; i++) {
		if (ans.back() < arr[i]) ans.push_back(arr[i]);
		else {
			auto it = lower_bound(ans.begin(), ans.end(), arr[i]);
			*it = arr[i];
		}
	}
	printf("%d\n", ans.size() - 1);
	return 0;
}