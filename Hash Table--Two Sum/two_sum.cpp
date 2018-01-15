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

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> namesp;
        vector<int> arr;
        for (int index = 0; index < arr.size() - 1; index++) {
            if (namesp.find(nums[index]) != namesp.end()){
                arr.insert(arr.end(), namesp[nums[index]]);
                arr.insert(arr.end(), index);
                return arr;
            }else{
                namesp[target - nums[index]] = index;
            }
        }
        arr.clear();
        return arr;
    }
};
