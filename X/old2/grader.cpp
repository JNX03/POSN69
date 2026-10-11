#include <iostream>
#include <vector>

#define NEED(expr) \
    if (!(expr)) { \
        std::cerr << "Missing input for call " << (t + 1) << "\n"; \
        return 2; \
    }

void rotateLeft(std::vector<int>& A, int k) {
    // เขียนโปรแกรมของคุณที่นี่
    std::vector<int> temp(A.size());
    for(int i=0;i<A.size();i++){
        temp[i]=A[(i+k)%A.size()];
    }
    for(int i=0;i<A.size();i++){
        A[i]=temp[i];
    }
    return;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int Q;
    if (!(std::cin >> Q) || Q <= 0) {
        std::cerr << "Invalid or missing Q\n";
        return 2;
    }
    for (int t = 0; t < Q; ++t) {
        int n, k;
        NEED(std::cin >> n >> k);
        std::vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            NEED(std::cin >> A[i]);
        }
        rotateLeft(A, k);
        for (int i = 0; i < n; ++i) {
            if (i > 0) {
                std::cout << " ";
            }
            std::cout << A[i];
        }
        std::cout << "\n";
    }
    return 0;
}
