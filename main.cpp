#include<iostream>
#include<string>
#include<vector>
#include "add.h"
#include <stdio.h> 
#include <math.h>

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

int main() {
   std::cout<<fibonacci(1000);
   return 0;
}