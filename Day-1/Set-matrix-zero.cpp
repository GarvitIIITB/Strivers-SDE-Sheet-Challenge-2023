#include <bits/stdc++.h>

vector<vector<int>> setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();
	int r[n] = {0};
	int c[m] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(matrix[i][j] == 0){
				r[i] = 1;
				c[j] = 1;
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(r[i] != 0 || c[j] != 0){
				matrix[i][j] = 0;
			}
		}
	}
	return matrix;
	
}