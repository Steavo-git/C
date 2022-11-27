#include<stdio.h>

int binSearch(int arr[], int st, int end, int key)
{
    while (st <= end) {
        int mid = st + (end - st) / 2;
 
        if (arr[mid] == key)    // if key is present at middle of the array (best case)
            return mid;
 
        if (arr[mid] < key)   // key is greater than middle element   (ignoring the left side of the array)
            st = mid + 1;

        else    // key is smaller than middle element  (ignoring the right side of the array)
            end = mid - 1;
    }
 
    return -1;  // if element not found
}
 
int main()
{
    int arr[] = {10,20,30,40,50},key;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    int result = binSearch(arr, 0, n - 1, key);
    //using turnary operator
    (result == -1) ? printf("Element is not present in array"): printf("Element is present at index %d",result);

    return 0;
}

//Code by Steavo Babu