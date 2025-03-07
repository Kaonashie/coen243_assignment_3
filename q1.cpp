#include <iostream>
#include <vector>
using namespace std;

void readGrades(vector<int> &grades, int N);
void bubbleSort(vector<int> &grades);
void displayFourHighest(const vector<int> &grades);
void displayFourLowest(const vector<int> &grades);
double computeAverage(const vector<int> &grades);
double computeMedian(const vector<int> &grades);
int countA(const vector<int> &grades);
int countB(const vector<int> &grades);
int countC(const vector<int> &grades);
int countD(const vector<int> &grades);
int countF(const vector<int> &grades);

int main()
{
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    if (N <= 0) {
        cout << "Number of students must be positive.\n";
        return 0;
    }

    vector<int> grades(N);

    readGrades(grades, N);

    bubbleSort(grades);

    cout << "\n=== Results ===\n";
    displayFourHighest(grades);
    displayFourLowest(grades);

    double average = computeAverage(grades);
    cout << "Average grade: " << average << "\n";

    double median = computeMedian(grades);
    cout << "Median grade: " << median << "\n";

    cout << "Number of A grades (>= 90): " << countA(grades) << "\n";
    cout << "Number of B grades [80..89]: " << countB(grades) << "\n";
    cout << "Number of C grades [65..79]: " << countC(grades) << "\n";
    cout << "Number of D grades [50..64]: " << countD(grades) << "\n";
    cout << "Number of F grades (< 50):  " << countF(grades) << "\n";

    return 0;
}

void readGrades(vector<int> &grades, int N)
{
    cout << "Enter the grades (0 <= grade <= 100):\n";
    for (int i = 0; i < N; i++) {
        cin >> grades[i];
    }
}

void bubbleSort(vector<int> &grades)
{
    int n = grades.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
            }
        }
    }
}

void displayFourHighest(const vector<int> &grades)
{
    int size = grades.size();
    int startIndex = size - 4;
    if (startIndex < 0) {
        startIndex = 0;
    }

    cout << "4 highest grades: ";
    for (int i = startIndex; i < size; i++) {
        cout << grades[i] << " ";
    }
    cout << "\n";
}

void displayFourLowest(const vector<int> &grades)
{
    int size = grades.size();
    int endIndex = 4;
    if (endIndex > size) {
        endIndex = size;
    }

    cout << "4 lowest grades:  ";
    for (int i = 0; i < endIndex; i++) {
        cout << grades[i] << " ";
    }
    cout << "\n";
}

double computeAverage(const vector<int> &grades)
{
    double sum = 0.0;
    for (int g : grades) {
        sum += g;
    }
    return sum / grades.size();
}

double computeMedian(const vector<int> &grades)
{
    int size = grades.size();

    if (size % 2 != 0) {
        return grades[size / 2];
    } else {
        int mid1 = size / 2 - 1;
        int mid2 = size / 2;
        return (grades[mid1] + grades[mid2]) / 2.0;
    }
}

int countA(const vector<int> &grades)
{
    int count = 0;
    for (int g : grades) {
        if (g >= 90) {
            count++;
        }
    }
    return count;
}

int countB(const vector<int> &grades)
{
    int count = 0;
    for (int g : grades) {
        if (g >= 80 && g < 90) {
            count++;
        }
    }
    return count;
}

int countC(const vector<int> &grades)
{
    int count = 0;
    for (int g : grades) {
        if (g >= 65 && g < 80) {
            count++;
        }
    }
    return count;
}

int countD(const vector<int> &grades)
{
    int count = 0;
    for (int g : grades) {
        if (g >= 50 && g < 65) {
            count++;
        }
    }
    return count;
}

int countF(const vector<int> &grades)
{
    int count = 0;
    for (int g : grades) {
        if (g < 50) {
            count++;
        }
    }
    return count;
}
