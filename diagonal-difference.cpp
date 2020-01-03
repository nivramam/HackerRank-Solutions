int diagonalDifference(vector<vector<int>> arr) {
    int sum1=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(i==j){
                sum1+=arr[i][j];
            }
        }
    }
    int sum2=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(i+j==arr.size()-1){
                sum2+=arr[i][j];
            }
        }
    }
    //sum2+=arr[arr.size()/2][arr.size()/2];
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    return abs(sum1-sum2);
}
