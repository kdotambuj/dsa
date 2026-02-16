#include <iostream>
#include <vector>
#include <array>


using namespace std;

// Global static array, no garbage value, set all elements to 0
static int d[5];

void print(int nums[], int n){
    
    // Better approach
    int N = sizeof(nums)/sizeof(nums[0]);

    for (int i =0; i<n; i++){
        cout<<nums[i]<<endl;
    }
}

int main(){

    // Normal Array - Data structure to store multiple elements of same data type, Fixed size, Stored in contagious memory
    // Both initialization are valid
    // Memory is stored in stack
    int a[] = {1,2,3};
    int b[3] = {1,2,3};
    

    // This will contain garbages value
    int c[5];

    print(d,5);

    return 0;
}