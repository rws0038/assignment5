#include<iostream> 
using namespace std;

int main()
{
char sentence[100];
cout << "Enter a sentence of up to 100 characters. ";
cin.getline(sentence,100); 
int length = 0;
int i = 0; 
bool caps = false; 
while(sentence[length] != '\0') 
length++;

if((int)sentence[i] >= 65 && (int)sentence[i] <= 90)
caps = true; 
else if((int)sentence[i] >= 97 && (int)sentence[i] <= 122) {
sentence[i] = sentence[i]^32;
caps = true; 
}
for(i=1; i < length; i++) {
if(sentence[i-1] == ' ' && sentence[i] == ' ') { 
for(int j=i; j < length; j++)
sentence[j] = sentence[j+1];
length--;
i--;
}
else if ((int)sentence[i] >= 65 && (int)sentence[i] <= 90) {
sentence[i] = sentence[i]^32;
}
else if(!caps)  {
sentence[i] = sentence[i]^32;
caps = true;
}
}
sentence[i] = '\0';
cout << sentence;
return 0;

}