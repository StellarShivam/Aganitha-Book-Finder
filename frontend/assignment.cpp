// Name - Shivam Anand

// Code in C++

#include <bits/stdc++.h>
using namespace std;

void reverseString(string &input)
{
    int start = 0, end = input.size() - 1;

    while (start < end)
    {
        swap(input[start], input[end]);
        start++;
        end--;
    }
}
// Loop iterates through half the string to perform swaps. i.e. N/2
// Time complexity: O(N)
// Space complexity: O(1) It takes constat space as no extra space is used in the code

int main()
{
    string str = "Namekart Assignment";
    cout << "Original String -> " << str << endl;
    reverseString(str);
    cout << "Reversed String ->" << str << endl;
    return 0;
}
