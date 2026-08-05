class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>adj(n);
        vector<int>id (n,0);
        vector<bool>s(n ,false );

        for(auto & edg :invocations ){
            int u = edg[0];
            int v = edg[1];
            adj[u].push_back(v);
            id[v]++;
        }
        queue<int>q;
        q.push(k);
        s[k]=true ;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(int &ngbr : adj[curr]){
                id[ngbr]--;
                if(!s[ngbr]){
                    q.push(ngbr);
                    s[ngbr] = true ;
                }
            }
        }
        bool cannotremove = false ;
        vector<int>ans;
        for(int i = 0 ; i < n ; i ++){
            if(s[i] && id[i] > 0){
                cannotremove = true ;
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            if(!s[i])
                ans.push_back(i);
        }
        if(cannotremove){
            vector<int>vec(n);
            for(int i = 0 ; i < n ; i ++){
                vec[i] = i;
            }
            return vec;
        }
        return ans ;
    }
};