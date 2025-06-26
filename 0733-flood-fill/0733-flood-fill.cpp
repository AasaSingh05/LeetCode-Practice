//TIME COMPLEXITY: O()
//SPACE COMPLEXITY: O()

class Solution {
public:

    //helper function to do the DFS
    void dfs(int i, int j, int n, int m, vector<vector<int>>& image, int newcol, int oldColor){

        //base case of it being not the cell we want 
        if(
            (i < 0) || (i >= n) ||
            (j < 0) || (j >= m) ||
            (image[i][j] == newcol) || (image[i][j] != oldColor) 
        ){
            //do nothing 
            return ;
        }

        //here is the case of it being a needed

        //before each of the new iteration it will execute this
        image[i][j] = newcol;

        //directly north of the pixel
        dfs(i+1,j,n,m,image,newcol,oldColor);

        //directly south of the pixel
        dfs(i-1,j,n,m,image,newcol,oldColor);

        //directly east of the pixel
        dfs(i,j-1,n,m,image,newcol,oldColor);

        //directly west of the pixel
        dfs(i,j+1,n,m,image,newcol,oldColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        //declaration and initialization
        int maxRow = image.size();
        int maxCol = image[0].size();
        int oldColor = image[sr][sc];

        //calling the DFS helper function
        dfs(sr,sc,maxRow,maxCol,image,color,oldColor);

        //finally returning the image
        return image;
    }
};