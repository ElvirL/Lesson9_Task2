/*
Задача 2
Напишите программу, которая проверяет, верно ли, что данная строка представляет из себя некоторую другую строку, повторённую несколько раз. 
Например, строка dabudabudabu — это трижды повторённая строка dabu. Строка kapkap — это дважды повторённая строка kap. 
А вот строку abdabdab или строку gogolmogol нельзя представить как повторение некоторой другой строки.
На вход программа должна принимать строку и выдавать ответ Yes, если строка является повторением некоторой другой строки, и No, 
если это не так.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    string s;
    cout << "Введите строку: ";
    getline(cin,s);

    
    bool is_repeat = false;
    string repeat_text = "";
    for (char c: s){
        repeat_text+=c;
        size_t index = 0;
        while (index < s.size()){
            if (repeat_text != s.substr(index, repeat_text.size())){
                is_repeat = false;
                break;
            }
            else {
                index+=repeat_text.size();
                is_repeat = true;
            }
        }
        if (is_repeat && repeat_text.size() != s.size()){
            cout << "Yes";
            break;
        }
    }

    if ((is_repeat && repeat_text.size() == s.size())){
        cout << "No";
    }

}