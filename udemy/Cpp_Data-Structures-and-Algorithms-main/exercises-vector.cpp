#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void removeEl(vector<int> &nums, int val){

    auto j = nums.begin();
    while( j != nums.end()){
        if(*j == val){
            nums.erase(j);
        }else{
            j++;
        }
    }
}

void printVector(vector<int> nums){
    cout<<"\n***\n";
    for(int number : nums){
        cout<<number<<' ';
    }
    cout<<"\n***\n";
}
vector<int> findMaxMin(vector<int>& myList) {
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function finds the maximum and minimum       |
	//   |   values in a given list of integers.               |
	//   | - It uses a single loop to go through the list.     |
	//   |                                                     |
	//   | Return type: vector<int>                            |
	//   | - Returns a vector containing maximum and minimum.  |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'maximum' and 'minimum' keep track of the         |
	//   |   highest and lowest values found.                  |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
    int maximum, minimum;
    maximum = myList[0];
    minimum = myList[0];
    auto i = myList.begin();
    while(i != myList.end()){
        if(*i > maximum){
            maximum = *i;
        }
        if(*i < minimum){
            minimum = *i;
        }
        i++;
    }
    vector<int> answer{minimum, maximum};
    return answer;
}
string findLongestString(vector<string>& stringList) {
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function finds the longest string in         |
	//   |   a given list of strings.                          |
	//   | - It uses a single loop to check the length         |
	//   |   of each string.                                   |
	//   |                                                     |
	//   | Return type: string                                 |
	//   | - Returns the longest string found in the list.     |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'longestString' keeps track of the longest        |
	//   |   string found so far.                              |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
    if(stringList.empty())return "";
    string longest = stringList[0];
    auto i = stringList.begin();
    while( i != stringList.end()){
        if((*i).size() > longest.size()) longest = *i;
        i++;
    }
    return longest;
}
int removeDuplicates(vector<int>& nums) {
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function removes duplicate integers          |
	//   |   from a sorted array in-place.                     |
	//   | - It uses two pointers to achieve this.             |
	//   |                                                     |
	//   | Return type: int                                    |
	//   | - Returns the length of the new array.              |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'writePointer' is used for storing unique values. |
	//   | - 'readPointer' is used for reading array values.   |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+

    auto j = nums.begin();
	while(j != nums.end()){
	    if(*(j-1) == *j){
	        nums.erase(j);
	    }else{
	        j++;
	    }
	}
	int length = nums.size();
	return length;
}

int maxProfit(vector<int>& prices) {
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function calculates the maximum profit       |
	//   |   from buying and selling a stock.                  |
	//   | - It iterates through the 'prices' array once.      |
	//   |                                                     |
	//   | Return type: int                                    |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'minPrice' keeps track of the lowest price.       |
	//   | - 'maxProfit' stores the maximum profit found.      |
	//   | - Use 'min' and 'max' functions to update values.   |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
    if(prices.empty())return 0;
	 int profit = 0;
	 int minP=prices[0];
	 auto j = prices.begin();
	 while(j != prices.end()){
	     if(minP > *j)minP = *j;
	     if((*j - minP)> profit) profit = *j - minP;
	     j++;
	 }
	 return profit;
}

void rotate(vector<int>& nums, int k) {
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function rotates the array 'nums' to the     |
	//   |   right by 'k' steps.                               |
	//   | - The method used involves reversing parts of the   |
	//   |   array.                                            |
	//   |                                                     |
	//   | Return type: void                                   |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'k' is first made smaller by taking modulo size.  |
	//   | - Three reversals are done to achieve the rotation. |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+
    if(nums.empty())return;
    if (k > nums.size()) k = k%nums.size();
    if(k==0)return;
    auto j = nums.rbegin();
    vector<int> temp;
    while( j != nums.rbegin()+k){
        temp.insert(temp.begin(), *j);
        j++;
    }
    nums.insert(nums.begin(), temp.begin(), temp.end());
    nums.erase(nums.end()-k, nums.end());
}
int maxSubarray(vector<int>& nums) {
	//   +=====================================================+
	//   |                 WRITE YOUR CODE HERE                |
	//   | Description:                                        |
	//   | - This function finds the sum of the contiguous     |
	//   |   subarray with the largest sum from the given      |
	//   |   array 'nums'.                                     |
	//   | - It uses Kadane's algorithm for this task.         |
	//   |                                                     |
	//   | Return type: int                                    |
	//   |                                                     |
	//   | Tips:                                               |
	//   | - 'maxSum' stores the maximum subarray sum.         |
	//   | - 'currentSum' keeps track of the sum of the        |
	//   |   subarray ending at the current index.             |
	//   | - Use 'max' to update 'maxSum' and 'currentSum'.    |
	//   | - Check output from Test.cpp in "User logs".        |
	//   +=====================================================+

    // int maxSum = nums[0];
    // int maxSumCurrent;
    // auto j = nums.begin() + 1;
    // while(j != nums.end()){
    //     //find current max sum
    //     maxSumCurrent = max(*j, *j+*(j-1));
    //     maxSum = max(maxSum, maxSumCurrent);      
    //     j++;
    // }
    // return maxSum;
    if(nums.empty())return 0;
    if(nums.size()==1)return nums[0];
    int max_so_far = nums[0];
    int max_ending_here = nums[0];
    auto j = nums.begin()+1;
    while(j != nums.end()){
        //update max_ending_here
        max_ending_here = max(*j, *j + max_ending_here);

        //update max_so_far
        max_so_far = max(max_ending_here, max_so_far);
        j++;
    }
    return max_so_far;


}



int main(){

    vector<int> myNums = {5,4,-1,7,8};
    cout<<maxSubarray(myNums);

    // vector<int> myNums = {1, 2, 3, 4, 5, 6, 7};
    // printVector(myNums);
    // rotate(myNums, 4);
    // printVector(myNums);
    // vector <int> myVector = {1, 12, 7, 8, 12, 9, 0};
    // int target = 12;

    // printVector(myVector);
    // cout<<myVector.size()<<'\n';
    
    // removeEl(myVector,target);
    // printVector(myVector);
    // cout<<myVector.size()<<'\n';

    // vector<string> myStrings = {"a", "aa", "abcdef", "ff", "g"};
    // cout<<findLongestString(myStrings);
    

    return 0;
}