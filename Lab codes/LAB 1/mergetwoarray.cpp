#include<iostream>
using namespace std;
int main()
{

    int i=0,j=0,k=0;
    int arr1[4]={20,30,40,50};
    int arr2[3]={60,70,80};
    int arr3[7];
    while(i<4&&j<3)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;k++;
        }
        else
        {

        arr3[k]=arr2[j];
        j++;k++;
        }
    }
while(i<4)
{
    arr3[k]=arr1[i];
    i++;k++;
}
while(j<3)
{
    arr3[k]=arr2[j];
    j++;k++;
}
cout<<"Merged Array:"<<endl;
for(int k=0;k<7;k++)
{
    cout<<arr3[k]<<" ";
}
}
