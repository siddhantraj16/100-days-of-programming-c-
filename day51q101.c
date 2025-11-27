//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/#include <stdio.h>

// Function to find first occurrence of target
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1; // continue searching on the left
        } else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

// Function to find last occurrence of target
int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1; // continue searching on the right
        } else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    
    printf("Enter elements (sorted): ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);
    
    printf("%d,%d\n", first, last);
    return 0;
}