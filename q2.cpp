#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<istream>

using namespace std;

int main()
{
   char sentence[101];
   int i;
   int count;
   while (1) {
   i = 0; count = 0;
   cout << "Enter a line of text: " << endl;
   cin.getline(sentence, 100);
   while (sentence[i] != '\0') {   
      if (isalpha(sentence[i])) {
      count++;
   }  else {
      if (count == 4){
      if ((sentence[i-4] >= 'A') && (sentence[i-4] <= 'Z')) {
      sentence[i-4] = 'L';
   }  else {
      sentence[i-4] = 'l';
   }
      sentence[i-3] = 'o';
      sentence[i-2] = 'v';
      sentence[i-1] = 'e';
   }
      count = 0;
   }
      i++;
   }
      cout << sentence << endl;
      return 0;
   }
}