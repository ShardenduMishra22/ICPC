#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;

        if (word.size() > 10) {
            string abbreviation = "";
            abbreviation += word[0]; 
            abbreviation += to_string(word.size() - 2); 
            abbreviation += word.back(); 
            cout << abbreviation << endl;
        } else {
            cout << word << endl;
        }
    }

    return 0;
}
