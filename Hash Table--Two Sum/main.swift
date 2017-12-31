//
//  main.swift
//  Hash Table--Two Sum
//
//  Created by Bobby Negoat on 12/31/17.
//  Copyright © 2017 Mac. All rights reserved.
//

import Foundation

class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        
        var map = [Int: Int]()
        var arr = [Int]()
        for i in 0 ..< nums.count {
            if let newK = map[nums[i]] {
                arr.append(newK); arr.append(i)
                return arr
            } else {
                map[target - nums[i]] =  i
            }
        }
        return []
        
    }
}

