// 54. Spiral Matrix
// Given an m x n matrix, return all elements of the matrix in spiral order.
// Example 1:
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
// Example 2:
// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]

  class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int rowbegin=0;
        int rowend=matrix.length-1;
        int colbegin=0;
        int colend=matrix[0].length-1;
        List<Integer>list=new ArrayList<>();
        while(rowbegin<=rowend && colbegin<=colend){
            //traverse right
            for(int j=colbegin;j<=colend;j++)
            list.add(matrix[rowbegin][j]);
            rowbegin++;
            //traverse down
            for(int j=rowbegin;j<=rowend;j++)
           list.add(matrix[j][colend]);
            colend--;
            //traverse left
            if(rowbegin<=rowend){
                for(int j=colend;j>=colbegin;j--)
                list.add(matrix[rowend][j]);
                rowend--;
                //traverse up
                if(colbegin<=colend){
                    for(int j=rowend;j>=rowbegin;j--)
                   list.add(matrix[j][colbegin]);
                    colbegin++;
                }
        }
    }
    return list;
}};
