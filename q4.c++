#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int specialSum(int* nums, int size) {
    int temp = INT_MIN;  // Initialize temp to the smallest possible integer value
    
    // Iterate over each index in the array
    for (int i = 0; i < size; i++) {
        int sum = 0;  // Initialize sum for this index
        
        // Calculate special sum starting from index i
        for (int k = i, y = 1; k + y <= size; k += y, y++) {
            // Add the next 'y' elements to the sum
            for (int l = 0; l < y; l++) {
                sum += nums[k + l];
            }
        }
        
        // Update temp if sum is greater than the current maximum sum (temp)
        if (temp < sum) {
            temp = sum;
        }
    }
    
    return temp;  // Return the maximum special sum
}

int main() {
    int size;
    cout << "\nEnter the number of elements: ";
    cin >> size;
    
    int nums[size];  // Declare an array of size 'size'
    
    cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];  // Input elements into the array
    }
    
    // Output the special sum
    cout << "Special Sum: " << specialSum(nums, size) << endl;

    return 0;
}