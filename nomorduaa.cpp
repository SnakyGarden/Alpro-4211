#include <iostream>
#include <vector>

void bubble_sort_desc(std::vector<int>& A) {
    int n = A.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] < A[j + 1]) {
                std::swap(A[j], A[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            // Jika tidak ada lagi pertukaran dilakukan, maka deret sudah terurut
            break;
        }
    }
}

int main() {
    std::vector<int> A = {5, 4, 3, 2, 2, 1};

    bubble_sort_desc(A);

    std::cout << "Deret setelah diurutkan secara descending: ";
    for (int i = 0; i < A.size(); i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

