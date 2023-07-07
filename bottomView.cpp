class Solution {
  public:
 vector <int> bottomView(Node *root) 
    {
       map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        vector<int>ans;
        while(!q.empty())
        {
            Node* curr= q.front().first;
            int level=q.front().second;
            q.pop();
            m[level]=curr->data;
            if(curr->left)q.push({curr->left,level-1});
            if(curr->right)q.push({curr->right,level+1});
            
        }
        for(auto j :m)
        {
            ans.push_back(j.second);
        }
        return ans;
    }
};