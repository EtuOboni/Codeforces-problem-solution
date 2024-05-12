#include <iostream>
#include <string>

using namespace std;

int main() {
    string dubstep;
    cin >> dubstep;

    string originalSong;
    bool inWord = false;

    for (int i = 0; i < dubstep.size(); i++) {
        if (dubstep[i] == 'W' && dubstep[i + 1] == 'U' && dubstep[i + 2] == 'B')
        {
            if (inWord)
            {
                originalSong += ' ';
                inWord = false;
            }
            i += 2; // Skip "WUB"
        }
         else
            {
            originalSong += dubstep[i];
            inWord = true;
        }
    }

    cout << originalSong << endl;

    return 0;
}
