#include <iostream>
using namespace std;

template <typename T>

class array
{
private:
    int size;
    T *arr;

public:
    array(int s)
    {
        size = s;
        arr = new T[size];
    }
    array(T *a, int s)
    {
        size = s;
        arr = a;
    }
    void initarr()
    { // to take the elements of the array
        cout << "Enter the " << size << " elements of the array: ";
        for (int i = 0; i < size; i++)
        {
            cin >> *(arr + i);
        }
    }
    void display()
    { // to display the elements of the array
        cout << "The elements are:";
        for (int i = 0; i < size; i++)
        {
            cout << *(arr + i) << " ";
        }
        cout << endl;
    }
    int lenght() { return size; } // to return the lenght of the array

    T min()
    { // to find the minimum element in the array
        int min = INT16_MAX;
        for (int i = 0; i < size; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
        return min;
    }

    T min_index()
    { // to find the minimum element's index
        int min = INT16_MAX, mini = 0;
        for (int i = 0; i < size; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
                mini = i;
            }
        }
        return mini;
    }

    T max()
    { // to find the maximum element
        int max = INT16_MIN;
        for (int i = 0; i < size; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
        return max;
    }

    T max_index()
    { // to find the maximum element's index
        int max = INT16_MIN, maxi = 0;
        for (int i = 0; i < size; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                maxi = i;
            }
        }
        return maxi;
    }
    // Reverse of array in place
    void reverse()
    {
        for (int start = 0, end = size - 1; start < end; start++, end--)
        {
            swap(arr[start], arr[end]);
        }
    }

    // Diplay of unique values
    void unique_vals()
    {

        cout << "The unique values of the array are: ";
        for (int i = 0; i < size; i++)
        {
            bool isunique = true;
            for (int j = 0; j < size; j++)
            {
                if (i != j && arr[i] == arr[j])
                {
                    isunique = false;
                    break;
                }
            }
            if (isunique)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    // Intersection(ignore duplicate values)

    friend void intersection(const array &a,const array &b){
        cout<<"The intersection of the arrays are: ";
        for(int i=0;i<a.size;i++){
            for(int j=0;j<b.size;j++){
                if(a.arr[i]==b.arr[j]){
                    cout<<a.arr[i]<<" ";
                }
            }
        }
        cout<<endl;
    }

    // Searching Algos

    // Linear search
    int linear_search(T e)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == e)
            {
                return i;
            }
        }
        return -1;
    }

    ~array()
    {
        delete arr;
    }
};

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 2, 4, 6, 8};
    int n1 = *(&arr1 + 1) - arr1;
    int arr2[] = {1,3,5,7,9,20,10};
    int n2 = *(&arr2 + 1) - arr2;
    array<int> a(arr1, n1);
    array<int> b(arr2, n2);
    intersection(a,b);

    return 0;
}