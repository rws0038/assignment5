#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
    fstream fin;
    char str[] = "";
    string question;
    char filename[20];
    char choice;
    string answer;
    unsigned seed = 0;
    srand(seed);
    cout << "Enter the name of the text file: ";
    cin >> filename;
    cout << endl;

    do {
        fin.open(filename, ios::in);
            if(!fin) {
                cout << "File was not found. ";
                std::system("pause");
                return 0;
                }

    while(!fin.fail()) {
        cout << endl << "Ask any question: ";
        fflush(stdin);
        getline(cin,question);
        answer = "";
        char ch;
        
        while((ch = fin.get()) != '\n' && !fin.fail()) {
        answer += ch;
            if(ch == '#') {
            int randomNum = 1 + rand() % 18;
            answer += randomNum + '0';
            ch = fin.get();
            }
        }
        cout << answer << endl;
        }
    fin.close();
    cout << "Do you want to continue asking questions? Enter Y/y to continue: ";
    cin >> choice;
    }
    while(choice == 'y'||choice == 'Y');
    system("pause");
    return 0;

}
   
