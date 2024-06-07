#include<iostream>
#include<vector>

using namespace std;



void dfs(vector<int>& selec, int N, int M, int index)
{
	if (selec.size() == M)
	{
		for (int num:selec)
		{
			cout << num << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = index;i<=N;i++)
	{
		selec.push_back(i);
		dfs(selec, N, M, i+1);
		selec.pop_back();
	}
}






int main()
{

	int N, M;
	cin >> N >> M;
	vector<int> selec;
	dfs(selec, N, M, 1);
	
	return 0;
}






