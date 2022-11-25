#include <iostream>

using namespace std;

class Reverse {
public:

    // uses for loop to reverse string
    static string reverseStringLoop(string str) {
        string reverse;
        for(int i = str.length() - 1; i >= 0; i--){
           reverse.push_back(str.at(i));
        }
        return reverse;
    }

    // uses std::reverse function to reverse string
    static string reverseString(string str){
        reverse(str.begin(), str.end());
        return str;
    }

    // uses a while loop to swap string with itself
    static string reverseStringSwap(string str){
        int i = 0;
        int x = str.length() - 1;
        int half = str.length()/2;
        while(i != half){
            swap(str.at(i), str.at(x));
            i++;
            x--;
        }
        return str;
    }
};


int main() {
    Reverse reverse;

    // check odd string length
    string str = "My Name is Turner";
    cout << "String: " << str << endl;
    cout << "Reversed String: " << endl;
    cout << reverse.reverseStringLoop(str) << endl;
    cout << reverse.reverseString(str) << endl;
    cout << reverse.reverseStringSwap(str) << endl;
    cout << endl;

    // check even string length
    str = "My Name is Turner!";
    cout << "String: " << str << endl;
    cout << "Reversed String: " << endl;
    cout << reverse.reverseStringLoop(str) << endl;
    cout << reverse.reverseString(str) << endl;
    cout << reverse.reverseStringSwap(str) << endl;
}
