#include <iostream>
#include <vector>
#include <string.h>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> vec(1002, vector<int>(1002, 0));
vector<int> r_bfs;
vector<int> r_dfs;
bool visit[1002] = { false };

void dfs(int v, int n)
{
	visit[v] = true;
	cout << v << " ";//방문 노드 출력
	for (int i = 1; i <= n; i++)
	{
		if (vec[v][i] == 1 && visit[i] == false) //연결 노드이면서 미방문일 시
			dfs(i, n); //탐색
	}
}
void bfs(int v, int n)
{
	queue<int> q;
	q.push(v); //큐에 노드 넣음
	visit[v] = 1; //방문 처리
	while (!q.empty())
	{
		v = q.front();
		q.pop(); //방문 노드 제거
		cout << v << " "; //방문 노드 출력
		for (int i = 1; i <= n; i++)
		{
			if (vec[v][i] == 1 && visit[i] == false)
			{
				q.push(i);
				visit[i] = true; //v노드에 연결된 모든 노드를 방문
			}
		}
	}
}

int main()
{
	int n, m, v, a, b;
	cin >> n >> m >> v;//정점 개수, 간선 개수, 시작 정점

	//행렬 만들기
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		vec[a][b] = 1;
		vec[b][a] = 1;
	}

	dfs(v, n);
	memset(visit, false, sizeof(visit));
	cout << endl;
	bfs(v, n);

	return 0;
}