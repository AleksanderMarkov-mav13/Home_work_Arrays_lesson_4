#include <iostream>
#include <vector>
using namespace std;
void print_array (vector <int> vec) {
    cout << "Our array: " ;
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << ' ';
    }
    cout << endl;
}
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This programme gives you the fifth element of array you gave\n";
    vector<int> vec (0);
    int elem;
    while (true) {
        cout << "Input the element to add into array\n";
        cin >> elem;
        if (cin.fail())
        {
            cerr << "Ошибка: введено не число!" << std::endl;
            return 1;
        }
        if (elem == -2) break;
        if (elem != -1) {
            if (vec.size () == 0) {
            vec.push_back (elem);
            }
            else {
                int n = vec.back ();
                vec.push_back (n);
                for (int i = vec.size()-1; i > 0; i--) {
                    if (elem >= vec[i])
                    {
                        vec[i] = elem;
                        break;
                    }
                    else {
                        if (i == 1) {
                            vec[i - 1] = elem;
                        }
                        else {
                        vec[i - 1] = vec[i - 2];
                        }
                    }
                }
            }
        }
        else if (elem == -1 && vec.size() < 4)
        {
            cout << "I can't display the fifth element of our array as its size is less than five.\n";
        }
        else {
            print_array(vec);
            cout << "The fifth element of our array is " << vec[4] << "\n";
        }
    }
}