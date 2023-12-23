class Solution {
public:
    bool isPathCrossing(string path) {
        pair<int, int> curr_coor({0,0});
        set<pair<int,int>> st;
        st.insert(curr_coor);
        for (auto &dir: path)
        {
            if(dir=='N') curr_coor.second+=1;
            if(dir=='S') curr_coor.second-=1;
            if(dir=='E') curr_coor.first+=1;
            if(dir=='W') curr_coor.first-=1;
            if(st.find(curr_coor)!=st.end()) return(true);
            st.insert(curr_coor);
        }
        return(false);
    }
};

// //path[i] = 'N', 'S', 'E' or 'W'
// starting_point=0;
// origin=(0,0)
//     x,y=(0,0)
//     we need to define the x,y coordinates-
//     so if its going in north-0,1
//     south-(0,-1)
//      west-  -1,0
//     east- 1,0
        
        
// //hash set approach
