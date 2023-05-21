#include <iostream>
#include <vector>

void cetak_angka_genap_terkecil(const std::vector<int>& A) {
    int smallest_even = -1;
    int smallest_even_index = -1;

    for (int i = 0; i < A.size(); i++) {
        if (A[i] % 2 == 0) {  // Cek apakah bilangan genap
            if (smallest_even == -1 || A[i] < smallest_even) {
                smallest_even = A[i];
                smallest_even_index = i;
            }
        }
    }

    if (smallest_even != -1) {
        std::cout << "Angka genap terkecil: " << smallest_even << std::endl;
        std::cout << "Index: " << smallest_even_index << std::endl;
    } else {
        std::cout << "Tidak ada angka genap dalam deret." << std::endl;
    }
}

int main() {
    std::vector<int> A = {6, 7, 4, 3, 2};

    cetak_angka_genap_terkecil(A);

    return 0;
}
