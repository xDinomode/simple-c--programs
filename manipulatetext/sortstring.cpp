#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  while(true){
    string word = "";
    cin >> word;
    sort(word.begin(), word.end());
    cout << word << "\n";
  }
  return 0;
}
