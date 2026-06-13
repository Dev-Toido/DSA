#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int linear_search(vector<int> &v, int n)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            return i;
        }
    }
    return -1;
}

void reverse(vector<int> &v)
{
    for (int start = 0, end = v.size() - 1; start < end; start++, end--)
    {
        swap(v[start], v[end]);
    }
}

void display(vector<int> &v)
{
    cout << "The elements of the vector are: ";
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}
// Maximum Sub-array Sum Algos
int max_sub_arr_by_BF(vector<int> &v)
{ // This is the brute force approach to have the max sub-array
    int ms = INT16_MIN;
    for (int st = 0; st < v.size(); st++)
    {
        int cs = 0;
        for (int ed = st; ed < v.size(); ed++)
        {
            cs += v[ed];
            ms = max(ms, cs);
        }
    }
    return ms;
}

int max_sub_arr_by_KA(vector<int> &v)
{ // This is Kadane's Algo to have the Max sub-array
    int ms = INT16_MIN, cs = 0;
    for (int st = 0; st < v.size(); st++)
    {
        cs += v[st];
        ms = max(ms, cs);
        if (cs < 0)
            cs = 0;
    }
    return ms;
}
// Pair-Sum finding algos (Only sorted arrays)
vector<int> pair_sumBF(vector<int> &v, int target)
{ // By the brute force approach
    vector<int> ans;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}
vector<int> pair_sumTP(vector<int> &v, int target)
{ // By the optimized (two pointer) approach
    vector<int> ans;
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        int ps = v[i] + v[j];
        if (ps > target)
            j--;
        else if (ps < target)
            i++;
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

// Majority element of array (freq > n/2)
int majority_eleBF(vector<int> &v)
{ // By Brute Force
    int freq = 0;
    for (int i : v)
    {
        for (int j : v)
        {
            if (i == j)
            {
                freq++;
            }
            if (freq > int(v.size() / 2))
            {
                return i;
            }
        }
    }
    return -1;
}
int majority_eleS(vector<int> &v)
{ // By Optimized (sorting) method
    int freq = 0,ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]!=v[i-1]){freq=0;ans=v[i];}
        else freq++;
        if(freq>int(v.size()/2)){return ans;}
    }
    return -1;
}

int majority_eleMV(vector<int> &v)
{ // By Moore's Voting Algorithm
    int freq = 0,ans=0;
    for(int i=0;i<v.size();i++){
        if(freq==0) ans=v[i];
        if(ans==v[i]) freq++;
        else freq--;
    }
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 1, 5, 1, 1, 2, 1, 1};
    cout << majority_eleMV(v) << "" << endl;

    return 0;
}