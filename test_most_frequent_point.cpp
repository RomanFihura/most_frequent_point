#include "most_frequent_point.h"

#include <gtest/gtest.h>

TEST(TestApp, most_frequent_correct)
{
    std::vector<std::vector<uint32_t>> test{{1, 3}, {2, 4}, {3, 10}};
    EXPECT_EQ(mostFrequent(test), 3);
}
TEST(TestApp, most_frequent_correct2)
{
    std::vector<std::vector<uint32_t>> test2;
    for (int i = 0; i < 6; i++)
    {
        test2.emplace_back();
        for (int j = 0; j < 2; j++)
        {
            test2.back().push_back(random_coordinate(100));
        }
        if (test2[i][0] > test2[i][1])
        {
            std::swap(test2[i][0],test2[i][1]);
        }
        ASSERT_TRUE(mostFrequent(test2));
    }
}

