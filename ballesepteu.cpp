double calculate_score(int correct, int total) {
    if (total == 0) return 0.0;
    return (static_cast<double>(correct) / total) * 100.0;
}
