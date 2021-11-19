#include <iostream>
#include <fstream>
using namespace std;

int main(){
   ifstream in1("file1.txt");
   ifstream in2("file2.txt");
   ofstream out("file3.txt");
   int n1, n2;
   in1 >> n1;
   in2 >> n2;
   while (true) {  
       if (n1 < n2) {
           out << n1 << endl;
           in1 >> n1;
           if (!in1.good()) 
           break;
       }
       else if (n1 == n2) {
           out << n1 << endl;
           in1 >> n1;
           in2 >> n2;
           if (!in1.good()) 
           break;
           if (!in2.good()) 
           break;
       }
       else {
           out << n2 << endl;
           in2 >> n2;
           if(!in2.good()) 
           break;
       }
   }
  
   while (in1.good()) {
       int previous_n1 = n1;
       out << n1 << endl;
       in1 >> n1;
   }
   while (in2.good()) {
       out << n2 << endl;
       in2 >> n2;
   }
}