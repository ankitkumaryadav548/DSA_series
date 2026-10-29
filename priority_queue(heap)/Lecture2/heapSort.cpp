    // we can take any heap(min and max) to sort 
    #include<iostream>
    #include<queue>
    #include<vector>
    using namespace std;

    int main(){
        int arr[] = {2,5,1,6,7,4,9,8};
        int n = sizeof(arr)/sizeof(arr[0]);
        priority_queue<int>pq;
        vector<int>ans;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        while(pq.size()>0){
            ans.push_back(pq.top());
            pq.pop();
        }
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }

    }