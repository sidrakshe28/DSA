class Solution {
public:
    void dfs(const unordered_map<int,vector<int>>&g,int node,unordered_set<int>& visited, vector<int>& result)
    {
        visited.insert(node);
        result.push_back(node);
        for (const int neighbor : g.at(node)) 
        {
            if (visited.find(neighbor) == visited.end()) 
            {
                dfs(g, neighbor, visited, result);
            }
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs)
    {
        unordered_map<int,vector<int>> g;
        for(const auto& pair:adjacentPairs)
        {
            g[pair[0]].push_back(pair[1]);
            g[pair[1]].push_back(pair[0]);
        }
        int start;
        for(const auto& entry:g)
        {
            if(entry.second.size()==1)
            {
                start=entry.first;
                break;
            }
        }
        unordered_set<int> visited;
        vector<int> result;
        dfs(g, start, visited, result);
        return result;

    }
};