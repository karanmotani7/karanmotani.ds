
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX = 100;
vector<int> adj[MAX];
bool visited[MAX];

// Depth First Search (DFS)
void DFS(int vertex)
{
    visited[vertex] = true;
    cout << vertex << " ";

    for (int i = 0; i < adj[vertex].size(); i++)
    {
        int next = adj[vertex][i];

        if (!visited[next])
            DFS(next);
    }
}

// Breadth First Search (BFS)
void BFS(int start, int n)
{
    for (int i = 0; i < n; i++)
        visited[i] = false;

    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int vertex = q.front();
        q.pop();

        cout << vertex << " ";

        for (int i = 0; i < adj[vertex].size(); i++)
        {
            int next = adj[vertex][i];

            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main()
{
    int n, edges, u, v, start;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> edges;

    cout << "Enter edges (u v):\n";

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Enter starting vertex: ";
    cin >> start;

    for (int i = 0; i < n; i++)
        visited[i] = false;

    cout << "\nDFS Traversal: ";
    DFS(start);

    cout << "\nBFS Traversal: ";
    BFS(start, n);

    cout << endl;

    return 0;
}
