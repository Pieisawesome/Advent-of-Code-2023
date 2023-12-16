// I guess I'll try to do it in different lanauges as well
// We'll find out

// Lana Tran
// Started: 12/7/2023 (Not on day one but starting)

// This program takes in a file, 
// reads each line, 
// combine the numbers on the same line, (ex: wat3rmel0n -> 30, chee5eburg3r -> 53) 
// then adds up the combined numbers (ex: 30 + 53 = 83)
// If there is only one number, skip it

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file;
    file.open("Day_1_text_input.txt");

    string curLine;
    int sum = 0;
    

    while (getline(file, curLine)) {
        bool twoNumBool = false;
        char numTempOne = -1;
        char numTempTwo = -1;

        for (int i = 0; i < curLine.length(); i++) {

            if (!isdigit(curLine[i])) {
                continue;
            }

            if (numTempOne == -1) {
                numTempOne = curLine[i];
            }
            else {
                numTempTwo = curLine[i];
                twoNumBool = true;
            }
 
        }

        if (twoNumBool == false) {
            numTempTwo = numTempOne;
        }

        sum += (static_cast<int>(numTempOne) - 48) * 10 + (static_cast<int>(numTempTwo) - 48);
    }
    cout << "Sum: " << sum << "\n";
}
