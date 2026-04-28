#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, w;
};

int main() {
    int vertex, edge;
    cin >> vertex >> edge;
    Edge graph[edge];
    map<char, int> mp;
    int index = 0;

    for (int i = 0; i < edge; i++) {
        char u, v;
        int w;
        cin >> u >> v >> w;

        if (mp.find(u) == mp.end()) {
            mp[u] =index;
            index++;
        }
        if (mp.find(v) == mp.end()) {
            mp[v] = index;
            index++;
        }

        graph[i].u = mp[u];
        graph[i].v = mp[v];
        graph[i].w = w;
    }

    int source = 0;
    int distance[vertex];
    for (int i = 0; i < vertex; i++) {
        distance[i] = INT_MAX;
    }
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

    bool NegativeCycle = false;
    for (int j = 0; j < edge; j++) {
        int u = graph[j].u;
        int v = graph[j].v;
        int w = graph[j].w;
        if (distance[u] != INT_MAX && distance[v] > distance[u] + w) {
            NegativeCycle = true;
            break;
        }
    }

    if (NegativeCycle) {
        cout << "Graph has a negative cycle\n";
    } else {
        cout << "Distances Are:\n";
        for (auto it : mp) {
            cout << "vertex: " << it.first << "\tDistance: " << distance[it.second] << endl;
        }
    }

    return 0;
}
