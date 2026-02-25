#include <iostream>
#include <cstdlib>
#include <ctime>
#include "tasks.h"
#include "ui.h"

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    print_separator();
    cout << "ЖАТТЫҚТЫРҒЫШ\n";
    print_separator();

    int choice = 0;

    do {
        show_menu();
        cin >> choice;

        if (choice == 1) {
            int total = 9;
            int correct = 0;

            for (int i = 0; i < total; i++) {
                int type = (i % 3) + 1;
                Task t = generate_task(type);

                cout << "\n" << t.question << endl;
                cout << "Жауап: ";

                int ans;
                cin >> ans;

                if (check_answer(t, ans)) {
                    cout << "Дұрыс!\n";
                    correct++;
                } else {
                    cout << "Қате! Дұрыс жауап: " << t.correct << endl;
                }
            }

            print_result(correct, total);
        }

    } while (choice != 0);

    return 0;
}