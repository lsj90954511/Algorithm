#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n, house_n = 0;
int arr[26][26] = { 0 }, visit[26][26] = { 0 };
vector<int> house;
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };
queue<pair<int, int>> q;

void bfs()
{
	house_n = 1; //시작점이 되는 집의 개수인 1을 넣어줌
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (arr[nx][ny] == 1 && nx >= 0 && nx < n && ny >= 0 && ny < n && visit[nx][ny] == 0)
			{
				q.push({ nx, ny });
				visit[nx][ny] = 1;
				house_n++;
			}
		}
	}
	house.push_back(house_n);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			arr[i][j] = s[j] - '0';
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 1 && visit[i][j] == 0)
			{
				q.push({ i, j });
				visit[i][j] = 1;
				bfs();
			}
		}
	}
	sort(house.begin(), house.end());
	cout << house.size() << "\n";
	for (int i = 0; i < house.size(); i++)
	{
		cout << house[i] << "\n";
	}

	return 0;
}
