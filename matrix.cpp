//
//  main.cpp
//  Matrix3x3
//
//  Created by Akbar on 14.09.2018.
//  Copyright © 2018 Akbar. All rights reserved.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(0, "");
    
    int det, frst, thrd, scnd, frth, ffth, sxth, i, j, a[3][3];
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
        cout << endl;
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << " " << a[i][j];
        }
        cout << endl;
    }
    
    cout << endl;
    
    
    frst = a[0][0] * a[1][1] * a[2][2];
    scnd = a[1][0] * a[2][1] * a[0][2];
    thrd = a[0][1] * a[1][2] * a[2][0];
    frth = a[0][2] * a[1][1] * a[2][0];
    ffth = a[0][1] * a[1][0] * a[2][2];
    sxth = a[2][1] * a[1][2] * a[0][0];
    
    det = frst + scnd + thrd - frth - ffth - sxth;
    
    cout << "Детерминант: " << det << endl;
    
    _getch();
    return 0;
}
