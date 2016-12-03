#include <bits/stdc++.h>
#define size 100000
using namespace std;
int main()
{
    time_t start_t,end_t;
    float tim;
    int arr[size];
    start_t=clock();
    for(int i=0;i<size;i++)
        for(int j=i+1;j<size;j++)
    {
        if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
    }
    end_t=clock();
    tim=difftime(end_t,start_t)/CLOCKS_PER_SEC;
    cout<<"Time Complexity of Bubble Sort "<<tim;
}
