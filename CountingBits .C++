#include <iostream>
#include <vector>

std::vector<int> countBits(int n) {
    std::vector<int> ans(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        ans[i] = ans[i >> 1] + (i & 1);
    }

    return ans;
}

int main() {
    int n;
    std::cin>>n;
    std::vector<int> result = countBits(n);

    
    for (int i = 0; i <= n; i++) {
        std::cout << result[i];
        if (i < n) {
            std::cout << ", ";
        }
    }
    

    return 0;
}
