#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;
vector<vector<int>> v(20001, vector<int>(20001, 0));
bool visit[20001] = {false};
int answer = 0;
vector<int> dist;
queue<pair<int, int>> q;

void bfs(int n) {
    while(!q.empty()) {
        int node = q.front().first;
        int cnt = q.front().second;
        dist.push_back(cnt);
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (v[node][i] == 1 && visit[i] == false) {
                visit[i] = true;
                q.push({i, cnt + 1});
            }
        }
    }
}

int solution(int n, vector<vector<int>> edge) {
    
    for (int i = 0; i < edge.size(); i++) {
        v[edge[i][0]][edge[i][1]] = v[edge[i][1]][edge[i][0]] = 1;
    }
    visit[1] = true;
    q.push({1, 0});
    bfs(n);
    sort(dist.begin(), dist.end(), greater<>());
    for (int i = 0; i < dist.size(); i++) {
        cout << dist[i] << " ";
    }
    for (int i = 0; i < n + 1; i++) {
        if (dist[0] == dist[i])
            answer++;
        else
            break;
    }
    
    return answer;
}