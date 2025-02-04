// Алгоритм сортировки вставкой

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int el;
        std::cin >> el;
        a.push_back(el);
    }
    for (int j = 1; j < n; j++) {
        int key = a[j];
        int i = j - 1;
        while (i >= 0 && a[i] > key) {
            a[i+1] = a[i];
            i = i - 1;
        }
        a[i+1] = key;
    }

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}
