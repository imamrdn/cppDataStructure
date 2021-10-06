// Copyright 2021
// Author: Ade Hendrawan
// NIM: 2000018055
// E-mail: ade2000018055@webmail.uad.ac.id

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/***
 * Convert value from char type to integer type
 * 
 * @param char foo
 * @return int
 */
int toInt(char foo) {
    int x;
    stringstream obj;
    obj << foo;
    obj >> x;
    return x;
}

class Penjumlahan {
    public:
        void setValue(int, int);
        void doSum();
        int getResult();

    private:
        int xInt;
        int yInt;
        string xString;
        string yString;
        int nLength;
        int xArr[20];
        int yArr[20];
        int resLength = 0;
        int resArr[20];
        void _reverseResult();
};

/**
 * Store value into class variable to be process
 * 
 * @param int x
 * @param int y
 * @return void 
 */
void Penjumlahan::setValue(int x, int y) {
    xString = to_string(x);
    yString = to_string(y);

    int xLength = xString.length();
    int yLength = yString.length();

    nLength = xLength;
    if(yLength > nLength) nLength = yLength;


    for(int i = (nLength - 1); i >= 0; i--) {
        if (xLength > 0) {
            xArr[i] = toInt(xString[(xLength-1)]);
        } else {
            xArr[i] = 0;
        }

        if (yLength > 0) {
            yArr[i] = toInt(yString[(yLength-1)]);
        } else {
            yArr[i] = 0;
        }

        xLength--;
        yLength--;
    }
}

/**
 * Summation process
 * 
 * @return void
 */
void Penjumlahan::doSum() {
    int remains = 0;
    int j = 0;

    for(int i = (nLength - 1); i >= 0; i--) {
        int tmp = remains + xArr[i] + yArr[i];
        
        resArr[resLength] = tmp%10;
        remains = tmp/10;
        j++;
        resLength++;
    }

    if (remains != 0) {
        resArr[resLength] = remains;
        resLength++;
    }

    this->_reverseResult();
}

/**
 * Reverse index value of result array
 * 
 * @return void
 */
void Penjumlahan::_reverseResult() {
    int tmpArr[20];

    int j = 0;
    for(int i = (resLength -1); i >= 0; i--) {
        tmpArr[j] = resArr[i];
        j++;
    }

    for(int i = 0; i < resLength; i++) {
        resArr[i] = tmpArr[i];
    }
}

/**
 * Get the result of process summation
 * 
 * @return int
 */
int Penjumlahan::getResult() {
    string tmp;
    for(int i = 0; i < resLength; i++) {
        tmp += to_string(resArr[i]);
    }
    return stoi(tmp);
}



int main() {
    int x, y;
    
    cout << "Masukan angka pertama : "; cin >> x;
    cout << "Masukan angka kedua   : "; cin >> y;
    
    cout << endl;

    Penjumlahan sum;
    sum.setValue(x, y);
    sum.doSum();
    cout << "Hasil penjumlahan (" << to_string(x) << " + " << to_string(y) <<") adalah " << sum.getResult() << endl;



    return 0;
}                                                       
