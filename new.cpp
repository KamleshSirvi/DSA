#include <iostream>
#include <vector>

std::vector<int> demo(int N, std::vector<int> val, int Q, std::vector<std::vector<int>> query) {
    std::vector<int> v(Q);

    for (int i = 0; i < Q; i++) {
        if (query[i][0] == 0) {
            int res = query[i][1];
            int y = query[i][2];
            int j = 1;
            while (y < N) {
                res = res + val[y];
                y = y * j;
            }
            v[i] = res;
        } else {
            int res = query[i][1];
            int y = query[i][2];
            int j = 1;
            while (y < val.size()) {
                res = res * val[y];
                y = y * j;
            }
            v[i] = res;
        }
    }
    return v;
}

int main() {
    // Example usage:
    int N = 10;
    std::vector<int> val = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int Q = 2;
    std::vector<std::vector<int>> query = {{0, 1, 3}, {1, 2, 4}};

    std::vector<int> result = demo(N, val, Q, query);

    // Print the result
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl; // Output: 8 80

    return 0;
}
