#include <iostream>
#include <functional>

// some c++17 stuff

template <bool B, typename Arg, typename ...Fs>
void test(Arg &&arg, Fs && ...fs) {
    if constexpr (B)
        ((std::cout << " " << fs(std::forward<Arg>(arg))), ...);
    else
        std::cout << "B false";
    std::cout << "\n";
}

int main(int, char **) {
    using namespace std;
    test<true>(5, std::negate<int>{}, [](auto x) { return 2*x; });
    cout << "===\n";
    test<false>(2, std::negate<int>{});
    return 0;
}

