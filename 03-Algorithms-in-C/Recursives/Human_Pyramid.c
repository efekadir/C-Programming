#include <stdio.h>

double calculateWeightBackRecursive(int row, int col) {
    if (row == 0) return 0.0;

    double weightFromLeft = 0.0;
    double weightFromRight = 0.0;

    if (col > 0) {
        weightFromLeft = (calculateWeightBackRecursive(row - 1, col - 1) + 80.0) / 2.0;
    }

    if (col < row) {
        weightFromRight = (calculateWeightBackRecursive(row - 1, col) + 80.0) / 2.0;
    }

    return weightFromLeft + weightFromRight;
}

double calculateWeightBackIterative(int row, int col) {
    double weights[31][31] = {0.0};
    int r, c;

    for (r = 0; r <= row; r++) {
        for (c = 0; c <= r; c++) {
            if (r < row) {
                double totalWeight = weights[r][c] + 80.0;
                weights[r + 1][c] += totalWeight / 2.0;
                weights[r + 1][c + 1] += totalWeight / 2.0;
            }
        }
    }
    return weights[row][col];
}

int main() {
    int row, col;
    printf("Enter row and column:: ");
    scanf("%d %d", &row, &col);

    if (row < 0 || row > 30 || col < 0 || col > row) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Recursive result: %.2f kg\n", calculateWeightBackRecursive(row, col));
    printf("Iterative result: %.2f kg\n", calculateWeightBackIterative(row, col));

    return 0;
}