#include <iostream>

using namespace std;
void print_wave(int arr[10][10],int r, int c){
      cout<<"\nWave Form is\n";
      for(int j=0;j<c;j++){
        if(j%2==0){
            for(int i=0;i<r;i++)
                cout<<arr[i][j]<<", ";
        }
        else{
            for(int i=r-1;i>=0;i--)
                cout<<arr[i][j]<<", ";
        }
      }
      cout<<"END";
}
int main()
{
    int arr[10][10],r,c;
    cout<<"Enter the number of rows and columns :";
    cin>>r>>c;
    cout<<"\nEnter the elements of the array"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    print_wave(arr,r,c);
}
