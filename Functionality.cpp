#include <vector>

int main()
{
    std::vector<int> v {10, 20, 30, 40, 50};

    std::vector<int> ans;
    for(int val : v)
    {
        ans.push_back(val*3);
    }

    return 0;
}