#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    if (nums.size() == 0)
        return 0;

    int slow = 0;
    for (int fast = 1; fast < nums.size(); fast++)
    {
        if (nums[fast] != nums[slow])
        {
            slow++;
            nums[slow] = nums[fast];
        }
    }

    return 0;
}
//* TWO-POINTER para filtrar array
//* Problemas envolvendo arrays ordenados ou que podem ser ordenados.
//* Buscar pares ou subarrays que satisfaçam uma condição (ex: soma, diferença).
//* Resolver problemas de janelas deslizantes.