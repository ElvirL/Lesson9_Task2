/*
������ 2
�������� ���������, ������� ���������, ����� ��, ��� ������ ������ ������������ �� ���� ��������� ������ ������, ���������� ��������� ���. 
��������, ������ dabudabudabu � ��� ������ ���������� ������ dabu. ������ kapkap � ��� ������ ���������� ������ kap. 
� ��� ������ abdabdab ��� ������ gogolmogol ������ ����������� ��� ���������� ��������� ������ ������.
�� ���� ��������� ������ ��������� ������ � �������� ����� Yes, ���� ������ �������� ����������� ��������� ������ ������, � No, 
���� ��� �� ���.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    string s;
    cout << "������� ������: ";
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