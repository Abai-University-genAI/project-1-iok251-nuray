void show_menu();
Task generate_task(int type);
bool check_answer(const Task& task, int user_answer);
double calculate_score(int correct, int total);
void print_separator(char ch = '=', int width = 55);
void print_result(int correct, int total);
