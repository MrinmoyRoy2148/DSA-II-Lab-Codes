#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, w;
};

int main() {
    int vertex, edge;
    cin >> vertex >> edge;
    vector<Edge> graph(edge);

    for (int i = 0; i < edge; i++) {
        cin >> graph[i].u >> graph[i].v >> graph[i].w;
    }

    int source = 0;
    vector<int> distance(vertex, INT_MAX);
    distance[source] = 0;

    for (int i = 0; i < vertex - 1; i++) {
        for (int j = 0; j < edge; j++) {
            int u = graph[j].u;
            int v = graph[j].v;
            int w = graph[j].w;
            if (distance[u] != INT_MAX && distance[v] > distance[u] + w) {
                distance[v] = distance[u] + w;
            }
        }
    }

    bool hasNegativeCycle = false;
    for (int j = 0; j < edge; j++) {
        int u = graph[j].u;
        int v = graph[j].v;
        int w = graph[j].w;
        if (distance[u] != INT_MAX && distance[v] > distance[u] + w) {
            hasNegativeCycle = true;
            break;
        }
    }

    if (hasNegativeCycle) {
        cout << "Graph has a negative weight cycle\n";
    } else {
        cout << "Distances Are:\n";
        for (int i = 0; i < vertex; i++) {
            cout << "vertex: " << i << "\tDistance: ";
            if (distance[i] == INT_MAX)
                cout << "INF";
            else
                cout << distance[i];
            cout << endl;
        }
    }

    return 0;
}
