#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,5,6,3,4};
    int largest=arr[0];
    for(int i=0; i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout << "Largest element: " << largest << endl;
    return 0;
}