#include <bits/stdc++.h>
using namespace std;
/*
  Write a function that takes in a non-empty array of distinct integers and an
  integer representing a target sum. If any two numbers in the input array sum
  up to the target sum, the function should return them in an array, in any
  order. If no two numbers sum up to the target sum, the function should return
  an empty array.
  Note that the target sum has to be obtained by summing two different integers
  in the array; you can't add a single integer to itself in order to obtain the
  target sum.
  You can assume that there will be at most one pair of numbers summing up to
  the target sum.

  Sample Input:
  array = [3, 5, -4, 8, 11, 1, -1, 6]
  targetSum = 10

  Sample Output:
  [-1, 11] // In any order
*/

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  map<int, int> s;
  vector<int> p;

  for (int i=0; i<array.size(); i++)
  {
    if(s.find(array[i]) == s.end())
    {
      s[targetSum-array[i]] = array[i]; 
    }else{
      p.push_back(array[i]);
      p.push_back(targetSum-array[i]);
    }
  }
  return p;
}

int main(){
  // Write your code here
  return 0;
}
