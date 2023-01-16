//for create your own text file
//in that case only create only same text
#include<fstream>
#include<iostream>
using namespace std;

int main(){
    fstream myFile;

    myFile.open("fileforspam", ios::out);
    if(myFile.is_open()){
        for(int i=1; i<101; i++){
            myFile<<i<<". spam text \n";
        }
        myFile.close();
    }
    system("pause");
}