#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <ctime>
#include <fffggggg_clsString.h>

using namespace std;

template <class T>
class clsInput {
public:

static T ReadNumber(string S){
T Number;
cout << S;
cin >> Number;

while(cin.fail()){
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');

cout << "Please Number: ";
cin >> Number;
}

return Number;
}

static T ReadNumber(string S, T From, T To){
T Number = ReadNumber(S);
while(Number < From || Number > To){
cout << "Please Number From " << From << " To " << To << endl;
Number = ReadNumber(S);
}

return Number;
}

static bool IsNumberBetween(T Number, T From, T To){
return Number >= From && Number <= To;
}

static string ReadString(string S){
string String;
cout << S;
getline(cin >> ws, String);

return String;
}


static char ReadChar(string S){
char C;

cout << S;
cin >> C;

return C;
}


static bool ReadBool(string S){
bool B;

cout << S;
cin >> B;

return B;
}


static char YorN(string S){
char C, UpperC;
do{
cout << S;
cin >> C;

UpperC = clsString::UpperChar(C);
}while(UpperC != 'Y' && UpperC != 'N');

return UpperC;
}

static bool TorF(string S){
short Number;

do{
cout << S;
cin >> Number;
}while(Number != 0 && Number != 1);

return Number;
}


};
