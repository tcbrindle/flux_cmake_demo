
#include <flux.hpp>

#include <array>

int main()
{
    constexpr auto nums = flux::from(std::array{1, 2, 3, 4, 5})
                            .filter(flux::pred::even)
                            .map([](int i) { return i * i; })
                            .sum();

    static_assert(nums == 2 * 2 + 4 * 4);
}
