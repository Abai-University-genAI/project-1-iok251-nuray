#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
struct Task {
    int   type;          // 1 – шарт, 2 – for циклі, 3 – while циклі
    string question;     // тапсырма мәтіні
    int   correct;       // дұрыс жауап
void show_menu();
Task generate_task(int type);
bool check_answer(const Task& task, int user_answer);
double calculate_score(int correct, int total);
void print_separator(char ch = '=', int width = 55);
void print_result(int correct, int total);
int main() {
    // Кездейсоқ сандар генераторын іске қосу
    srand(static_cast<unsigned>(time(nullptr)));

    print_separator();
    cout << "   ЖАТТЫҚТЫРҒЫШ: Шартты операторлар және циклдер" << endl;
    cout << "   7-8 сынып оқушылары үшін әзірленген" << endl;
    print_separator();

    int choice = 0;
    do {
        show_menu();
        cout << "Таңдауыңызды енгізіңіз: ";
        cin >> choice;

        if (choice == 1) {
            int total_questions = 9; // Тест көлемі
            int correct_count   = 0;

            cout << "\nТЕСТ БАСТАЛДЫ. Сәттілік!" << endl;
            print_separator('-');

            for (int i = 0; i < total_questions; i++) {
                int type = (i % 3) + 1; // Сұрақ түрлерін кезектестіру
                Task t = generate_task(type);

                cout << "\nСұрақ " << (i + 1) << " / " << total_questions << endl;
                cout << t.question << endl;
                cout << "Жауабыңыз: ";

                int user_ans;
                cin >> user_ans;

                if (check_answer(t, user_ans)) {
                    cout << "=> Дұрыс! Жарарайсың." << endl;
                    correct_count++;
                } else {
                    cout << "=> Қате. Дұрыс жауап: " << t.correct << endl;
                }
            }
            print_result(correct_count, total_questions);

        } else if (choice == 2) {
            // Анықтама бөлімі
            print_separator('-');
            cout << "ҚЫСҚАША АНЫҚТАМА:\n";
            cout << "1. if(a > b) - егер шарт орындалса, бірінші блок істейді.\n";
            cout << "2. for(і=0; і<n; і++) - n рет қайталанатын цикл.\n";
            cout << "3. while(шарт) - шарт орындалып тұрғанша қайталанады.\n";
            print_separator('-');
        }
    } while (choice != 0);

    cout << "Программа аяқталды. Сау болыңыз!" << endl;
    return 0;
}

