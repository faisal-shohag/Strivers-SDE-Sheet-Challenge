bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = mat.size();
        int col = mat[0].size();

        int l = 0, h = row*col - 1;

        while(l<=h) {
            int mid = (l+h)/2;

            if(target == mat[mid/col][mid%col]) return true;

            if(target>mat[mid/col][mid%col]) l = mid+1;
            else h = mid-1;
        }

        return false;
}
