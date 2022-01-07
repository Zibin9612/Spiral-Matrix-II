#include <iostream>
#include <vector>
#include "Solution.h"

vector<vector<int>> Solution::generateMatrix(int n) {
    //1.����nxn���� NxN Matrix Gerneration
    vector<vector<int>> res(n, vector<int>(n));
    //2.��ʼ���������������Сֵ 
    int line_max = n - 1;
    int line_min = 0;
    int col_max = n - 1;
    int col_min = 0;
    int max_val = n * n;
    int i = 0;
    //2.��1������nƽ��
    while (1) {

        //3.������Сֵȷ�����������������������ͬʱ������Сֵ��1
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

        //4.�������ֵȷ�����������������������ͬʱ�������ֵ��1
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

        //5.�������ֵȷ�����ݼ���������С������ͬʱ�������ֵ��1
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

        //6.������Сȷ�����ݼ���������С������ͬʱ������Сֵ��1
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


    //6.������Сȷ�����ݼ���������С������ͬʱ������Сֵ��1
    //7.�ظ����ϲ���
}