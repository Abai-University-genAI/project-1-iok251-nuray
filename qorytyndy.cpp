void print_result(int correct, int total) {
    double score = calculate_score(correct, total);

    cout << endl;
    print_separator('*');
    cout << "  НӘТИЖЕЛЕР" << endl;
    print_separator('*');
    cout << "  Дұрыс жауаптар : " << correct << " / " << total << endl;
    cout << fixed << setprecision(1);
    cout << "  Нәтиже         : " << score << "%" << endl;
    cout << endl;

    if (score >= 90)
        cout << "  Баға: 5 — Өте жақсы! Сен керемет!" << endl;
    else if (score >= 70)
        cout << "  Баға: 4 — Жақсы! Кішігірім қателер бар." << endl;
    else if (score >= 50)
        cout << "  Баға: 3 — Қанағаттанарлық. Материалды қайталаңыз." << endl;
    else
        cout << "  Баға: 2 — Көбірек оқу керек. Бас тартпа!" << endl;

    print_separator('*');
}
