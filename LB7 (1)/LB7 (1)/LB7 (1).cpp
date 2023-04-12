#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void fillstr(char[], int);
void searchelements(char[], int);

int main() {
    char str[3000];
    int length = sizeof(str);
    cout << "Enter string: ";
    cin.getline(str, 3000);
    searchelements(str, strlen(str));
    cout << "Number of characters: " << strlen(str);
}

void fillstr(char str[], int size) {
    for (int i = 0; i < size; i++) str[i] = '\0';
}

void searchelements(char str[], int size) {
    for (int i = 0; i < size; i++) {
        if (strrchr(str, str[i]) == strchr(str, str[i])) cout << str[i] << " ";
    }
    cout << endl;
}