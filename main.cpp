#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;

int main(int argc, char *argv[]) {
	Solution n;
	int num = 6;
	vector<vector<int>> result = n.generateMatrix(num);

	for (int i = 0; i < num; i++) {
		cout << "[";
		for (int j = 0; j < num; j++) {
			cout << result.at(i).at(j) << "\t";
		}
		cout << "]" << endl;
	}

	system("pause");
	return 0;
}