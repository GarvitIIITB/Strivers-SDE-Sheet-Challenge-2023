bool searchMatrix(vector<vector<int>>& mat, int target) {
    int low = 0;
    int n = mat.size(); 
    int s = mat[0].size();
    if(!n) return false;
    int high = n*s - 1;

    while(low <= high){
        int mid = low + (high-low)/2;
        if(mat[mid/s][mid%s] == target){
            return true;
        }
        if(mat[mid/s][mid%s] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return false;
}
