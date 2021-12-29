/*
  This program will complete Task B. The program should implement the caesar cipher encryption.
*/

#include <iostream>
#include <string>

using namespace std;

char shiftChar(char ch, int rShift);
string encryptCaesar(string str, int rShift);

int main() //main func
{
   string str;
    cout << "Enter plaintext: ";
    getline(cin, str);
    int key;
    cout << "Enter shift    : ";
    cin >> key;
    cout << "Ciphertext     : " << encryptCaesar(str, key) << endl;   
}

char shiftChar(char ch, int rShift) { //shift func
   if(ch >= 'A' && ch <= 'Z')
       ch = 'A' + (ch-'A'+rShift+26)%26;
   if(ch >= 'a' && ch <= 'z')
       ch = 'a' + (ch-'a'+rShift+26)%26;
   return ch;
}

string encryptCaesar(string str, int rShift) { //encrypt func
   string res = "";
   char ch;
   for(int i = 0; i < str.length(); ++i) {
       res += shiftChar(str[i], rShift);
   }
   return res;
}
