/*
This program will read input by user and remove bad indentation.
*/

#include <iostream>
#include <string>

using namespace std;

string removeLeadingSpaces(string line);
//main func
int main() {
   string line;
   while(getline(cin, line)) { //input
       cout << removeLeadingSpaces(line) << endl;
   }
   return 0;
}

string removeLeadingSpaces(string line) {//remove spaces
   string result = "";
   bool check = true;
   for(int i = 0; i < line.size(); ++i) {
       if(!(check && isspace(line[i]))) {
           result += line[i];
           check = false;
       }
   }
   return result;
}
