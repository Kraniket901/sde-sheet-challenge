class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        
        if(root==NULL)return {};
        //WE REQUIRES here two things
        //first:queue for lavel order tarversal 
        //when there is involvemnt of horizontal distance we need queue data structure and we need to perform lavel ordeer tarversal
        //and we also have to maintain a track of horizontal lavel
        
        map<int,int>mp;//index vs node mapping
        //we need ordered elemts (sorted order) so use map instead of unordered map
        //since we will put first patramtere as index because the nodes will comes in sorted order according to index
        queue<pair<Node* ,int>>q;//node vs index
        q.push({root,0});
        
       
        
        while(!q.empty()){
            
            int size=q.size();
            
            for(int i=0;i<size;i++){
                
                Node* node=q.front().first;
                int index=q.front().second;
                
                q.pop();
                
               if(mp.find(index)==mp.end()){
                 mp[index]=node->data;
               }
                
                
                if(node->left){
                    q.push({node->left,index-1});
                }
                if(node->right){
                    q.push({node->right,index+1});
                }
                
                
            }
            
            
        }
        
        
        vector<int>ans;
        
        for(auto it:mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }


};