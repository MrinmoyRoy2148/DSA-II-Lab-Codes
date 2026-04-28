
 #include <iostream>
using namespace std;
int main()
{
    int A[]={1,3,8};int n=3;
    int B[]={2,7,10,12};int m=4;
    int total=n+m;
    int mid=total/2;
    int i=0,j=0,count=0;
    int prevVal=-1,curVal=-1;
    while(count<=mid)
    {
        prevVal=curVal;
        if(i<n&&(j>=m||A[i]<=B[j]))
        {
            curVal=A[i];i++;
        }
        else{
            curVal=B[j];j++;
        }
        count++;
    }
     if (total % 2 == 1) cout << "Median = " << curVal << "\n";

      else cout << "Median = " << ( (prevVal + curVal) / 2.0 ) << "\n";
    return 0;
}
