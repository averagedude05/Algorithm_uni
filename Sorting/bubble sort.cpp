#include <iostream>
using namespace std;
void BubbleSort(int A[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<(n-i);j++){
             if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
             }
        }
    }
}
int main(){
    int n=5;
    int A[n]={12,34,2,1,334};
    BubbleSort(A,n);
    for(int i=0;i<n;i++){
      cout<<A[i]<<" ";
    }
}