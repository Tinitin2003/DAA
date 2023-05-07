#include<iostream>
#include<string.h>
using namespace std;
const int MAX_CHAR = 26;
void getMaxOccurringChar(char str[], char &maxChar, int &maxCount) {
    int count[MAX_CHAR] = {0};
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        count[str[i] - 'a']++;
    }
    maxChar = 'a';
    maxCount = count[0];
    for (int i = 1; i < MAX_CHAR; i++) {
        if(count[i] > maxCount) {
            maxChar = 'a' + i;
            maxCount = count[i];
        }
    }
}

int main() {
    char str[100];
    cout << "Enter the string: ";
    cin >> str;
    char maxChar;
    int maxCount;
    getMaxOccurringChar(str, maxChar, maxCount);
    cout << "The maximum occurring character is: " << maxChar << endl;
    cout << "The number of occurrences is: " << maxCount;
    return 0;
}