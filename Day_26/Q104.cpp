#include <iostream>
using namespace std;

int main() {
    const int totalQuestions = 3;                       // no. of ques can be increased.
    string questions[totalQuestions] = {
        "What is the capital of India?",
        "Which planet is known as the Red Planet?",
        "Who developed C++?"
    };

    char options[totalQuestions][4][50] = {
        {"A. Berlin", "B. Delhi", "C. Paris", "D. Rome"},
        {"A. Earth", "B. Mars", "C. Jupiter", "D. Venus"},
        {"A. Dennis Ritchie", "B. James Gosling", "C. Bjarne Stroustrup", "D. Guido van Rossum"}
    };

    char answers[totalQuestions] = {'B', 'B', 'C'};
    char userAnswer;
    int score = 0;

    cout << "===== QUIZ APPLICATION =====\n\n";

    for (int i = 0; i < totalQuestions; i++) {
        cout << "Question " << i + 1 << ": "
             << questions[i] << endl;

        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        cout << "Enter your answer (A/B/C/D): ";
        cin >> userAnswer;

        if (toupper(userAnswer) == answers[i]) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong! Correct answer is "
                 << answers[i] << endl;
        }

        cout << endl;
    }

    cout << "===== QUIZ COMPLETED =====\n";
    cout << "Your Score: " << score << "/" << totalQuestions << endl;

    float percentage = (float)score / totalQuestions * 100;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}