#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void initialize(int** visited)
{ 
    visited[0] = malloc(sizeof(int)*3);
    visited[0][0] = visited[0][1] = visited[0][2] = 0;
    visited[1] = malloc(sizeof(int)*3);
    visited[1][0] = visited[1][1] = visited[1][2] = 0;
    visited[2] = malloc(sizeof(int)*3);
    visited[2][0] = visited[2][1] = visited[2][2] = 0;
}

int zeroMatChecker(int** mat, int r, int c)
{
    for(int t = 0; t < r; t++)    
        for(int x = 0; x < c; x++)    
            if(mat[t][x])   
                return (0);
    return (1);
}

void set(int** mat, int row, int col, int r, int c)
{
    mat[row][col] =! mat[row][col];
    
    if(col != c - 1)
        mat[row][col+1]=!mat[row][col+1];
    if(col != 0)  
        mat[row][col - 1] =! mat[row][col - 1];
    if(row != r-1)    
        mat[row + 1][col] =! mat[row + 1][col];
    if(row != 0)  
        mat[row - 1][col] =! mat[row - 1][col];
}

void find_Shortest_Path(int** mat, int steps, int** visited,int* shortest, int r, int c)
{
    for(int t = 0; t < r; t++){
        for(int x = 0; x < c; x++){
           if(visited[t][x] == 0){
                visited[t][x] = 1;
                set(mat, t, x, r, c);
                if(zeroMatChecker(mat, r, c)) {
					if(*shortest == -1 || steps < *shortest)
                        *shortest = steps;
                    set(mat, t, x, r, c);
                    visited[t][x] = 0;
                    return ;    
                } else
					find_Shortest_Path(mat, steps + 1, visited, shortest, r, c);
                set(mat, t, x, r, c);
                visited[t][x] = 0;
            }
        }
    }
	return ;
}

int minFlips(int** mat, int matSize, int* matColSize)
{
    int r = matSize;
    int c = *matColSize;
    int shortest = -1;
    int **visited = malloc(sizeof(int*)*3);
	
    initialize(visited);
    if(zeroMatChecker(mat, r, c))
        return (0);
    find_Shortest_Path(mat, 1, visited, &shortest, r, c);
	return (shortest);
}