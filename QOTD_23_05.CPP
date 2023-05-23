Node* solve(int pre[], int &index,unordered_map<int,int> &m,int& size){
      if(index==size)
        return NULL;
      int ele=pre[index];
      Node* root=new Node(ele);
      if(index+1 < size){
          int next=pre[index+1];
          if(m[next]<m[ele]){
              return root;
          }
          index++;
          root->left=solve(pre,index,m,size);
          index++;
          root->right=solve(pre,index,m,size);
      }
      return root;
  }
    Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        // Code here
        unordered_map<int,int>m;
        for(int i=0;i<size;i++){
            m[preMirror[i]]=i;
        }
        int index=0;
        return solve(pre,index,m,size);
    }
