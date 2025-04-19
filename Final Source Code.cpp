#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int numConditions, numActions;

    // Input phase
    cout << "Welcome to Decision Table Builder\n";
    cout << "Enter number of conditions: ";
    cin >> numConditions;
    cin.ignore(); // clear newline

    vector<string> conditions(numConditions);
    for (int i = 0; i < numConditions; ++i) {
        cout << "Enter condition " << i + 1 << ": ";
        getline(cin, conditions[i]);
    }

    cout << "Enter number of actions: ";
    cin >> numActions;
    cin.ignore();

    vector<string> actions(numActions);
    for (int i = 0; i < numActions; ++i) {
        cout << "Enter action " << i + 1 << ": ";
        getline(cin, actions[i]);
    }

    int totalRules = pow(2, numConditions);

    // Output table header
    cout << "\nGenerated Decision Table:\n";
    cout << left << setw(8) << "Rule# ";
    for (const auto& cond : conditions)
        cout << setw(12) << cond;
    for (const auto& act : actions)
        cout << setw(12) << act;
    cout << "\n" << string(8 + 12 * (numConditions + numActions), '-') << "\n";

    // Generate rule combinations
    for (int i = 0; i < totalRules; ++i) {
        cout << left << setw(8) << (i + 1);

        for (int j = numConditions - 1; j >= 0; --j) {
            bool bit = (i >> j) & 1;
            cout << setw(12) << (bit ? "T" : "F");
        }

        for (int j = 0; j < numActions; ++j) {
            cout << setw(12) << ""; // Actions not defined yet
        }

        cout << "\n";
    }

    return 0;
}
