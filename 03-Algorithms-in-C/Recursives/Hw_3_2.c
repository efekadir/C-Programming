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

    for (int r = 0; r <= row; r++) {
        for (int c = 0; c <= r; c++) {
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
    int r, c;
    printf("Satir ve Sutun giriniz: ");
    scanf("%d %d", &r, &c);

    if (r > 30 || c > r) {
        printf("Gecersiz giris.\n");
        return 1;
    }

    printf("Recursive Sonuc: %.2f kg\n", calculateWeightBackRecursive(r, c));
    printf("Iterative Sonuc: %.2f kg\n", calculateWeightBackIterative(r, c));

    return 0;
}