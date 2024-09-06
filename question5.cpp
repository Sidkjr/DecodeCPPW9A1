#include <iostream>
using namespace std;
int main() {
    int arr[6] = {2,1,4,3,6,5};
    int n = 6;
    int swap_count = 0;
    for(int i = 0; i < n-1; i++) {
        bool swapped = false;
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap_count++;
                swapped = true;
            }
        }
        if(swapped == false) {
            break;
        }
    }
    if((swap_count*2 == n && n % 2 == 0) || (swap_count + 1 == n && n % 2 != 0)) {
        cout << "One Swap Away\n";
    }
    else {
        cout << "Not One Swap Away\n";
    }
}