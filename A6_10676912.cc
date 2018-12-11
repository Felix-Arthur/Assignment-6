#include <iostream>

using namespace std;
int binarysearch(int array[], int size, int searchvalue)
{
int low = 0;
int high = size - 1;

int mid;

while(low <= high)
{
mid =(low + high)/2;

if(searchvalue == array[mid])
{
    return mid;
}
else if(searchvalue > array[mid])
{
    low = mid + 1;
}
else
{
    high = mid - 1;
    }
}
    return -1;
}

int main()
{
    int a[]={23,12,10,9,17};
    int uservalue;

    cout<<"Enter an integer:"<<endl;
    cin>>uservalue;

    int result= binarysearch(a,5,uservalue);
    if(result >= 0)
        {
        cout<<"The number"<<a[result]<<" "<< "was found at the element with index" <<result<<endl;

    }
    else
        {
        cout<<"The number"<<uservalue<< " "<< "was not found" <<endl;

    }

}
