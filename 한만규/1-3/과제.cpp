#include <iostream>
using namespace std;

int main() {
    int N = 0;
    int X = 0;

    cin >> N >> X;


    int input = 0;
    for (int i = 0; i < N; i++) {

        cin >> input;
        if (input < X) {
            cout << input << " ";
        }
    }
}