#include <iostream>
#include <map>

std::map<int, long long> memo;

long long fib(int n) {
    if (n < 2) return n;

    // Check if we have already computed fib(n)
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    // If not, compute it and store it in the map
    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main() {
    std::cout << fib(50) << std::endl;  // This will be much faster with memoization
    return 0;
}
