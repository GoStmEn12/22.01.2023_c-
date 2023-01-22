// 20.01.2023.

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#define DAY 86400
using namespace std;


int main()
{
    setlocale(LC_ALL, "");
    cout << "\tЗадание 1";
    int num;
    cout << "\nВведите   шестизначное число  :";
    cin >> num;
    if (num >= 100000 && num < 1000000)
    {
 
        if (num/1000==num%1000)
            cout << "\nСчастливый :)";
        else
            cout << "\nНе счастливый :(";
    }
    else
        cout << "\nВы допустили ошибку!!!";


    cout << "\n";
    cout << "\n\tЗадание2";
    int num1;
    cout << "\nВведите четырехзначное  число : ";
    cin >> num1;
    if (num1 >= 1000 && num1 < 10000)
    {
        cout << "\nЧисло до  " << num1 << "\tЧисло после  " << rand() % 1000+ 1568;
    }
    else
        cout << "\nВы допустили ошибку!!!";


    cout << "\n";
    cout << "\n\tЗадание3";
    int a, b;
    cout << "\nВведите первое число :";
    cin >> a;
    cout << "\nВведите второе число : ";
    cin >> b;
    int max = (a > b) ? a : b;
    int c;
    cout << "\nВведите третье число :";
    cin >> c;
    int max1 = (c > max) ? c : max;
    int d;
    cout << "\nВведите четверто число :";
    cin >> d;
    int max2 = (d > max1) ? d : max1;
    int e;
    cout << "\nВведите пятое число :";
    cin >> e;
    int max3 = (e > max2) ? e : max2;
    int f;
    cout << "\n Ведите шестое число :";
    cin >> f;
    int max4= (f > max3) ? f : max3;
    int g;
    cout << "\nВведите седьмое число :";
    cin >> g;
    int max5 = (g > max4) ? g : max4;
    cout << "\nНайбольшее число :" << max5;


    cout << "\n";
    cout << "\nЗадание 4";
    int AB, BC;
    cout << "\nВведите расстояние между пунктом АВ :";
    cin >> AB;
    cout << "\nВведите расстояние между пунктом ВС :";
    cin >> BC;
    int mass;
    cout << "\n1-до 500кг:1 литр/км";
    cout << "\n2- до 1000кг : 4 литр/км";
    cout << "\n3- до 1500 кг : 7 литр/км ";
    cout << "\n4- до 2000 кг : 9 литр/км";
    cout << "\n5- больше чем 2000 кг самолет не поднимет ";
    cout << "\nСделайте выбор :";
    cin >> mass;
    switch (mass)
    {
    case  1: {
        int cost1 = AB * 1 + BC * 1;
        int cost2 = cost1 - (AB * 1);
        cout << "\nВсего нужно топлива  :  " << cost1 << "    Для  дозапраки в пункте В нужно топлива  " << cost2;
        break;
    }
      case  2:
      {
          int cost3 = AB * 4 + BC * 4;
          int cost4 = cost3 - (AB * 4);
          cout << "\nВсего нужно топлива :    " << cost3 << "  Для  дозапраки в пункте В нужно топлива   " << cost4;
          break;
      }
      case  3:
      {
          int cost5 = AB * 7 + BC * 7;
          int cost6 = cost5 - (AB * 7);
          cout << "\nВсего нужно топлива :   " << cost5 << "  Для  дозапраки в пункте В нужно топлива   " << cost6;
          break;
      }
      case  4:
      {
          int cost7 = AB * 9 + BC * 9;
          int cost8 = cost7 - (AB * 9);
          cout << "\nВсего нужно топлива :   " << cost7 << "    Для  дозапраки в пункте В нужно топлива   " << cost8;
          break;
      }
      case  5:
      {
          cout << "\nНе возможно совершить полет :(";
          break;
      default:
          cout << "\nВы ошиблись:(";
          break;
      }
    }
    cout << "\n";
    cout << "\nЗадание5";
    int begDay, begMonth, begYear;
    int endDay, endMonth, endYear;
    time_t time1, time2, daysDifference;

    cout << "\n Введите начальное число: "; cin >> begDay;
    cout << " Введите начальный месяц: "; cin >> begMonth;
    cout << " Введите начальный год: "; cin >> begYear;

    tm dateBeg = { 0, 0, 0, begDay, begMonth - 1, begYear - 1900, 0, 0, 0 };

    cout << "\n Введите конечное число: "; cin >> endDay;
    cout << " Введите конечный месяц: "; cin >> endMonth;
    cout << " Введите конечный год: "; cin >> endYear;

    tm dateEnd = { 0, 0, 0, endDay, endMonth - 1, endYear - 1900, 0, 0, 0 };
    time1 = mktime(&dateBeg);
    time2 = mktime(&dateEnd);
    daysDifference = ((time1 > time2) ? time1 - time2 : time2 - time1) / DAY;

    cout << "\n Разница в днях равна: " << daysDifference;
    cin.get(); cin.get();

    cout << "\n";
    cout << "\nЗадание6";
    int cost1, cost2, cost3, salary , salary1 , salary2;
    string mag , mag1 , mag2 ;
    cout << "\nВведите сумму продаж для первого сотрудника : ";
    cin >> cost1;
    cout << "\nВведите сумму продаж для второго сотрудника : ";
    cin >> cost2;
    cout << "\nВведите сумму продаж для третьего сотрудника : ";
    cin >> cost3;
    //Зарплата первого работника 
    if (cost1 <= 500) {
        salary = 200 + ((cost1*3)/100);
        cout << "\nЗарплата первого работника : "<< salary <<(char)36;
    }
    else if  (cost1>500 && cost1<1000) {
         salary = 200 + ((cost1*5)/100);
        cout << "\nЗарплата первого работника : " << salary << (char)36;
    }
    else  {
         salary = 200 + ((cost1*8)/100);
        cout << "\nЗарплата первого работника : " << salary << (char)36;
    }
    //Зарплата второго работника
    if (cost2 <= 500) {
         salary1 = 200 + ((cost2 * 3) / 100);
        cout << "\nЗарплата второго работника : " << salary1 << (char)36;
    }
    else if (cost2 > 500 && cost2 < 1000) {
         salary1 = 200 + ((cost2 * 5) / 100);
        cout << "\nЗарплата второго работника : " << salary1 << (char)36;
    }
    else {
         salary1 = 200 + ((cost2 * 8) / 100);
        cout << "\nЗарплата второго работника : " << salary1 << (char)36;
    }
    //Зарплата третьего работника 
    if (cost3 <= 500) {
         salary2 = 200 + ((cost3 * 3) / 100);
        cout << "\nЗарплата третьего работника : " << salary2 << (char)36;
    }
    else if (cost3 > 500 && cost3 < 1000) {
        salary2 = 200 + ((cost3 * 5) / 100);
        cout << "\nЗарплата третьего работника : " << salary2 << (char)36;
    }
    else {
        salary2 = 200 + ((cost3 * 8) / 100);
        cout << "\nЗарплата третьего работника : " << salary2 << (char)36;
    }
    int max_e = (salary>salary1) ? salary : salary1;
    int max_en = (salary2 > max_e) ? salary2 : max_e;
    int best_employ = 200 + max_en;
    if (cost1 > cost2 && cost2 > cost3 || cost1>cost3 && cost3>cost2) {
        mag = "Первый работник";
       cout << "\nЛучший работник :  " << mag << "\tДобавленная премия 200$ :  " << best_employ;
    }
    else if (cost2 > cost1 && cost1 > cost3 || cost2>cost3 &&cost3>cost1) {
        mag1 = "Второй работник";
        cout << "\nЛучший работник :  " << mag1 << "\tДобавленная премия 200$ :  " << best_employ;
    }
    else {
        mag2 = "Третий работник";
        cout << "\nЛучший работник :   " << mag2 << "\tДобавленная премия 200$ :  " << best_employ;

    }
    return 0;

}

