#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int worker_type=0;
    double wage_manager;
    double hours_worked;
    double hourly_wage;
    double manager_pay = 0;
    double hourly_worker_wage;
    double piece_worker_salary;
    int piece_count = 0;
    double weekly_sales;
    double piece_pay = 0;
    double weekly_salary;
    double pieces_produced;
    double hourly_pay = 0;
    double value_a_piece;
    int manager_count = 0;
    double manager_wage;
    double commission_pay = 0;
    int hourly_count = 0;
    int commission_count = 0;
    double commission_worker_salary;
    double hours = 40;


   // cin >> worker_type;

    while (worker_type != -1) {  //
        cin >> worker_type;

        switch (worker_type) {
            case 1:
                cin >> manager_wage;
                manager_pay += manager_wage;
                manager_count++;
                break; //

            case 2:
                cin >> hours_worked >> hourly_wage;
                hourly_count++;

                if (hours_worked > hours) {
                    hourly_worker_wage = (hours_worked - hours) * (hourly_wage) * (1.5) + hours * hourly_wage;
                } else {  //
                    hourly_worker_wage = hours_worked * hourly_wage;
                }
                hourly_pay += hourly_worker_wage;
                break; //

            case 3:
                cin >> weekly_sales;
                commission_count++;
                commission_worker_salary = 250 + 0.057 * weekly_sales;
                commission_pay += commission_worker_salary;
                break; //

            case 4:
                cin >> pieces_produced >> value_a_piece;
                piece_count++;
                piece_worker_salary = value_a_piece * pieces_produced;
                piece_pay += piece_worker_salary;
                break; //

            case -1:
                break;

            default:
                return 1;
                break;
        }
    }
    cout<<fixed<<showpoint<<setprecision(2);
    cout << "Summary\n";

    cout << "Worker Type    Number      Total Pay\n";
    cout << "====================================\n";

    cout << "Manager        ";
    cout << setw(4) <<manager_count;
    cout << "       ";
    cout << setprecision (2) << setw(9) << manager_pay;
    cout << endl;

    cout << "Hourly         ";
    cout << setw(4) << hourly_count;
    cout << "       ";
    cout << setprecision (2) << setw(9) << hourly_pay;
    cout << endl;

    cout << "Commission     ";
    cout << setw(4) << commission_count;
    cout << "       ";
    cout << setprecision (2) << setw(9) << commission_pay;
    cout << endl;

    cout << "Piece          ";
    cout << setw(4) << piece_count;
    cout << "       ";
    cout << setprecision (2) << setw(9) << piece_pay;
    cout << endl;

    cout << "====================================\n";
    cout << "TOTAL          ";
    cout << setw(4);
    cout << manager_count + hourly_count+ commission_count + piece_count;
    cout << "       ";
    cout << setprecision (2) << setw(9);
    cout << manager_pay + hourly_pay + commission_pay+ piece_pay;
    cout << endl;

}