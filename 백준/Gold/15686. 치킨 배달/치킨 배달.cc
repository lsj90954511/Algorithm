#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define MAX_INT 2147483647;
struct House {
	int r, c;
};
struct Chicken {
	int r, c;
	bool visited;
};

int n, m;
int arr[50][50];
int minDist = MAX_INT;
vector<House> house;
vector<Chicken> chicken;

void calculateDistance()
{
	int cityDist = 0;
	for (int i = 0; i < house.size(); i++)
	{
		int dist = MAX_INT;
		for (int j = 0; j < chicken.size(); j++)
		{
			if (chicken[j].visited)
			{
				int temp = abs(house[i].r - chicken[j].r) + abs(house[i].c - chicken[j].c);
				if (temp < dist)
					dist = temp;
			}
		}
		cityDist += dist;
	}
	if (cityDist < minDist)
		minDist = cityDist;
}

void selectChicken(int index, int count)
{
	if (count == m)
	{
		calculateDistance();
		return;
	}
	for (int i = index; i < chicken.size(); i++)
	{
		if (!chicken[i].visited)
		{
			chicken[i].visited = true;
			selectChicken(i, count + 1);
			chicken[i].visited = false;
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	int info;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> info;
			if (info == 1)
				house.push_back({ i, j });
			else if (info == 2)
				chicken.push_back({ i, j, false });
		}
	}

	selectChicken(0, 0);
	cout << minDist;

	return 0;
}

