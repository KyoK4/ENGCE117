#include <stdio.h>

int* GetMatrix(int *row, int *col);

int main() {
    int *data, m, n;
    data = GetMatrix(&m, &n);

    if (data == 0) {
        printf( "Matrix creation failed.\n" );
    } else {
        printf( "--------------------------" );
        printf("\nMatrix:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", data[i * n + j]);
            }
        printf("\n");
        }
    }
    return 0;
}

int* GetMatrix(int *row, int *col) {
    printf( "Enter number of rows and columns: " );
    scanf( "%d %d", row, col );

    if ( *row < 0 || *col < 0 ) {
        printf( "Error\n" ) ;
        return 0;
    }
    if ( *row == 0 || *col == 0 ) {
        printf( "Error\n" ) ;
        return 0;
    }
    
    int *matrix = new int[(*row) * (*col)]; 

    printf("Enter matrix elements:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            scanf("%d", &matrix[i * (*col) + j]);
        }
    }

    return matrix;
}
