#include <iostream>
#include <string>
using namespace std;
char FirstUniqueChar(string s){
    int  count;
    char c;

for (int i=0;i<s.length();i++){
 count=0;
 c=s[i];
 for (int j=i+1;j<s.length();j++){
    if (c==s[j]){
        count++;
        break;
    }
 }
 if (count==0){
    return c;
 }
}
return ' ';
}