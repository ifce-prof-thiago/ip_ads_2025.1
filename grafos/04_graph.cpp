#include <queue>
#include <string>
#include <vector>
using namespace std;

struct Node {
    string name;
    bool explored = false;
    vector<Node *> neighbors = {};

    void addNeighbor(Node &n) {
        neighbors.push_back(&n);
    }
};

void bfs(Node &root) {
    queue<Node *> q = {};
    root.explored = true;
    q.push(&root);
    while (!q.empty()) {
        const auto v = q.front();
        q.pop();
        printf("V: %s\n", v->name.c_str());
        for (auto neighbor: v->neighbors) {
            if (!neighbor->explored) {
                neighbor->explored = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    Node a = {"A"};
    Node b = {"B"};
    Node c = {"C"};
    Node d = {"D"};
    Node e = {"E"};
    Node f = {"F"};
    Node g = {"G"};
    Node h = {"H"};

    a.addNeighbor(b);
    a.addNeighbor(f);
    a.addNeighbor(g);
    b.addNeighbor(c);
    b.addNeighbor(d);
    d.addNeighbor(e);
    g.addNeighbor(h);

    bfs(a);
}
