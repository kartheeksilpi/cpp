#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n;
cout<<"enter the no of elements = "<<endl;
cin>>n;
int arr[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

    int totalSum = 0;

    // Iterate over each subarray
    for (int i = 0; i < n; i++) {
        int subarraySum = 0;
        for (int j = i; j < n; j++) {
            // Add the current element to the subarray sum
            subarraySum += arr[j];

            // Print the subarray
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
                cout << endl;

            // Add the subarray sum to the total sum
            totalSum += subarraySum;
        }
    }

    cout << "Total sum of all subarrays: " << totalSum <<endl;

    return 0;
}
