#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This programme gives you the numbers of elements have maximal summ\n";
    vector<int> vec = {-13, 7, 2, -12, 6, 5, 9, 1};
    int max_sum = 0;
    int sum = 0;
    int start_index = 0;
    int finish_index = 0;
    for (int i = 0; i < vec.size (); i ++) {
        sum = vec[i];
        for (int j = i; j < vec.size(); j++)
        {
            // cout << "Sum from " << i << " ( " << vec[i] << " )";
            sum += vec[j];
            if (i == j) {
                sum = sum / 2;
            }
            if (sum > max_sum) {
                max_sum = sum;
                start_index = i;
                finish_index = j;
            }
            // cout << "to " << j << " ( " << vec[j] << " ) are " << sum << endl;
        }
    }
    cout << "max sum is " << max_sum << "\n";
    cout << "This is sum elements from index " << start_index << " to " << finish_index << "\n";
}