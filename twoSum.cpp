// Given an array of integers nums and an integer target,
//return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution,
//and you may not use the same element twice. You can return the answer in any order.

#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    for (int i = 0; i < nums.size(); ++i) {
   	 for (int j = i + 1; j < nums.size(); ++j) {
   		 if (nums[i] + nums[j] == target) {
   			 res.emplace_back(i);
   			 res.emplace_back(j);
   			 break;
   		 }
   	 }
   	 if (res.size() == 2)
   		 break;
    }
    return res;
} 