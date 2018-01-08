## Name: Two Sum
## Tags: Hash Table
**Given an array of integers, return indices of the two numbers such that they add up to a specific target.  
You may assume that each input would have exactly one solution, and you may not use the same element twice.**
### Example:
>Given nums = [2, 7, 11, 15], target = 9,
>
>Because nums[0] + nums[1] = 2 + 7 = 9,  
return [0, 1].

## Answer:
## Swift 4.X 
```swift
/**
- 1. Use number as the key in hash table, and hash table is the dictionary struct in Swift.
- 2. The value in return dictionary is made up of original input array.
- 3. If one number in return array is n, another number is target - n.
 */
 
class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        
        var map = [Int: Int]()
var arr = [Int]()
  for index in 0 ..< nums.count {
    if let newK = map[nums[index]] {
        arr.append(contentsOf:[newK,index]);return arr
    } else {
      map[target - nums[index]] = index
    }
  }
  return []
    }
}
// This cost O(n) time
```
