int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	// only one duplicate is present 
    int res = 0;
    for(int i = 0; i < arr.size(); i++){
        res = res ^ arr[i];
    }
    for(int i = 0; i < arr.size(); i++){
        res = res ^ i;
    }
    return res;
}
