#include <bits/stdc++.h>
using namespace std;

void findTopoSort(int node, vector<int>& vis, vector<vector<int>>& adj, stack<int>& st) {
    vis[node] = 1;
    for (int it : adj[node]) {
        if (!vis[it]) {
            findTopoSort(it, vis, adj, st);
        }
    }
    st.push(node); // Push after visiting all neighbors
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges:" << endl;
    cin >> vertices >> edges;

    vector<vector<int>> graph(vertices);
    cout << "Enter the directed edges (u -> v):" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v); // Directed edge
    }

    vector<int> visited(vertices, 0);
    stack<int> st;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            findTopoSort(i, visited, graph, st);
        }
    }

    cout << "Topological Sort Order:" << endl;
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges:" << endl;
    cin >> vertices >> edges;

    vector<vector<int>> graph(vertices);
    cout << "Enter the directed edges (u -> v):" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v); // Directed edge
    }

    vector<int> visited(vertices, 0);
    stack<int> st;

    // Inline DFS logic for topological sort
    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            stack<pair<int, bool>> dfsStack;
            dfsStack.push({i, false});

            while (!dfsStack.empty()) {
                auto [node, processed] = dfsStack.top();
                dfsStack.pop();

                if (processed) {
                    st.push(node);
                    continue;
                }

                if (!visited[node]) {
                    visited[node] = 1;
                    dfsStack.push({node, true}); // Mark for post-processing

                    for (auto it = graph[node].rbegin(); it != graph[node].rend(); ++it) {
                        if (!visited[*it]) {
                            dfsStack.push({*it, false});
                        }
                    }
                }
            }
        }
    }

    cout << "Topological Sort Order:" << endl;
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
