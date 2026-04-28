#include<iostream>
using namespace std;
void MergeArray(int Arr[],int left,int mid,int right)
{
    int LeftS=mid-left+1;
    int RightS=right-mid;
    int LeftTm[LeftS],RightTm[RightS];
    for(int i=0;i<LeftS;i++)
    {
        LeftTm[i]=Arr[left+i];
    }
    for(int j=0;j<RightS;j++)
    {
        RightTm[j]=Arr[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<LeftS&&j<RightS)
    {



        if(LeftTm[i]<=RightTm[j])
        {
            Arr[k]=LeftTm[i];
            i++,k++;
        }
        else
        {
            Arr[k]=RightTm[j];
            j++,k++;

        }

}

        while(i<LeftS)
        {
            Arr[k]=LeftTm[i];
            i++,k++;
        }
        while(j<RightS)
        {
            Arr[k]=RightTm[j];
            j++,k++;
        }




}
void DivideArray(int Arr[],int left,int right)
{
    if(left>=right)
return;

        int mid=left+(right-left)/2;
        DivideArray(Arr,left,mid);
        DivideArray(Arr,mid+1,right);
        MergeArray(Arr,left,mid,right);

}
int main()
{
int l;
cin>>l;
int Arr[l];
for(int i=0;i<l;i++)
{
    cin>>Arr[i];
}
cout<<"Orginal Array is";
for(int i=0;i<l;i++)
{
    cout<<Arr[i]<<" ";
}
DivideArray(Arr,0,l-1);
cout<<"Sorted array";
for(int i=0;i<l;i++)
{
cout<<Arr[i]<<" ";
}
}
