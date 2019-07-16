#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	vector<int> vtr(8);
	vector<int> as(8); // ascending
	vector<int> des(8); // descending

	for (int i = 0; i < 8; i++) {
		cin >> vtr[i];
	}

	as = vtr;
	des = vtr;

	sort(as.begin(), as.end()); // default = 오름차순 정렬
	sort(des.begin(), des.end(), greater<int>()); // 내림차순 정렬
	
	if (vtr == as) cout << "ascending";
	else if (vtr == des) cout << "descending";
	else cout << "mixed";
}