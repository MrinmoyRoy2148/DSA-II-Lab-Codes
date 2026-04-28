
 #include <iostream>
 using namespace std;
 int firstOcc(int a[],int n,int x)
 {
     int l=0,r=n-1,ans=-1;
     while(l<=r)
     {
         int mid=l+(r-l)/2;
         if(a[m]==x){ans=m;r=m-1;}
         else if(a[m]<x)
         {
             l=m+1;
         }
         else{r=m-1;}
         return ans;
     }

 }
 int  lastOcc(int a[],int n,int x)
 {
     int l=0,r=n-1,ans=-1;
     while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==x){ans=m;l=m+1;}
        else if(a[m]<x){l=m+1;}
        else
        {r=m-1;

        }
     }
     return ans;
 }
