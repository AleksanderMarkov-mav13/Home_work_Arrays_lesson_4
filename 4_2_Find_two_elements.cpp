#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This programme gives you the numbers of two array elements, sum of those has specified result\n";
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, 5, 5};
    int result = 10;
    int index_one = 0;
    int index_two = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == result)
            {
                index_one = i;
                index_two = j;
                break;
            }
        }
        if (vec[index_one] + vec[index_two] == result)
        {
           break;
        }
    }
    cout << "Our result is " << result << "\n";
    cout << "Summ of array element N " << index_one << " ( " << vec[index_one] << " ) and ";
    cout << " N " << index_two << " ( " << vec[index_one] << " ) equals " << vec[index_one] + vec[index_two];
}