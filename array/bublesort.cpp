#include <iostream>
using namespace std;
int main(){
    int array[5];
    int n;
    
    cout <<"Enter elements";
    for (int i=0; i<5; i++){
        cin >> n;
        array[i]=n;
    }

    for (int i=0; i<5-1; i++){
        for (int j=0; j<4-i; j++){
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    cout << "Elements are: ";
    for (int i=0; i<5; i++){
        cout << array[i];
        cout << " ";
    }
    return 0;
}