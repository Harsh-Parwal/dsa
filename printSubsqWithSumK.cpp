void printSubsqWithSumK(vector<int> &arr,int idx,vector<int> &ds,int k,int sum){
    if(idx==arr.size()){
        if(sum==k){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[idx]);
    sum+=arr[idx];
    printSubsqWithSumK(arr,idx+1,ds,k,sum);
    ds.pop_back();
    sum-=arr[idx];
    printSubsqWithSumK(arr,idx+1,ds,k,sum);
}
int main(){
    vector<int> arr={1,2,3};
    int k=3;
    vector<int> ds;
    printSubsqWithSumK(arr,0,ds,k,0);
}
