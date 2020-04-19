// CycleCollection.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > null");
    srand(2);
    int nums[12];
    
    cout << "Massive random numbers" << "\n";
    for (int& x : nums) {
        x = rand() % 10;
        cout << x << " ";
    }
    cout << endl;

    int length = 0;
    for (int& x : nums) {
        length++;
    }

    cout << "Dimension massive" << "\n";
    cout << "Check massive" << "\n";
    for (int k = 0; k < length; k++) {
        cout << nums[k] << " ";
    }

    cout << endl;
    system("pause > nul");
    return 0;
}

