#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[6] = {5,4,6,3,2,1};
    int n = 6;
    for(int i = 0; i < n-1; i++) {
        bool swapped = false;
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(swapped == false) {
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}