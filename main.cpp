#include "std_lib_facilities.h"
using namespace std;

int main()
{
    char registr;
    char login;
    char passlog;
    char a;
    char name, pass, pass1;
    char test;
    char test1;
    cout << "Если ты еще не зарегистрированный пользователь\nнапиши registr\nесли являешься участником то login: ";
    cin >> a;
    if (a == registr)
    {
        cout << "Придумай себе имя: ";
        cin >> name;
        cout << "Придумай себе пароль: ";
        cin >> pass;
        cout << "Подтвердите пароль: ";
        cin >> pass1;
        if (pass == pass1)
        {
            cout << "Cпасибо за регистрацию! Уважаемый " << name << "\nНадеюсь мы подружимся!\n";
        }
        else
        {
            cout << "Пароли не совпадают, проверьте правильность написания и повторите еще!";
            return pass1;
        }
        
    }
    else
    {
        cout << "С возвращением, напиши свой логин!: ";
        cin >> login;
        cout << "С возвращением, " << login << "напиши свой пароль!: ";
        cin >> passlog;
        if (login == test && passlog == test1)
        {
            cout << "Добро пожаловать домой " << login << "!\n";
        }
        else
        {
            cout << "Ошибка при вводе логина или пароля, повторите попытку заново!";
            return login;
        }
        
    }
keep_window_open();
return 0; 
}