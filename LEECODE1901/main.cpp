#include <iostream>
#include<vector>
using namespace std;
vector<int> findPeakGrid(vector<vector<int>>& mat);
int main() {
	cout << "adad";
	vector<vector<int>> mat;
	vector<int> res;
	mat = { {10, 20, 15}, {21, 30, 14},{7, 16, 32} };
	res = findPeakGrid(mat);
	cout << res[0] << res[1];
}


vector<int> findPeakGrid(vector<vector<int>>& mat) {
	vector<int> res;
	int m = mat.size();
	int n = mat[0].size();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 && j == 0) {
				if (mat[i][j] > mat[i][j + 1] && mat[i][j] > mat[i + 1][j]) {
					res.push_back(i);
					res.push_back(j);
					return res;
				}
			}
			else if (i == 0 && j == m - 1) {
				if (mat[i][j] > mat[i][j - 1] && mat[i][j] > mat[i + 1][j]) {
					res.push_back(i);
					res.push_back(j);
					return res;
				}
			}
			else if (i == n - 1 && j == 0) {
				if (mat[i][j] > mat[i][j + 1] && mat[i][j] > mat[i - 1][j]) {
					res.push_back(i);
					res.push_back(j);
					return res;
				}
			}
			else if (i == n - 1 && j == m - 1) {
				if (mat[i][j] > mat[i][j - 1] && mat[i][j] > mat[i - 1][j]) {
					res.push_back(i);
					res.push_back(j);
					return res;
				}
			}
			else if (i == 0) {
				if (mat[i][j] > mat[i][j - 1] && mat[i][j] > mat[i][j + 1] && mat[i][j] > mat[i + 1][j]) {
					res.push_back(i);
					res.push_back(j);
					return res;
				}
			}
			else if (i == n - 1) {
				if (mat[i][j] > mat[i][j - 1] && mat[i][j] > mat[i][j + 1] && mat[i][j] > mat[i - 1][j]) {
					res.push_back(i);
					res.push_back(j);
					return res;
				}
			}
			else if (j == 0) {
				if (mat[i][j] > mat[i - 1][j] && mat[i][j] > mat[i + 1][j] && mat[i][j] > mat[i][j + 1]) {
					res.push_back(i);
					res.push_back(j);
					return res;

				}
			}
		}
	}
}