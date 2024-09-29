#include<stdio.h>

int main(){
    int accounts[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } }; //output = 9
    int wealth = 0; 
    int max_wealth = -1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            wealth += accounts[i][j];
        }
    
    }
}