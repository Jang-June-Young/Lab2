#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
	if (vec.size() == M) {
		for (int num : vec) {
			cout << num << " ";
		}
		cout << endl;
		return;
	}
	for (int i =cnt; i < N; ++i) {
		vec.push_vec(i+1);
		func(i+1);
		vec.pop_back();
	}
}

int main() {
   cin >> N >> M;
   func(0);
}
