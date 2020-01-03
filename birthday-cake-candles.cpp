int birthdayCakeCandles(vector<int> ar) {
    sort(ar.begin(),ar.end());
    for(int i=0;i<ar.size();i++)
        cout<<ar[i];
    int count=0;
    for(int i=ar.size()-1;i>0;i--){
        if(ar[i]==ar[i-1]){
            count++;
        }
    }
    return count+1;
}
