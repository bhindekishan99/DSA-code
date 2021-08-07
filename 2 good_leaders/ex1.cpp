// https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?track=md-arrays&batchId=144

vector<int> leaders(int a[], int n){
    // Code here
    vector<int> ans;
    stack<int> stk;
    stk.push(a[n-1]);// as given that The rightmost element is always a leader. 

    for( int i = n-2; i >= 0; i-- )
    {
        if( a[i] >= stk.top() )
            stk.push( a[i] );
    }
    while( !( stk.empty() ) )
    {
        ans.push_back(stk.top());
        stk.pop();
    }
return ans;
}