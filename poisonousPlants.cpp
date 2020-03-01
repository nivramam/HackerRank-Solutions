int poisonousPlants(vector<int> p) {
    int day=1;
    for(int i=0;i<p.size()-1;i++)
    {
        int j=i+1;
        if(p[i]<p[j])
        {
            //remove p[j]
            p.erase(std::remove(p.begin(), p.end(), 8), p.end());
            day+=1;
        }
        //print elements in array after removal of plant
        //increment count of day
        for(int k=0;k<p.size();k++)
        {
            cout<<p[k]<<" ";

        }
        cout<<endl;
    }
    return day;
}
