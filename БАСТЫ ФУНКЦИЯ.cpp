int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    // Сәлемдесу
    print_separator();
    cout << "   ЖАТТЫҚТЫРҒЫШ: Шартты операторлар және циклдер" << endl;
    cout << "   7-8 сынып оқушылары үшін" << endl;
    print_separator();
    cout << endl;

    int choice = 0;

    do {
        show_menu();
        cout << "Сіздің таңдауыңыз: ";
        cin  >> choice;

        if (choice == 1) {
            // ── ОҚУ РЕЖИМІ 
 int total_questions = 9; // әр түрден 3 тапсырма
            int correct_count   = 0;

            cout << endl;
            print_separator('-');
            cout << "  ТЕСТ БАСТАЛДЫ (" << total_questions << " сұрақ)" << endl;
            print_separator('-');

            for (int i = 0; i < total_questions; i++) {
                int type = (i % 3) + 1;          // түрлерді кезектестіру 1→2→3→1→…
                Task t   = generate_task(type);

                cout << endl;
                cout << "Сұрақ " << (i + 1) << " / " << total_questions << endl;

                // Тапсырма түрінің белгісі
                if (t.type == 1) cout << "[Түр: if/else шартты операторы]" << endl;
                else if (t.type == 2) cout << "[Түр: for циклі]"            << endl;
                else                  cout << "[Түр: while циклі]"          << endl;

                cout << endl;
                cout << t.question << endl;
                cout << endl;
                cout << "Сіздің жауабыңыз: ";

                int user_ans;
                cin >> user_ans;

                if (check_answer(t, user_ans)) {
                    cout << "  ✓ Дұрыс!" << endl;
                    correct_count++;
                } else {
                    cout << "  ✗ Қате. Дұрыс жауап: " << t.correct << endl;
                }
            }

            // Қорытынды
            print_result(correct_count, total_questions);

        } else if (choice == 2) {
            // ── АНЫҚТАМА 
            print_separator();
            cout << "  ТАҚЫРЫПТАР БОЙЫНША АНЫҚТАМА" << endl;
            print_separator();
            cout << endl;
            cout << "1) IF / ELSE ШАРТТЫ ОПЕРАТОРЫ" << endl;
            cout << "   Синтаксис:" << endl;
            cout << "     if (шарт) {" << endl;
            cout << "         // шарт ақиқат болса орындалады" << endl;
            cout << "     } else {" << endl;
            cout << "         // шарт жалған болса орындалады" << endl;
            cout << "     }" << endl;
            cout << endl;
            cout << "2) FOR ЦИКЛІ" << endl;
            cout << "   Синтаксис:" << endl;
            cout << "     for (int i = 0; i < N; i++) {" << endl;
            cout << "         // цикл денесі" << endl;
            cout << "     }" << endl;
            cout << "   Дәл N рет орындалады (i = 0,1,...,N-1)." << endl;
            cout << endl;
            cout << "3) WHILE ЦИКЛІ" << endl;
            cout << "   Синтаксис:" << endl;
            cout << "     while (шарт) {" << endl;
            cout << "         // цикл денесі" << endl;
            cout << "     }" << endl;
            cout << "   Шарт ақиқат болғанша орындалады." << endl;
            cout << endl;
            print_separator();

        } else if (choice == 0) {
            cout << endl;
            cout << "Сау болыңыз! Алгоритмдерді үйренуде сәттілік!" << endl;
        } else {
            cout << "Қате таңдау. Қайта көріңіз." << endl;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}
