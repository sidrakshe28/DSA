class Graph {
private:
    int n;
    unordered_multimap<int, pair<int,int>> mmp; //for faster lookup
    //will be {from {to, cost}}
    // as in pair<int,pair<int,int>>
    // or make_pair(from, make_pair(to,cost))
public:
    Graph(int n, vector<vector<int>>& edges) {
        this->n=n;
        for(int i=0; i<edges.size(); i++){
            mmp.insert(make_pair(edges[i][0], make_pair(edges[i][1], edges[i][2])));
        }
    }

    void addEdge(vector<int> edge) {
        mmp.insert(make_pair(edge[0], make_pair(edge[1], edge[2])));
    }

    int shortestPath(int node1, int node2) {
        //Dijkstra
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(n, INT_MAX);
        pq.push(make_pair(0, node1));
        dist[node1] = 0;

        while (!pq.empty()) {
            int u = pq.top().second; //start of edge (from)
            pq.pop();

            auto it = mmp.equal_range(u); //it.first=[start of key]; it.second=[end of key]
            for (auto i = it.first; i != it.second; ++i) {
                int v = i->second.first; //end of edge (to)
                int weight = i->second.second; //cost
                if (dist[v] > dist[u] + weight) { //found cheaper way
                    dist[v] = dist[u] + weight;
                    pq.push(make_pair(dist[v], v)); //new search location
                }
            }
        }

        return dist[node2] == INT_MAX ? -1 : dist[node2]; //return -1 if doesnt exist
    }

};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */