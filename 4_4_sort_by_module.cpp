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
    for (int i = 0; i < vec.size(); ++i) {
        int min_index = i;
        for (int j = i + 1; j < vec.size(); ++j)
        {
            if (abs (vec[min_index]) > abs (vec [j])) {
                min_index = j;
            }
        }
        swap(vec[i], vec[min_index]);
    }
    print_array(vec);
}