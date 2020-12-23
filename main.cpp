#include <iostream>
#include <string>
using namespace std;

int main()
{
    string registr;
    string login;
    string passlog;
    string a;
    string name, pass, pass1;
    string test = "test123";
    string test1 = "123";
    cout << "Если ты еще не зарегистрированный пользователь напиши registr \nесли являешься участником то login: \n";
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
            return 1;

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
            return 1;
        
        }
        
    }
system("pause");
return 0; 
}
