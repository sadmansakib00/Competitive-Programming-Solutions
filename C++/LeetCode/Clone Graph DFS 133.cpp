/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    bool vis[101];
    map<Node*, Node*> tracker;
    Node *ans;
    Node* cloneGraph(Node* node) {
        if(node != NULL) tracker[node] = new Node(node->val);
        else return NULL;
        ans = tracker[node];
        dfs(node);
        return ans;
    }
    void dfs(Node *node) {
        vis[node->val] = 1;
        for(int i=0; i<node->neighbors.size(); i++) {
            if(tracker.find(node->neighbors[i]) == tracker.end()) {
                tracker[node->neighbors[i]] = new Node(node->neighbors[i]->val);
            }
            tracker[node]->neighbors.push_back(tracker[node->neighbors[i]]);
            if(!vis[node->neighbors[i]->val]) dfs(node->neighbors[i]);
        }
    }
};
