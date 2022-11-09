// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> lexicalOrder(int n) {
	vector<int> nums;
	for (int i = 0; i < 10; i++) {
		if (i > n) {
			break;
		}
		nums.push_back(i);
	}
	return nums;
};

void DFS(vector<int>& nums,int max) {
}


int main()
{
	std::cout << "Hello World!\n";
	lexicalOrder(13);
}

