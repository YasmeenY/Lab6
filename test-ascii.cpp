/*
  This program will complete Task A. The program should report all characters from the input line together with their ASCII codes.
*/

#include <iostream>
#include <string>

using namespace std;
//main 
int main() {
   string s;
   cout << "Enter input: ";
   getline(cin, s); // input 
   for(int i = 0; i < s.size(); ++i) {
       cout << s[i] << " " << (int)s[i] << endl; // get Ascii
   }
   return 0;
}
