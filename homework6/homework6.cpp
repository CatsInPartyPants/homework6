#include <iostream>
#include <cctype>

using namespace std;

void multiplication_table(int);

int main()
{
    setlocale(LC_ALL, "ru");
    
    //task1
        
    char user_input;
    cout << "Enter any simbol-> (for exit 0) ";
    cin >> user_input;
    while (user_input != '0') {
        if (isalpha(user_input)) {
            cout << "it is letter!\n";
        }
        else if (isdigit(user_input)) {
            cout << "it is number!\n";
        }
        else if (ispunct(user_input))
        {
            cout << "it is punctuation mark!\n";
        }
        else
        {
            cout << "it is other simbol!\n";
        }
        cin >> user_input;
    }
    

    //task2

    
    int user_operator, friend_operator;
    double call_minutes;
    double mts_out = 5, megafon_out=3.5, tele2_out = 1.5;
    cout << "enter your operator:\n"
        << "1 - MTS,\n"
        << "2 - Megafon,\n"
        << "3 - Tele2.\n";
    cin >> user_operator;
    cout << "enter friend operator:\n"
        << "1 - MTS,\n"
        << "2 - Megafon,\n"
        << "3 - Tele2.\n";
    cin >> friend_operator;
    cout << "enter minutes of call->";
    cin >> call_minutes;

    if (user_operator == friend_operator) {
        cout << "the call is free for you!\n";
    }
    else if (user_operator == 1) {
        cout << "the price of the call is " << round(call_minutes * mts_out*100)/100 << " rubles.\n";
    }
    else if (user_operator == 1) {
        cout << "the price of the call is " << round(call_minutes * megafon_out * 100) / 100 
            << "rubles.\n";
    }
    else if (user_operator == 3) {
        cout << "the price of the call is " << round(call_minutes * tele2_out * 100) / 100
            << "rubles.\n";
    }
    else{
        cout << "incorrect user operator!\n";
    }
    

    //task3
        
    int menu_number;
    cout << "Меню:\n\n";
    cout << "1. Ввести желаемый доход и количество опозданий, для того, чтобы посчитать, сколько строк" 
        << " кода надо написать\n";
    cout << "2. Ввести количество строк кода и желаемый объем заработной платы, "
        << "подсчитываем сколько можно опоздать\n";
    cout << "3. Количество строк кода и количество опозданий, определить сколько денег заплатят"
        << "и заплатят ли вообще\n\n";
    cout << "Введите пункт меню:";
    cin >> menu_number;
    system("CLS");
    if (menu_number <= 0 || menu_number >= 4) {
        cout << "Неверное значение пункта меню.\n";
    }
    else if (menu_number == 1) {
        double line_cost = 0.5;
        int want_wage, late_count;
        int lines_of_code;
        cout << "Введите желаемый доход:";
        cin >> want_wage;
        cout << "Введите количество опозданий";
        cin >> late_count;
        lines_of_code = want_wage / line_cost;
        if (late_count >= 3) {
            int penalty = late_count / 3 * 20;
            lines_of_code += penalty / line_cost;
        }
        cout << "Необходимо написать " << lines_of_code << " строк кода.";
    }
    else if (menu_number == 2) {
        int lines_of_code, want_wage, late_count;
        double one_line_cost = 0.5;
        cout << "Введите количество написанных строк кода: ";
        cin >> lines_of_code;
        cout << "Введите желаемую зарплату:";
        cin >> want_wage;
        if (want_wage >= (lines_of_code * one_line_cost))
        {
            cout << "Опаздывать нельзя!";
        }
        else {
            late_count = (((lines_of_code * one_line_cost) - want_wage) / 20) * 3;
            cout << "Опоздать можно " << late_count << " раз.";
        }
    }
    else if (menu_number == 3) {
        int lines_number=0;
        int late_count = 0;
        double total_wage, wage_for_lines = 0;
        double wage_for_late;
        cout << "Введите количество строк кода -> ";
        cin >> lines_number;
        cout << "Введите количество опозданий -> ";
        cin >> late_count;
        if (lines_number < 100) {
            wage_for_lines = 0;
        }
        else {
            wage_for_lines = (lines_number / 100) * 50;
        }
        if (late_count < 3) {
            wage_for_late = 0;
        }
        else {
            wage_for_late = (late_count / 3) * 20;
        }

        total_wage = wage_for_lines - wage_for_late;

        if (total_wage <= 0) {
            cout << "Программист не получит зарплату.\n";
        }
        else {
            cout << "Программист получит $" << total_wage << endl;
        }
    }
    
    //task 4
        
    int a;
    cout << "Введите значение a:";
    cin >> a;
    if (a < 500) {
        for (int i = a+1; i <= 500; i++) {
            a += i;
        }
    }
    cout << a << endl;    
    
    //task 5
    
    int x, y;
    cout << "Введите значение x, y. Значение x будет возведено в степень y->  \n";
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    double result = 1;
    if (y > 0) {
        for (int i = 0; i != y; i++) {
            result *= x;
        }
    }
    else if (y == 0) {
        result = 1;
    }
    else if (y < 0) {
        for (int i = 0; i != y; i--) {
            result *= x;
        }
        result = 1 / result;
    }
    cout << result << endl;
    
    cout << pow(x, y);
    
    //task 6
    
    double result = 0;
    for (int i = 1; i <= 1000; i++) {
        result += i;
    }
    result = result / 1000;
    cout << result << endl;
    
    //task 7
    
    long long a;
    cout << "Введите число a, учитывая, что 1<=a<=20  -> ";
    cin >> a;
    if (a <= 0 || a > 20) {
        cout << "значение а указано не верно!";
    }
    else if (a>=1 && a < 20){
        for (int i = a+1; i <= 20; i++) {
            a *= i;
        }
        cout << a;
    }
    else if(a==20) {
        cout << a * a;
    }
    
    //task 8
    int number;
    for (int i = 1; i <= 9; i++) {
        multiplication_table(i);
        }
    cout << "Для какого числа вы хотите увидеть таблицу умножения?\n";
    cin >> number;
    multiplication_table(number);   
}

void multiplication_table(int x) {
    cout << "Таблица умножения на " << x << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << x << " = " << i * x << endl;
    }
}