#include <iostream>

using namespace std;

class Worker{
    float MoneyOfWorker;
    float productivity = 1;
public:
    static float MoneyOfFirm;	// Статичний член класу
    Worker(float m) {MoneyOfWorker=m;}
    Worker(float m, float p);
    void work(float);
    void rest(float);
    void display();
    void displayMoneyOfFirm() {cout<<MoneyOfFirm<<endl;}
};

 void Worker::work(float period){
    MoneyOfWorker += productivity * period;
    MoneyOfFirm += (productivity * 5) * period;
 }

float Worker::MoneyOfFirm=1000;	// Ініціалізація статичного компонента

Worker::Worker(float m, float p) {
    MoneyOfWorker = m;
    productivity = p;
}

void Worker::rest(float period) {
    MoneyOfWorker -= productivity*period;
    MoneyOfFirm -= (productivity*5)*period;
}

void Worker::display() {
     cout << MoneyOfWorker << endl;
}

int main() {
    const int n = 5;
    Worker M[n]={50,28,35,45,49};	// Створення масиву екземплярів // класу і їх ініціалізація
    cout<<" Початкова кількість грошей у працівників:\n";

    cout << "Доступ до статичного члена класу через екземпляр M[1]: ";
    cout << M[1].MoneyOfFirm << endl;

    cout << "Доступ до членів класу через покажчик на клас: ";
    cout << Worker::MoneyOfFirm << endl;


    for(int i = 0; i < n; i++)
        M[i].display();
    cout<<" Початковий капітал фірми:\n";
    M[0].displayMoneyOfFirm();
    cout<<" Кінцева кількість грошей у працівників:\n";

    for(int i = 0; i < n ; i++) {
        M[i].work(2);
        M[i].display();
    }
    cout<<" Кінцевий капітал фірми:\n";
    M[0].displayMoneyOfFirm();

    return 0;
}
