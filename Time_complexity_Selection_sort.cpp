#include <bits/stdc++.h>
#define size 10000
using namespace std;
int main()
{
    time_t start_t,end_t;
    float tim;
    int arr[size];
    start_t=clock();
    int miin;
    for(int i=0;i<size;i++) {
            miin=i;
        for(int j=i+1;j<size;j++)
    {
        if(arr[miin]>arr[j])
            miin=j;
    }
    swap(arr[i],arr[miin]);
    }
    end_t=clock();
    tim=difftime(end_t,start_t)/CLOCKS_PER_SEC;
    cout<<"Time Complexity of selction sort "<<tim;
}
