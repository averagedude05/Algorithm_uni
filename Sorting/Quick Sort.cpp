#include <iostream>
using namespace std;
int Partition(int A[],int l,int h){
  int pivot=A[l];
  int i=l;
  int j=h;
  while(i<j){
    while(A[i]<=pivot){
      i++;
    }
    while(A[j]>pivot){
      j--;
    }
    if(i<j){
      swap(A[i],A[j]);
    }
  }
  swap(A[l],A[j]);//can't use pivot because the elements in the array are not swapped rather the only thing that is swapped is the variable
  return j;
}
 
void Quick(int A[],int l, int h){
  if(l<h){
    int j  =Partition(A,l,h);
    Quick(A, l, j - 1); 
    Quick(A, j + 1, h);
  }
}

int main(){
  int A[]={5,2,1,4,6,7,1};
  int n=7;
  int l=5;
  int h=1;
  Quick(A, 0, n - 1);
  for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
}