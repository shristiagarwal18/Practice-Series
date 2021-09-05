#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int topics, days_left, hours_per_day, count = 0, sum = 0;
        cin >> topics >> days_left >> hours_per_day;
        int arr[topics];
        for (int i = 0; i < topics; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + topics);
        while (sum < topics)
        {
            if ((arr[sum] <= 1 * hours_per_day) && (arr[sum] <= days_left * hours_per_day))
            {
                days_left -= 1;
                count++;
            }
            if ((arr[sum] > 1 * hours_per_day) && (arr[sum] <= 2 * hours_per_day)&&(arr[sum] <= days_left * hours_per_day))
            {
                days_left -= 2;
                count++;
            }
            sum++;
        }
        cout << count << endl;
    }

}

