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
// #include <stdio.h>

// int main() {
//     int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
//         }
//     }

//     return 0;
// }

// multi-dimensional arrays
#include <stdio.h>

int main() {
    int cube[2][2][2] = {
        {{1, 2}, {3, 4}}
        {{5, 6}, {7, 8}}
    }; // 3D array declaration and initialization

    // Accessing elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("cube[%d][%d][%d] = %d\n", i, j, k, cube[i][j][k]);
            }
        }
    }

    return 0;
}