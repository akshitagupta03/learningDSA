#include <bits/stdc++.h>
using namespace std;

string intToRoman(int n) 
{    
    string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string hundreds[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string thousands[]={"","M","MM","MMM"};

    return thousands[n/1000] + hundreds[(n%1000)/100] +
    tens[(n%100)/10] + ones[(n%10)];
}

int main()
{

        
    return 0;
}
