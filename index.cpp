#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,5,4,3};
    int target=5;
    int index=-1;
    for(int i=0; i<5; i++){
        if(arr[i]==target){
            index=i;
            break;
        }
    }
    cout << "Index of target element: " << index << endl;
    return 0;
}