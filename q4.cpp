#include <iostream>
#include <array>

int det(std::array<std::array<int, 2>, 2> arr) {
    return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
}

std::array<std::array<int, 2>, 2> addArray(std::array<std::array<int, 2>, 2> a, std::array<std::array<int, 2>, 2> b) {
    std::array<std::array<int, 2>, 2> res;
    res[0][0] = a[0][0] + b[0][0];
    res[0][1] = a[0][1] + b[0][1];
    res[1][0] = a[1][0] + b[1][0];
    res[1][1] = a[1][1] + b[1][1];
    return res;
}

std::array<std::array<int, 2>, 2> mulArray(std::array<std::array<int, 2>, 2> a, std::array<std::array<int, 2>, 2> b) {
    std::array<std::array<int, 2>, 2> res;
    res[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    res[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    res[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    res[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    return res;
}

int main() {
    std::array<std::array<int, 2>, 2> arr1;
    std::cout << "Enter a 2x2 matrix: \n";
    std::cout << "Enter the first row: ";
    std::cin >> arr1[0][0] >> arr1[0][1];
    std::cout << "Enter the second row: ";
    std::cin >> arr1[1][0] >> arr1[1][1];

    int determinant = det(arr1);
    std::cout << "\nThe determinant of the matrix is " << determinant << std::endl;

    std::array<std::array<int, 2>, 2> arr2;
    std::cout << "\nEnter a second 2x2 matrix: \n";
    std::cout << "Enter the first row: ";
    std::cin >> arr2[0][0] >> arr2[0][1];
    std::cout << "Enter the second row: ";
    std::cin >> arr2[1][0] >> arr2[1][1];

    std::array<std::array<int, 2>, 2> addition = addArray(arr1, arr2);
    std::cout << "\nThe sum of the two matrices is: \n";
    std::cout << addition[0][0] << "\t" << addition[0][1] << std::endl;
    std::cout << addition[1][0] << "\t" << addition[1][1] << std::endl;

    std::array<std::array<int, 2>, 2> multiplication = mulArray(arr1, arr2);
    std::cout << "\nThe product of the two matrices is: \n";
    std::cout << multiplication[0][0] << "\t" << multiplication[0][1] << std::endl;
    std::cout << multiplication[1][0] << "\t" << multiplication[1][1] << std::endl;


    return 0;
}