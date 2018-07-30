//
//  sum.cpp
//  LeetCodeTest
//
//  Created by mahaibo on 2018/7/30.
//  Copyright © 2018年 mahaibo. All rights reserved.
//

#include "sum.hpp"
#include <map>
using namespace std;
int[] LeetCode::twoSum(int[] nums, int target){
    map<int, int> numMap;
    for(int i=0; i<nums.length; i++){
        int complement = target - nums[i];
        if (numMap.find(nums[i])){
            return new int[]{numMap.at(complement), i};
        }
        numMap.insert(nums[i],i);
    }
    
    
}
