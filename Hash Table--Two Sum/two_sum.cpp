//
//  two_sum.cpp
//  Hash Table--Two Sum
//
//  Created by Bobby Negoat on 1/15/18.
//  Copyright © 2018 Mac. All rights reserved.
//

#include "two_sum.hpp"
#include <map>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

static const auto _ = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        using SizeType = remove_reference_t<decltype(nums)>::size_type;
using ValueToIndexMapType = unordered_map<int, SizeType>;
        ValueToIndexMapType map;
        vector<int> indices(2);
for (SizeType index = 0; index < nums.size(); ++index)
{
const auto foundIterator = map.find(target - nums[index]);
if (foundIterator != end(map) && foundIterator->second != index)
    return vector<int>{ static_cast<int>(index), static_cast<int>(foundIterator->second) };
    else map.emplace(nums[index], index);
        }
        throw std::runtime_error("Solution not found");
    }
};
