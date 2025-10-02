/********************************************* C++ ****************************************/
//Approach-1 : Using BFS
//T.C : O(n)
//S.C.:o(n)
class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int> result;
        if (!root) return result;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
       {
         int sz=q.size();
         
         for(int i=0; i<sz;i++)
         {
             Node* curr=q.front();
             q.pop();
             if(i==0)
             {
                 result.push_back(curr->data);
             }
             if(curr->left) q.push(curr->left);
             if(curr->right) q.push(curr->right);
         }
       }
       return result;
    }
};
