#include "most_frequent_point.h"
std::random_device rd;
std::mt19937 gen1(rd());

uint32_t mostFrequent(std::vector<std::vector<uint32_t>> &v)
{
    if (!v.size())
    {
        throw std::invalid_argument{"Vector is empty, Just warn you"};
    }
    std::unordered_map<uint32_t, uint32_t> freq_count;
    for (uint32_t i = 0; i < v.size(); i++)
    {
        uint32_t x = v[i][0];
        while (v[i][0] <= x && x <= v[i][1])
        {
            freq_count[x]++;
            x++;
        }
    }
    auto most_freq_int =
        std::max_element(freq_count.begin(), freq_count.end(),
                         [](const auto &x, const auto &y) { return x.second < y.second; });

    return most_freq_int->first;
}
uint32_t random_coordinate(uint32_t max) // max - max random int
{
    return (gen1() % max);
}