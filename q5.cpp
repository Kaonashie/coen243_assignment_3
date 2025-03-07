// Assignment done by
// Soma Chénard-Koné 40299666
// Nirmal Patel

#include <iostream>
#include <array>

const size_t Maxsize = 30;

int determinant(std::array<std::array<int , Maxsize>, Maxsize>& m, size_t actualSize);

int main() {
    int n{};
    std::cout << "Enter the dimension of the matrix: ";
    std::cin >> n;
    if (!(n >= 2 && n <= 30)) {
        return 0;
    }

    std::array<std::array<int, Maxsize>, Maxsize> matrix{};
    std::cout << "Enter the elements of the matrix: \n";
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int det = determinant(matrix, n);

    std::cout << "The determinant of the " << n << "x" << n << " matrix is " << det << std::endl;
    return 0;
}

int power(int j) {
    return j % 2 == 0 ? 1 : -1;
}

int determinant(std::array<std::array<int, Maxsize>, Maxsize>& m, size_t actualSize) {
    if (actualSize == 1) {
        return m[0][0];
    }
    if (actualSize == 2) {
        return m[0][0] * m[1][1] - m[0][1] * m[1][0];
    }

    int det = 0;
    for (int column  = 0; column < actualSize; column++) {
        std::array<std::array<int, Maxsize>, Maxsize> minor;
        for (int i = 1; i < actualSize; i++) {
            int subCol = 0;
            for (int j = 0; j < actualSize; j++) {
                if (j == column) {
                    continue;
                }
                minor[i - 1][subCol] = m[i][j];
                subCol++;
            }
        }
        det += power(column) * m[0][column] * determinant(minor, actualSize -1);
    }
    return det;
}