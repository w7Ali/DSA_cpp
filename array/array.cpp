#include <iostream>
using namespace std;

int main(){
    int stack[5];
    int temp, n;

    cout << "Enter elements";
    for (int i=0; i<5;i++){
        cin >> n;
        stack[i] = n;
    }
    
    cout << "Elements are: ";
    for (int i=0; i<5; i++){
        cout << stack[i];
    }
    return 0;
}