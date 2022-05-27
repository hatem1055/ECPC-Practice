#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;




int cookies(int sweetness, vector<int> coockies)
{

    // using queue to avouid sortning the array and avoid Time Error Limit
    // this queue is with min-heap .
    priority_queue<int, vector<int>, greater<int> >que;


    for (int i = 0; i < coockies.size(); i++)
    {
        que.push(coockies[i]);
    }

    int counter = 0;

    while (true)
    {
        if (que.empty())
        {
            return -1;
        }

        if (que.top() >= sweetness) // smallest value
        {
            return counter;
        }

        if (que.top() < sweetness)
        {
            int first = que.top();
            que.pop();
            if (que.empty())
            {
                return -1;
            }
            int second = que.top();
            que.pop();

            que.push(first + (2 * second));
            if (que.empty())
            {
                return -1;
            }
            counter++;
        }
    }

}