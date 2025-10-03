

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int>ans;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            auto[node,dist]=q.front();
            q.pop();
           mp[dist] = node->data;
            if(node->left) q.push({node->left,dist-1});
            if(node->right)q.push({node->right,dist+1});
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
