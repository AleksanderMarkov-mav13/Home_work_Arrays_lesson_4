#include <iostream>
#include <vector>
using namespace std;
void print_array(vector<int> vec)
{
    cout << "Our array: ";
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << ' ';
    }
    cout << endl;
}
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This programme ranges array by mudules of numbers\n";
    vector<int> vec = {3, 18, -100, -50, -5, 1, 10, 15, 4};
    // cout << abs(vec[0]);
    // int min_index = 0;
    for (int i = 0; i < vec.size(); ++i) {
        int min_index = i;
        for (int j = i + 1; j < vec.size(); ++j)
        {
            if (vec[min_index] > vec [j]) {
                min_index = j;
            }
        }
        swap(vec[i], vec[min_index]);
            // int temp = vec[i];
            // vec[i] = vec[min_index];
            // vec[min_index] = temp;
        print_array(vec);
    }
    // print_array(vec);
}