class Solution {
public:
    void dfs(int r, int c,vector<vector<int>>& image, int color,int newcolor){
        int n=image.size();
        int m=image[0].size();

        if(r<0||r>=n||c<0||c>=m) return;
        if(image[r][c]!=color) return;
        image[r][c]=newcolor;
        dfs(r-1,c,image,color,newcolor);
        //bottom
        dfs(r+1,c,image,color,newcolor);
        //left
        dfs(r,c-1,image,color,newcolor);
        //right
        dfs(r,c+1,image,color,newcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int originalColor = image[sr][sc];
        if(originalColor==color) return image;
        dfs(sr,sc,image,originalColor,color);
        return image;
    }
};
/*
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)return image;
        int row=image.size();
        int col=image[0].size();
        queue<pair<int,int>> q;
        int directions[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
        q.push({sr,sc});
        int ori=image[sr][sc];
        while(!q.empty()){
            auto [r,c]=q.front();
            image[sr][sc]=color;
            q.pop();
            for(auto &d:directions){
                int nr=r+d[0];
                int nc=c+d[1];
                if((nr>=0)&&(nr<row)&&(nc>=0)&&(nc<col)&&image[nr][nc]==ori){
                    image[nr][nc]=color;
                    q.push({nr,nc});
                }
            }
        }
        return image;
    }
};*/