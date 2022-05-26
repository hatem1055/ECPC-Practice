#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'pairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

bool binarySearch(vector<int> arr , int number_TO_find)
{
    int left = 0 , right = arr.size() -1 ;

    while (left <= right)
    {
        int mid = left + (right - left) / 2 ;
        if  (arr[mid] == number_TO_find) return true;
        if  (arr[mid] < number_TO_find) left = mid+1;
        else right = mid - 1;
    }
    return false;



}


int pairs(int k, vector<int> arr) 
{
    sort(arr.begin(),arr.end());
    int counter=0;
    for (int i = arr.size() - 1; i >= 0; i--)
    {   
        int x = arr[i] - k;
        if (binarySearch(arr , x)== true) {
         counter ++;
        }
        
    }
    return counter;
}


