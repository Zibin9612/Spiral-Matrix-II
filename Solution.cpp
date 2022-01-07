#include <iostream>
#include <vector>
#include "Solution.h"

vector<vector<int>> Solution::generateMatrix(int n) {
    //1.生成nxn矩阵 NxN Matrix Gerneration
    vector<vector<int>> res(n, vector<int>(n));
    //2.初始化行数列数最大最小值 
    int line_max = n - 1;
    int line_min = 0;
    int col_max = n - 1;
    int col_min = 0;
    int max_val = n * n;
    int i = 0;
    //2.从1遍历到n平方
    while (1) {

        //3.行数最小值确定，递增遍历至最大列数，同时行数最小值加1
        for (int j = col_min;j <= col_max;j++) {
            i++;
            res[line_min][j] = i;

        }
        //cout<<"i= "<<i<<endl;
        line_min++;
        //cout<<"line_min= "<<line_min<<endl;

        if (i == max_val) {
            break;
        }

        //4.列数最大值确定，递增遍历至最大行数，同时列数最大值减1
        for (int j = line_min;j <= line_max;j++) {
            i++;
            res[j][col_max] = i;

        }
        col_max--;
        //cout<<"i= "<<i<<endl;
        //cout<<"col_max= "<<col_max<<endl;
        if (i == max_val) {
            break;
        }

        //5.行数最大值确定，递减遍历至最小列数，同时行数最大值减1
        for (int j = col_max;j >= col_min;j--) {
            i++;
            res[line_max][j] = i;

        }
        line_max--;
        //cout<<"i= "<<i<<endl;
        //cout<<"line_max= "<<line_max<<endl;
        if (i == max_val) {
            break;
        }

        //6.列数最小确定，递减遍历至最小行数，同时列数最小值加1
        for (int j = line_max;j >= line_min;j--) {
            i++;
            res[j][col_min] = i;

        }
        col_min++;
        //cout<<"i= "<<i<<endl;
        //cout<<"col_min= "<<col_min<<endl;
        if (i == max_val) {
            break;
        }
    }

    return res;


    //6.列数最小确定，递减遍历至最小行数，同时列数最小值加1
    //7.重复以上步骤
}