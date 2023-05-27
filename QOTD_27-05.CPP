struct Node* modifyTheList(struct Node *head)
    {
        vector<int> arr;
        Node * temp=head;
        
        while(temp!=NULL){
            int val=temp->data;
            arr.push_back(val);
            temp=temp->next;
        }
        int mid=arr.size()/2-1;
 
        int j=arr.size()-1;
        vector<int> right_left_ele;
        for(int i=0;i<=mid;i++){
            right_left_ele.push_back(arr[i]);
        }
        
        for(int i=0;i<=mid;i++){
            int val=arr[j]-arr[i];
            j--;
            arr[i]=val;
        }
        
        
        if(arr.size()&1){
            //odd
            mid=mid+2;
        }
        else{
            mid=mid+1;
        }
        int k=right_left_ele.size()-1;
        for(int i=mid;i<arr.size();i++){
            arr[i]=right_left_ele[k];
            k--;
        }
        temp=head;
        int i=0;
        while(temp!=NULL){
             temp->data=arr[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
