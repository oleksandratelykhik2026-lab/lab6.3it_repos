
#include <iostream>
#include <iomanip>
using namespace std;

// Звичайна функція
int CountNegative(const int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            count++;
    }

    return count;
}

// Шаблон функції
template <typename T>
int CountNegative(const T a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            count++;
    }

    return count;
}

int main()
{
    const int n = 6;
    int a[n] = { -5, 8, -2, 0, 7, -1 };

    cout << "Array:" << endl;

    for (int i = 0; i < n; i++)
        cout << setw(5) << a[i];

    cout << endl;

    int result1 = CountNegative(a, n);
    cout << "Ordinary function: " << result1 << endl;

    int result2 = CountNegative<int>(a, n);
    cout << "Template function: " << result2 << endl;

    return 0;
}
