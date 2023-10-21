#include <bits/stdc++.h>
using namespace std;

class projectile
{
private:
    long double u, v, h, t, R, Tf, v_angle, u_angle;
    const double g = 9.81;
    fstream datasolve;

public:
    void menu();
    void hprojectile();
    void fprojectile();
};

void projectile::menu()
{
m:
    int choice;

    cout << "\t\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t\t                                               \n";
    cout << "\t\t\t\t\t                     HKRM                      \n";
    cout << "\t\t\t\t\t              WELCOME PROFESSOR !              \n";
    cout << "\t\t\t\t\t                                               \n";
    cout << "\t\t\t\t\t              PROJECTILE SOLVER                \n";
    cout << "\t\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t\t                                               \n";
    cout << "\t\t\t\t\t|  1 . Projectile fired parallel to horizontl     |\n";
    cout << "\t\t\t\t\t|  2 . Full Projectile                            |\n";
    cout << "\t\t\t\t\t|  3 . Exit                                       |\n\n";
    cout << "\t\t\t\t\t     Please Select !  ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        hprojectile();
        break;

    case 2:
        fprojectile();
        break;

    case 3:
        exit(0);
        break;

    default:
        cout << "Please select from the givin option   ";
        break;
    }
    goto m;
}

void projectile::hprojectile()
{
    int choice;
    int var;
    datasolve.open("datasolve.txt", ios::app | ios::out);

    cout << "\t\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t\t                                               \n";
    cout << "\t\t\t\t\t    Projectile fired parallel to horizontl     \n";
    cout << "\t\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t\t_______________________________________________\n";
    datasolve << "\t\t____________________________________________________________\n";
    datasolve << "\t\t                                                            \n";
    datasolve << "\t\t           Projectile fired parallel to horizontl           \n";
    datasolve << "\t\t____________________________________________________________\n";
    datasolve << "\t\t____________________________________________________________\n\n";
m:
    cout << "\t\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t\t                                               \n";
    cout << "\t\t\t\t\t           Chosse From the below               \n";
    cout << "\t\t\t\t\t_______________________________________________\n\n\n";
    cout << "\t\t\t\t\t|  1 . Find 'Time of flight (Tf) '                               |\n";
    cout << "\t\t\t\t\t|  2 . Find 'Range(R)'                                           |\n";
    cout << "\t\t\t\t\t|  3 . Find 'Final velocity(v) just above the ground'            |\n";
    cout << "\t\t\t\t\t|  4 . Find 'Velocity(v) at time 't' '                           |\n";
    cout << "\t\t\t\t\t|  5 . Find 'Initial height(h) '                                 |\n";
    cout << "\t\t\t\t\t|  6 . Back to the main menu                                     |\n\n";
    cout << "\t\t\t\t\t     Please Select !  ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {

        cout << "\t\t\t\t\t  Find 'Time of flight (Tf) ' \n\n\n";
        datasolve << "\t\t\t\t\t  Find 'Time of flight (Tf) ' \n\n\n";
        cout << "\t\t\t\t\t  1 . If initial height is given   \n\n\n";
        cout << "\t\t\t\t\t  2 . If range and intial velocity is given \n\n\n";
        cout << "\t\t\t\t\t     Please Select !  ";
        cin >> var;
        if (var == 1)
        {
            cout << "\n\n\t\t\t\t\t  Enter the initial height (m):   ";
            cin >> h;
            Tf = sqrt(2 * h / g);
            datasolve << "\n\n\t\t\t\t\t  Enter the initial height (m): " << h << endl;
        }
        else if (var == 2)
        {
            cout << "\n\n\t\t\t\t\t  Enter the range (m):   ";
            cin >> R;
            cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
            cin >> u;
            Tf = R / u;
            datasolve << "\n\n\t\t\t\t\t  Enter the range (m): " << R << endl
                      << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s): " << u << endl;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t  Please select from the givin option   \n\n";
            goto m;
        }
        cout << "\n\n\t\t\t\t\t Time of Flight: " << Tf << " seconds\n\n";
        datasolve << "\n\n\t\t\t\t\t Time of Flight: " << Tf << " seconds\n\n";

        break;
    }
    case 2:
    {
        cout << "\t\t\t\t\t   Find 'Range(R)'  \n\n\n";
        datasolve << "\t\t\t\t\t   Find 'Range(R)'  \n\n\n";
        cout << "\t\t\t\t\t  1 . If initial height is given \n\n\n";
        cout << "\t\t\t\t\t  2 . If Time of Flight is given \n\n\n";
        cout << "\t\t\t\t\t     Please Select !  ";
        cin >> var;
        if (var == 1)
        {
            cout << "\n\n\t\t\t\t\t  Enter the initial height (m):   ";
            cin >> h;
            cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
            cin >> u;
            R = u * (sqrt(2 * h / g));
            datasolve << "\n\n\t\t\t\t\t  Enter the initial height (m): " << h << endl
                      << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s): " << u << endl;
        }
        else if (var == 2)
        {
            cout << "\n\n\t\t\t\t\t  Enter the Time of Flight (s):   ";
            cin >> Tf;
            cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
            cin >> u;
            R = Tf * u;
            datasolve << "\n\n\t\t\t\t\t  Enter the Time of Flight (s): " << Tf << endl
                      << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s): " << u << endl;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t  Please select from the givin option  \n\n\n ";
            goto m;
        }

        cout << "\n\n\t\t\t\t\t Range: " << R << " meters\n\n";
        datasolve << "\n\n\t\t\t\t\t Range: " << R << " meters\n\n";
        break;
    }
    case 3:
    {
        cout << "\t\t\t\t\t   Find 'Final velocity(v) just above the ground'  \n\n\n";
        datasolve << "\t\t\t\t\t   Find 'Final velocity(v) just above the ground'  \n\n\n";
        cout << "\n\n\t\t\t\t\t  Enter the initial height (m):   ";
        cin >> h;
        cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
        cin >> u;
        v = (sqrt(2 * g * h) - 4);
        cout << "\n\n\t\t\t\t\t Final velocity : " << v << " meters/sec\n\n";
        datasolve << "\n\n\t\t\t\t\t  Enter the initial height (m): " << h << endl
                  << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s): " << u << endl;
        datasolve << "\n\n\t\t\t\t\t Final velocity : " << v << " meters/sec\n\n";
        break;
    }
    case 4:
    {
        cout << "\t\t\t\t\t   Find 'Velocity(v),Vertical and Horisontal dis. and velocity angle at time 't' '  \n\n\n";
        datasolve << "\t\t\t\t\t   Find 'Velocity(v),Vertical and Horisontal dis. and velocity angle at time 't' '  \n\n\n";
        cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
        cin >> u;
        cout << "\n\n\t\t\t\t\t  Enter the time (s):   ";
        cin >> t;
        datasolve << "\n\n\t\t\t\t\t  Enter the time (s): " << t << endl
                  << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s): " << u << endl;
        v = u + g * t;
        if (v < 0)
        {
            cout << "\n\n\t\t\t\t\t  partical will be in rest afer time t : " << t << "sec\n\n";
            datasolve << "\n\n\t\t\t\t\t  partical will be in rest afer time t : " << t << "sec\n\n";
        }
        else
        {
            cout << "\n\n\t\t\t\t\t  velocity in y : " << v << " meters/sec\n\n";
            datasolve << "\n\n\t\t\t\t\t  velocity in y : " << v << " meters/sec\n\n";
            v = u;
            cout << "\n\n\t\t\t\t\t  velocity in x : " << v << " meters/sec\n\n";
            datasolve << "\n\n\t\t\t\t\t  velocity in x : " << v << " meters/sec\n\n";
            v_angle = atan(u / (u + g * t));
            cout << "\n\n\t\t\t\t\t velocity angle: " << v_angle << " radian\n\n";
            datasolve << "\n\n\t\t\t\t\t velocity angle: " << v_angle << " radian\n\n";
            ;
        }
        R = t * u;
        cout << "\n\n\t\t\t\t\t  horizontal distance : " << R << " meters\n\n";
        datasolve << "\n\n\t\t\t\t\t  horizontal distance : " << R << " meters\n\n";
        h = u * t + g * t * t / 2;
        cout << "\n\n\t\t\t\t\t  vertical height: " << R << " meters\n\n";
        datasolve << "\n\n\t\t\t\t\t  vertical height: " << R << " meters\n\n";
        break;
    }
    case 5:
    {
        cout << "\t\t\t\t\t  Find 'Initial height(h) ' \n\n\n";
        datasolve << "\t\t\t\t\t  Find 'Initial height(h) ' \n\n\n";
        cout << "\t\t\t\t\t  1 . If Time of flight is given   \n\n\n";
        cout << "\t\t\t\t\t  2 . If range and intial velocity is given \n\n\n";
        cout << "\t\t\t\t\t     Please Select !  ";
        cin >> var;
        if (var == 1)
        {
            cout << "\n\n\t\t\t\t\t  Enter the Time of flight (s):   ";
            cin >> Tf;
            h = pow(Tf, 2) * g / 2;
            datasolve << "\n\n\t\t\t\t\t  Enter the Time of flight (s):   " << Tf << endl;
        }
        else if (var == 2)
        {
            cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
            cin >> u;
            cout << "\n\n\t\t\t\t\t  Enter the range (m):   ";
            cin >> R;
            h = pow(R / u, 2) * g / 2;
            datasolve << "\n\n\t\t\t\t\t  Enter the range (m): " << R << endl
                      << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s): " << u << endl;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t  Please select from the givin option   \n\n\n";
            goto m;
        }
        cout << "\n\n\t\t\t\t\t Initial height : " << h << " meter\n\n";
        datasolve << "\n\n\t\t\t\t\t Initial height : " << h << " meter\n\n";
        break;
    }
    case 6:
        menu();
        break;
    default:
        cout << "\n\n\t\t\t\t\t  Please select from the givin option   \n\n\n";
    }
    datasolve.close();
    goto m;
}
void projectile::fprojectile()
{
    int choice;
    int var;
    datasolve.open("datasolve.txt", ios::app | ios::out);

    cout << "\t\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t\t                                               \n";
    cout << "\t\t\t\t\t              Full Projectile                  \n";
    cout << "\t\t\t\t\t_______________________________________________\n";
    datasolve << "\t\t__________________________________________________________\n";
    datasolve << "\t\t                                                          \n";
    datasolve << "\t\t                     Full Projectile                      \n";
    datasolve << "\t\t__________________________________________________________\n";
    datasolve << "\t\t__________________________________________________________\n\n";
m:
    cout << "\t\t\t\t\t_______________________________________________\n";
    cout << "\t\t\t\t\t                                               \n";
    cout << "\t\t\t\t\t           Chosse From the below               \n";
    cout << "\t\t\t\t\t_______________________________________________\n\n\n";
    cout << "\t\t\t\t\t|  1 . Find 'Time of flight (Tf) '                               |\n";
    cout << "\t\t\t\t\t|  2 . Find 'Range(R)'                                           |\n";
    cout << "\t\t\t\t\t|  3 . Find 'Max. Height(hm)'                                    |\n";
    cout << "\t\t\t\t\t|  4 . Find 'Velocity(v) and velocity angle at time 't' '        |\n";
    cout << "\t\t\t\t\t|  5 . Find 'time to reach max. height(tm) '                     |\n";
    cout << "\t\t\t\t\t|  6 . Back to the main menu                                     |\n\n";
    cout << "\t\t\t\t\t     Please Select !  ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "\t\t\t\t\t  Find 'Time of flight (Tf) ' \n\n\n";
        datasolve << "\t\t\t\t\t  Find 'Time of flight (Tf) ' \n\n\n";
        cout << "\t\t\t\t\t  1 . If max height is given   \n\n\n";
        cout << "\t\t\t\t\t  2 . If range and angle  of projection is given \n\n\n";
        cout << "\t\t\t\t\t  3 . If initial velocity and angle of projection is given   \n\n\n";
        cout << "\t\t\t\t\t  4 . If tm is given \n\n\n";
        cout << "\t\t\t\t\t     Please Select !  ";
        cin >> var;

        if (var == 1)
        {
            cout << "\n\n\t\t\t\t\t  Enter the hm (m):   ";
            cin >> h;
            Tf = sqrt(h * 8 * g);
            datasolve << "\n\n\t\t\t\t\t  Enter the hm (m): " << h << endl;
        }
        else if (var == 2)
        {
            cout << "\n\n\t\t\t\t\t  Enter the range (m):   ";
            cin >> R;
            cout << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees):   ";
            cin >> u_angle;
            Tf = R * 2 * tan(u_angle) / g;
            datasolve << "\n\n\t\t\t\t\t  Enter the range (m): " << R << endl
                      << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees): " << u_angle << endl;
        }
        else if (var == 3)
        {
            cout << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees):   ";
            cin >> u_angle;
            cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
            cin >> u;
            Tf = 2 * u * sin(u_angle) / g;
            datasolve << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s): " << u << endl
                      << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees): " << u_angle << endl;
        }
        else if (var == 4)
        {
            cout << "\n\n\t\t\t\t\t  Enter the tm (s):   ";
            cin >> t;
            Tf = 2 * t;
            datasolve << "\n\n\t\t\t\t\t  Enter the tm (s): " << t << endl;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t  Please select from the givin option   \n\n\n";
            goto m;
        }
        cout << "\n\n\t\t\t\t\t Time of Flight: " << Tf << " seconds\n\n";
        datasolve << "\n\n\t\t\t\t\t Time of Flight: " << Tf << " seconds\n\n";
        break;
    }
    case 2:
    {
        cout << "\t\t\t\t\t  Find 'Range(R)'  \n\n\n";
        datasolve << "\t\t\t\t\t  Find 'Range(R)'  \n\n\n";
        cout << "\t\t\t\t\t  1 . If max height and angle  of projection is given   \n\n\n";
        cout << "\t\t\t\t\t  2 . If Tf and angle  of projection is given \n\n\n";
        cout << "\t\t\t\t\t  3 . If initial velocity and angle of projection is given   \n\n\n";
        cout << "\t\t\t\t\t     Please Select !  ";
        cin >> var;
        if (var == 1)
        {
            cout << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees):   ";
            cin >> u_angle;
            cout << "\n\n\t\t\t\t\t  Enter the max. height (m):   ";
            cin >> h;
            R = 2 * h / tan(u_angle);
            datasolve << "\n\n\t\t\t\t\t  Enter the max. height (m):  " << h << endl
                      << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees): " << u_angle << endl;
        }
        else if (var == 2)
        {
            cout << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees):   ";
            cin >> u_angle;
            cout << "\n\n\t\t\t\t\t  Enter the Time of Flight (s):   ";
            cin >> Tf;
            R = Tf * g / (2 * tan(u_angle));
            datasolve << "\n\n\t\t\t\t\t  Enter the Time of Flight (s):  " << Tf << endl
                      << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees): " << u_angle << endl;
        }
        else if (var == 3)
        {
            cout << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees):   ";
            cin >> u_angle;
            cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
            cin >> u;
            R = u * u * sin(2 * u_angle) / g;
            datasolve << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):  " << u << endl
                      << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees): " << u_angle << endl;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t  Please select from the givin option   \n\n\n";
            goto m;
        }
        cout << "\n\n\t\t\t\t\t Range: " << R << " meters\n\n";
        datasolve << "\n\n\t\t\t\t\t Range: " << R << " meters\n\n";
        break;
    }
    case 3:
    {
        cout << "\t\t\t\t\t  Find 'Max. Height(hm)' \n\n\n";
        datasolve << "\t\t\t\t\t  Find 'Max. Height(hm)' \n\n\n";
        cout << "\t\t\t\t\t  1 . If Tf is given   \n\n\n";
        cout << "\t\t\t\t\t  2 . If range and angle  of projection is given \n\n\n";
        cout << "\t\t\t\t\t  3 . If initial velocity and angle of projection is given   \n\n\n";
        cout << "\t\t\t\t\t  4 . If tm is given \n\n\n";
        cout << "\t\t\t\t\t     Please Select !  ";
        cin >> var;
        if (var == 1)
        {
            cout << "\n\n\t\t\t\t\t  Enter the Time of flight (s):   ";
            cin >> Tf;
            h = Tf * Tf / (8 * g);
            datasolve << "\n\n\t\t\t\t\t  Enter the Time of flight (s): " << Tf << endl;
        }
        else if (var == 2)
        {
            cout << "\n\n\t\t\t\t\t  Enter the range (m):   ";
            cin >> R;
            cout << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees):   ";
            cin >> u_angle;
            h = R * tan(u_angle) / 2;
            datasolve << "\n\n\t\t\t\t\t  Enter the range (m):  " << R << endl
                      << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees): " << u_angle << endl;
        }
        else if (var == 3)
        {
            cout << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees):   ";
            cin >> u_angle;
            cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
            cin >> u;
            h = u * u * pow(sin(u_angle), 2) / (2 * g);
            datasolve << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):  " << u << endl
                      << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees): " << u_angle << endl;
        }
        else if (var == 4)
        {
            cout << "\n\n\t\t\t\t\t  Enter the tm (s):   ";
            cin >> t;
            h = t * t / (2 * g);
            datasolve << "\n\n\t\t\t\t\t  Enter the tm (s): " << t << endl;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t  Please select from the givin option   \n\n\n";
            goto m;
        }
        cout << "\n\n\t\t\t\t\t max. height : " << h << " meter\n\n";
        datasolve << "\n\n\t\t\t\t\t max. height : " << h << " meter\n\n";

        break;
    }
    case 4:
    {
        cout << "\t\t\t\t\t   Find 'Velocity(v) and velocity angle at time 't' '  \n\n\n";
        datasolve << "\t\t\t\t\t   Find 'Velocity(v) and velocity angle at time 't' '  \n\n\n";
        cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
        cin >> u;
        cout << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees):   ";
        cin >> u_angle;
        cout << "\n\n\t\t\t\t\t  Enter the time (s):   ";
        cin >> t;
        datasolve << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):  " << u << endl
                  << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees): " << u_angle << endl
                  << "\n\n\t\t\t\t\t  Enter the time (s):  " << t << endl;
        v = u * sin(u_angle) - g * t;
        if (v < 0)
        {
            cout << "\n\n\t\t\t\t\t  partical will be in rest afer time t : " << t << "sec\n\n";
            datasolve << "\n\n\t\t\t\t\t  partical will be in rest afer time t : " << t << "sec\n\n";
        }
        else
        {
            cout << "\n\n\t\t\t\t\t  velocity in y : " << v << " meters/sec\n\n";
            datasolve << "\n\n\t\t\t\t\t  velocity in y : " << v << " meters/sec\n\n";
            v = u * cos(u_angle);
            cout << "\n\n\t\t\t\t\t  velocity in x : " << v << " meters/sec\n\n";
            datasolve << "\n\n\t\t\t\t\t  velocity in x : " << v << " meters/sec\n\n";
            v_angle = atan(u * sin(u_angle) - g * t / (u * cos(u_angle)));
            cout << "\n\n\t\t\t\t\t velocity angle: " << v_angle << " radian\n\n";
            datasolve << "\n\n\t\t\t\t\t velocity angle: " << v_angle << " radian\n\n";
        }
        break;
    }
    case 5:
    {
        cout << "\t\t\t\t\t  Find 'time to reach max. height(tm)' \n\n\n";
        datasolve << "\t\t\t\t\t  Find 'time to reach max. height(tm)' \n\n\n";
        cout << "\t\t\t\t\t  1 . If Tf is given   \n\n\n";
        cout << "\t\t\t\t\t  2 . If range and angle  of projection is given \n\n\n";
        cout << "\t\t\t\t\t  3 . If initial velocity and angle of projection is given   \n\n\n";
        cout << "\t\t\t\t\t  4 . If hm is given \n\n\n";
        cout << "\t\t\t\t\t     Please Select !  ";
        cin >> var;
        if (var == 1)
        {
            cout << "\n\n\t\t\t\t\t  Enter the Time of flight (s):   ";
            cin >> Tf;
            t = Tf / 2;
            datasolve << "\n\n\t\t\t\t\t Enter the Time of flight (s):   " << Tf << endl;
        }
        else if (var == 2)
        {
            cout << "\n\n\t\t\t\t\t  Enter the range (m):   ";
            cin >> R;
            cout << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees):   ";
            cin >> u_angle;
            t = R * tan(u_angle) / g;
            datasolve << "\n\n\t\t\t\t\t  Enter the range (m):  " << R << endl
                      << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees): " << u_angle << endl;
        }
        else if (var == 3)
        {
            cout << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees):   ";
            cin >> u_angle;
            cout << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):   ";
            cin >> u;
            t = u * sin(u_angle) / g;
            datasolve << "\n\n\t\t\t\t\t  Enter the initial velocity (m/s):  " << u << endl
                      << "\n\n\t\t\t\t\t  Enter the angle  of projection (radian or degrees): " << u_angle << endl;
        }
        else if (var == 4)
        {
            cout << "\n\n\t\t\t\t\t  Enter the hm (m):   ";
            cin >> h;
            t = sqrt(2 * h * g);
            datasolve << "\n\n\t\t\t\t\t Enter the hm (m):   " << h << endl;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t  Please select from the givin option   \n\n\n";
            goto m;
        }
        cout << "\n\n\t\t\t\t\t time to reach max. height(tm) : " << t << " sec\n\n";
        datasolve << "\n\n\t\t\t\t\t time to reach max. height(tm) : " << t << " sec\n\n";
        break;
    }
    case 6:
    {
        menu();
        break;
    }
    default:
        cout << "\n\n\t\t\t\t\t  Please select from the givin option   \n\n\n";
        break;
    }
    datasolve.close();
    goto m;
}

int main()
{
    projectile p;
    p.menu();
    return 0;
}