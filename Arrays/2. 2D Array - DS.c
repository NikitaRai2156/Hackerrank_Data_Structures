#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];
    int arr_i, arr_j, hmax = -63, hour_sum[4][4];  //hmax = -63 because that is the least sum possible for the given range of values
    for(arr_i = 0; arr_i < 6; arr_i++){
       for(arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    for(arr_i = 0; arr_i < 4; arr_i++){
        for(arr_j = 0; arr_j < 4; arr_j++){
            hour_sum[arr_i][arr_j] = arr[arr_i][arr_j] + arr[arr_i][arr_j + 1] + arr[arr_i][arr_j + 2] + arr[arr_i + 1][arr_j + 1]
                            + arr[arr_i + 2][arr_j] + arr[arr_i + 2][arr_j + 1] + arr[arr_i + 2][arr_j + 2]; 
            if(hour_sum[arr_i][arr_j] > hmax){
                hmax = hour_sum[arr_i][arr_j];
            }
        }
    }
    printf("%d", hmax);
    return 0;
}
