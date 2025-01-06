// 1d Array
// #include <stdio.h>

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50}; 

//     for (int i = 0; i < 5; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }

//     return 0;
// }

// 2d Array
#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}
