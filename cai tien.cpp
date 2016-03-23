#include<iostream>
#include<conio.h>
using namespace std;
int n,a[100],t;
int x,y;
void nhap(){
     cout<<"nhap so phan tu day"<<endl;
     cin>>n;
     cout<<"nhap phan tu trong day"<<endl;
     for(int i=1;i<=n;i++){
             cin>>a[i];
             }
             cout<<"nhap so N"<<endl;
             cin>>t;
     }
     //----------------------------------------------
     int partition(int *a, int l, int r){
    int key = a[r];     
    int i = l - 1, j;   
    for (j=l; j<r; j++)  
        if (a[j] <= key) 
        {
            i++;
            swap(a[i], a[j]);  
        }
    swap(a[i+1], a[r]);   
    return i + 1;   
}

void Quicksort(int *a, int l, int r)
{
    while (l<r)
    {
        int q = partition(a,l,r);
        if (q < (l + (r-l)/2))   
        {
            Quicksort(a, l, q-1);
            l = q + 1;
        }
        else    
        {
            Quicksort(a, q + 1, r);
            r = q-1;
        }
    }
}
//-------------------------------------------------
int BinSearch(int a[], int N, int x)
{
 int left = 1, right = N ;
 int mid;
 do
 {
  mid = (left + right) / 2;
  if (x == a[mid]) 
   return mid;
  else
  if (x < a[mid])
   right = mid - 1;
  else
   left = mid + 1;
 } while (left <= right);

 return 0;
}
//---------------------------------------------
void DelLocal (int a[], int n, int local)
{
for (int i = local; i < n; i++)
a[i] = a[i+1];
n--;
}
//---------------------------------------------
main(){
       nhap();
       Quicksort( a,1,n);
       for(int i =1;i<=n;i++){
             x=a[i];
             y=t-a[i];
             DelLocal(a,n,1);
             if(BinSearch(a,n,y))  cout<<x <<"+"<<y<<endl;
             n--;
               }
       
       system("pause");
       }
