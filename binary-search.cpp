#include <iostream>
//25 numero
//12 numeros a leer
//1 5 6 7 11 14 25 41 51 53 71 77 
// respuesta 7
using namespace std; 
  int binary(int searchNumber,int size,int* numbers){
    int binaryProgress=size/2;
    while(numbers[binaryProgress]!=searchNumber){
      if(numbers[binaryProgress]<searchNumber){
        binaryProgress+=(binaryProgress/2);
      }
      else if(numbers[binaryProgress]>searchNumber){
        binaryProgress-=(binaryProgress/2);
      }
    }
    cout<<"It is in the position: "<<binaryProgress<<endl;
  }
int main() {
  int search,size;
  cout<<"Tell me how many numbers you want to save"<<endl;
  cin>>size;
  
  int numbers[size];
  cout<<"Now pleaese tell me the numbers:"<<endl;
  for(int i=0; i<size; i++){
    cin>>numbers[i];
  }
  cout<<"What number do you want to search?"<<endl;
  cin>>search;
  binary(search,size,numbers);
}



