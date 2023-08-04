int findUnique(int *arr, int size)
{
    //Write your code here
    int res = 0;
    for(int i = 0; i < size; i++){
        res = res ^ arr[i];
    }
    return res;
}
