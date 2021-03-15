#include<iostream>
#include<string>
#include<vector>
#include "add.h"
#include <stdio.h> 
#include <math.h>
#include <regex>

//checks if it is a palindrome?
  bool isPalindrome(int x) {
        std::string myStr = std::to_string(x);
        for(int i=0;i<myStr.length();i++){
          if(myStr.at(i) != myStr.at(myStr.length()-(1+1*i) )){
            return false;
          }
        }
        return true;
    }
//this function finds the hypoteneuse
int triangleSide(int side1, int side2) {
	int side3 = (side1*side1) + (side2*side2);
	return sqrt(side3);
};

//this function finds the corresponding number in this
//sequence: 1, 3, 6, 10, 15, 21... etc.
int triangle(int n) {
	int incrementor = 0;
	for(int i=0; i<=n;i++){
		incrementor+=i;
	};
  return incrementor;
};

//this function removes all odd numbers
std::vector<int> noOdds(std::vector<int> arr) {
  std::vector<int> newArr;
	for(int i=0;i<arr.size();i++){
		if(arr[i]%2==0){
      newArr.push_back(arr[i]);
      std::cout<<arr[i];
    };
	};
  return newArr;
};

//this function accepts two arrays. checks if the next element

//of array 2 is equal to the previous element of array 1.
bool simonSays(std::vector<int> arr1, std::vector<int> arr2) {
	for(int i=0; i<arr1.size()-1;i++){
		if(arr1[i]!=arr2[i+1]){
			return false;
		};
	};
	return true;
};
//recursively reverses a string
std::string reverse(std::string str) {
  std::cout<<str<<" ";
	if(str.length()==0){
    return "";	
  };
		
	return reverse(str.substr(1)) + str[0];
}
//recursively sums numbers in an array;
int sum(std::vector<int> arr) {
	if(arr.size()==0){
		return 0;
	}
  int lastNum = arr.back();
  arr.pop_back();
	return lastNum + sum(arr);
}

//This function accepts two arguments: 1. A string with
//"censored" vowels, and 2. vowels to uncensor.
std::string uncensor(std::string str, std::string vowels) {
	int num_censored {0};
  std::string new_string {""};
	for(int i=0;i<str.length();i++){
    if(str.at(i)=='*'){
      new_string+=vowels[num_censored];
      num_censored++;
    }else{
      new_string+=str.at(i);
    };
  };
  return new_string;
};

//loop based solution to check if a string is a palindrome
bool isPalindromeLoop(std::string str) {
	for(int i=0; i<str.length()/2;i++){
		if(str[i]!=str[str.length()-1-i]){
			return false;
		}
	};
	return true;
}
//recursive solution to check if a string is a palindrome
bool isPalindrome(std::string str) {
	if(str.length()==0){
		return true;
	}
	if(str.at(0) == str.at(str.length() - 1)){
		return isPalindrome(str.substr(1, str.length() - 2));
	}
	return false;
}

//returns the fibbonaci number from the given index
int fibonacci(int num) {
	int first{0};
	int second{1};
	int sum {1};
	
	//first, the two values are added.
	//the first becomes the second, the second becomes the sum.
	//this occurs n times, with n being the function argument.
	
	for(int i=0;i<num;i++){
		sum = first + second;
		first = second;
		second = sum;
	};
	return sum;
}

//Checks if an array can be sorted into consecutive, non-repeating numbers
bool cons(std::vector<int> arr) {
  if(arr.size()==0) return false;
	int i = 1;
	while( i < arr.size()){
		int j = i;
			while( j > 0 and arr[j-1] > arr[j]){
				int swap = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = swap;
					j--;
			}
			i++;
	};
  for(int i=1;i<arr.size();i++){
    if(arr.at(i)==arr.at(i-1)||arr.at(i)!=arr.at(i-1)+1){
      return false;
    }
  }
	return true;
};

//checks if a string is a valid hex code
bool isValidHexCode(std::string str) {
	auto const myRegex = std::regex("(#)[a-zA-z0-9]{6}");
	return std::regex_search(str, myRegex);
};

//FROM LEETCODE: twoSum. Accept an array of numbers, and return the indices of the numbers which add up to the target.
 std::vector<int> twoSum(std::vector<int>& nums, int target) {
      int ind1;
      int ind2;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    if(nums[i]+nums[j]==target){
                        ind1 = i;
                        ind2 = j;
                    }
                }
            }
        }
        return std::vector<int>{ind1,ind2};
    };



int main() {
    std::vector<int> arr{1,2,3};
    std::vector<int> twoSumArr = twoSum(arr,int {4});
    std::cout<<twoSumArr[0]<<","<<twoSumArr[1];
   return 0;
}

//1st step: make a regex
    // auto const regex2 = std::regex("[A-Z]");

    //2nd step: make a string:
    // std::string myString{"hello!"};

    //3rd step: compare the two. 
    // std::cout<<std::regex_search(myString,regex2)<<std::endl;