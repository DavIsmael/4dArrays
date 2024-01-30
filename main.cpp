#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main(){
  string names[2][3][3][3];
  int counter = 0;
  bool secondSection = true;
  for(int i = 0; i <= 1; i++){
    for(int j = 0; j <= 2; j++){
      for(int k = 0; k <= 2; k++){
        for(int l = 0; l <= 2; l++){
          cout << "Insert in a name: ";
          cin >> names[i][j][k][l];
          cout << endl;
          cout << endl;
          counter++;
        }
      }
    }
  }
  Sleep(1000);
  cout << endl;
  cout << "First Section" << endl;
  cout << endl;
  for(int i = 0; i <= 1; i++){
    for(int j = 0; j <= 2; j++){
      for(int k = 0; k <= 2; k++){
        for(int l = 0; l <= 2; l++){
          if(i == 1 && secondSection == true){
            Sleep(1000);
            cout << endl;
            cout << "Second Section" << endl;
            cout << endl;
            secondSection = false;
          }
          Sleep(1000);
          cout << names[i][j][k][l] << " ";
          if(l == 2){
            cout << endl;
          }
          if(k == 2 && l == 2){
            cout << endl;
          }
        }
      }
    }
  }
  cout << counter << " names were printed out!" << endl;
  cout << endl;
}