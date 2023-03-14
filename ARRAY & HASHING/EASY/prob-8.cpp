// 118. Pascal's Triangle

class Solution
{
public:
    vector<vector<int>> generate(int n)
    {
        // Create a vector of vectors named 'ans', where the outer vector has a size of 'n'.
        // Each element of the outer vector is a vector of integers.

        // 2D vector
        vector<vector<int>> ans(n); // initialize n rows 7 ith row(0-indexed) has i+1 elements
        for (int i = 0; i < n; i++)
        {
            ans[i] = vector<int>(i + 1, 1); // ith row(0-indexed) has i+1 elements
            for (int j = 1; j < i; j++)     // 1st and last elements will be 1, rest will be sum of two elements from above row
                // In pascal triangle element of array[row][column] will be the sum of 2 elements of the previous row: array[row-1][column-1] & array[row-1][column].

                ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }
        return ans;
    }
};



//ANother Way

class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>v(numRows);
        for(int i=0;i<numRows;i++)
        {
            v[i].resize(i+1);//resize every row for example 0th row with size 1,2nd row with size 3..
            v[i][0]=v[i][i]=1;//fix value of first nand last element of every row as 1.
              for(int j=1;j<i;j++)
              {
                  v[i][j]=v[i-1][j-1]+v[i-1][j];//finding value by adding above 2 elements.
              }
        }      
        return v;
    }
};