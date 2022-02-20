//Sorting
//Time complexity: O(Nlog(n))
//Space complexity: O(1)
pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a,a+n);
    return {a[0],a[n-1]};
}

//Simple Iteration with two variable
//Time complexity: O(N)
//Space complexity: O(1)
pair<long long, long long> getMinMax(long long a[], int n) {
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
    }
    return {min,max};
}

//Using set
pair<long long, long long> getMinMax(long long a[], int n) {
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    auto it=s.end();
    it--;
    return {*s.begin(),*it};
}