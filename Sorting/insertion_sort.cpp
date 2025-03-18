#include<iostream>
using namespace std;
void Insertion_sort(int A[],int n){
    for(int i=1;i<n;i++){
        int temp=A[i];
        int j=i-1;
        while(j>=0 && A[j]>temp){
            A[j+1]=A[j];
            j--;
        }
        A[++j]=temp;
    }
}

int main(){
    int n=5;
 int A[5]={46,31,26,29,12};
 Insertion_sort(A,n);
 for(int i=0;i<n;i++){
    cout<<A[i]<< " ";
 }
}