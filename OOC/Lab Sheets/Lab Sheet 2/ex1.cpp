#include <iostream>
using namespace std;

int searchKey(int key, const int array[10]);

int findMax(const int array[10]);

int main() {
    int i, index;
    int numbers[10];

    for (i = 0; i <= 10; ++i) {
        cout << "Enter numbers[" << i << "] = ";
        cin >> numbers[i];
    }

    index = searchKey(7, numbers);
    if (0 <= index){
        cout << "Number index : " << index;
    } else{
        cout << "Value not found";
    }

    cout << "Max : " << findMax(numbers);

    return 0;
}

int searchKey(int key, const int array[10]){
    int i, index = -1;

    for (i = 0;i <= 10; i++){
        if (key == array[i]){
            index = i;
        }
    }

    return index;
}

int findMax(const int array[10]){
    int max, i;

    max = array[0];
    for (i = 1;i <= 10; i++){
        if (max < array[i]){
            max = i;
        }
    }

    return max;
}
