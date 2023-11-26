#include <windows.h>
#include <stdio.h>

int quarter = 526;
int dotted_quarter = 789;
int eight = 263;
int sixtenth = 132;
int dotted_eight = 198;
double f4 = 349.23;
double g4 = 392.00;
double c4 = 261.63;
double a4 = 440.00;
double c5 = 523.25;
double b4 = 493.88;
double d4 = 293.66;
double e4 = 329.63;


int main()
{
    Beep(349.23, 789); //f4 dotted quarter
    Beep(392.00, 789); //g4 dotted quarter
    Beep(261.63, 526); //c4 quarter
    Beep(392.00, 789); //g4 dotted quarter
    Beep(440.00, dotted_quarter);
    Beep(c5, sixtenth);
    Beep(b4, sixtenth);
    Beep(a4, eight);
    Beep(f4,dotted_quarter);
    Beep(g4, dotted_quarter);
    Beep(c4, quarter + dotted_quarter);
    Sleep(quarter);
    Beep(c4, eight);
    Beep(c4, eight);
    Beep(d4, eight);
    Beep(f4, eight);
    Beep(f4, eight);

    Beep(349.23, 789); //f4 dotted quarter
    Beep(392.00, 789); //g4 dotted quarter
    Beep(261.63, 526); //c4 quarter
    Beep(392.00, 789); //g4 dotted quarter
    Beep(440.00, dotted_quarter);
    Beep(c5, sixtenth);
    Beep(b4, sixtenth);
    Beep(a4, eight);
    Beep(f4,dotted_quarter);
    Beep(g4, dotted_quarter);
    Beep(c4, quarter + dotted_quarter);
    Sleep(quarter);
    Beep(c4, eight);
    Beep(c4, eight);
    Beep(d4, eight);
    Beep(f4, eight);
    Beep(f4, eight);
   
    Sleep(quarter);
    Beep(d4, eight);
    Beep(e4, eight);
    Beep(f4, eight);
    Beep(f4, eight);
    Beep(g4, eight);
    Beep(e4, quarter);

    Beep(d4, sixtenth);
    Beep(c4, quarter);
    Sleep(quarter);

    Sleep(eight);
    Beep(d4, eight);
    Beep(d4, eight);
    Beep(e4, eight);
    Beep(f4, eight);
    Beep(d4, eight);
    Beep(c4, quarter);

    Beep(c5, eight);
    Sleep(eight);
    Beep(c5, eight);
    Sleep(eight);
    Beep(g4, dotted_quarter);
    Sleep(eight);

    Beep(d4, eight);
    Beep(d4, eight);
    Beep(e4, eight);
    Beep(f4, eight);
    Beep(d4, eight);
    Beep(f4, eight);
    Beep(g4, eight);
    Sleep(quarter);

    Beep(e4, eight);
    Beep(d4, eight);
    Beep(c4, dotted_quarter);
    Sleep(quarter);

    Sleep(eight);
    Beep(d4, eight);
    Beep(d4, eight);
    Beep(e4, eight);
    Beep(f4, eight);
    Beep(d4, eight);
    Beep(c4, quarter);

    Beep(g4, eight);
    Beep(g4, eight);
    Beep(g4, eight);
    Beep(a4, eight);
    Beep(g4, quarter);
    Sleep(quarter);

    Beep(f4, eight * 5);
    Beep(g4, eight);
    Beep(a4, eight);
    Beep(f4, eight);

    Beep(g4, eight);
    Beep(g4, eight);
    Beep(g4, eight);
    Beep(a4, eight);
    Beep(g4, quarter);
    Beep(c4, quarter);

    Sleep(quarter * 2);
    Beep(d4, eight);
    Beep(e4, eight);
    Beep(f4, eight);
    Beep(d4, eight);

    Sleep(eight);
    Beep(f4, eight);
    Beep(a4, eight);
    Beep(g4, dotted_quarter);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(a4, dotted_eight);
    Beep(a4, dotted_eight);
    Beep(g4, dotted_quarter);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(g4, dotted_eight);
    Beep(g4, dotted_eight);
    Beep(f4, dotted_eight);
    Beep(e4, sixtenth);
    Beep(d4, eight);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(f4, quarter);
    Beep(g4, eight);
    Beep(e4, dotted_eight);
    Beep(d4, sixtenth);
    Beep(c4, eight);
    Beep(g4, eight);
    Beep(g4, eight);

    Beep(g4, quarter);
    Beep(f4, quarter * 2);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(a4, dotted_eight);
    Beep(a4, dotted_eight);
    Beep(g4, dotted_quarter);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(c5, quarter);
    Beep(e4, eight);
    Beep(f4, dotted_eight);
    Beep(e4, sixtenth);
    Beep(d4, eight);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(f4, quarter);
    Beep(g4, eight);
    Beep(e4, dotted_eight);
    Beep(d4, sixtenth);
    Beep(c4, eight);
    Beep(g4, eight);
    Beep(g4, eight);

    Beep(g4, quarter);
    Beep(f4, quarter * 2);
    Sleep(quarter);

    Sleep(eight);
    Beep(d4, eight);
    Beep(f4, eight);
    Beep(d4, eight);
    Beep(f4, sixtenth);
    Beep(g4, eight);
    Sleep(eight);

    Sleep(eight);
    Beep(e4, eight);
    Beep(d4, eight);
    Beep(c4, dotted_quarter);
    Sleep(quarter);

    Sleep(eight);
    Beep(d4, eight);
    Beep(d4, eight);
    Beep(e4, eight);
    Beep(f4, eight);
    Beep(d4, eight);
    Beep(c4, eight);

    Sleep(eight);
    Beep(c5, eight);
    Beep(c5, eight);
    Beep(g4, quarter);
    Beep(a4, eight);
    Beep(g4, eight);
    Beep(f4, eight);

    Sleep(eight);
    Beep(d4, eight);
    Beep(f4, eight);
    Beep(d4, eight);
    Beep(f4, eight);
    Beep(d4, eight);
    Beep(f4, eight);
    Beep(g4, eight);

    Sleep(eight);
    Beep(e4, eight);
    Beep(d4, eight);
    Beep(c4, dotted_eight);
    Sleep(quarter);

    Beep(d4, eight);
    Beep(d4, eight);
    Beep(e4, eight);
    Beep(f4, eight);
    Beep(d4, quarter);
    Beep(c4, quarter);
    Sleep(eight);

    Sleep(eight);
    Beep(g4, eight);
    Beep(g4, eight);
    Beep(a4, quarter);
    Beep(g4, dotted_quarter);

    Beep(f4, quarter * 2 + eight);
    Beep(g4, eight);
    Beep(a4, eight);
    Beep(g4, quarter);

    Beep(g4, eight);
    Beep(g4, eight);
    Beep(a4, eight);
    Beep(g4, eight);
    Beep(c4, eight);
    Beep(c4, quarter);

    Sleep(dotted_quarter);
    Beep(c4, eight);
    Beep(d4, eight);
    Beep(e4, eight);
    Beep(f4, eight);
    Beep(d4, eight);

    Sleep(eight);
    Beep(g4, eight);
    Beep(a4, eight);
    Beep(g4, dotted_quarter);
    Beep(c4, eight);
    Beep(d4, eight);
    Beep(f4, eight);
    Beep(d4, eight);

    Beep(a4, dotted_eight);
    Beep(a4, dotted_eight);
    Beep(g4, dotted_quarter);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(g4, dotted_eight);
    Beep(g4, dotted_eight);
    Beep(f4, dotted_eight);
    Beep(e4, sixtenth);
    Beep(d4, eight);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(f4, quarter);
    Beep(g4, eight);
    Beep(e4, dotted_eight);
    Beep(d4, sixtenth);
    Beep(c4, eight);
    Beep(c4, sixtenth);

    Beep(g4, quarter);
    Beep(f4, quarter * 2);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(a4, dotted_eight);
    Beep(a4, dotted_eight);
    Beep(g4, dotted_quarter);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(c5, quarter);
    Beep(e4, eight);
    Beep(f4, dotted_eight);
    Beep(e4, sixtenth);
    Beep(c4, quarter);
    Beep(c4, sixtenth);

    Beep(g4, eight);
    Beep(f4, quarter * 2);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(a4, dotted_eight);
    Beep(a4, dotted_eight);
    Beep(g4, dotted_quarter);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(g4, dotted_eight);
    Beep(g4, dotted_eight);
    Beep(f4, dotted_eight);
    Beep(e4, sixtenth);
    Beep(d4, eight);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(f4, quarter);
    Beep(g4, eight);
    Beep(e4, dotted_eight);
    Beep(d4, sixtenth);
    Beep(c4, eight);
    Beep(c4, eight);
    Beep(c4, eight);

    Beep(g4, quarter);
    Beep(f4, quarter * 2);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(a4, dotted_eight);
    Beep(a4, dotted_eight);
    Beep(g4, dotted_quarter);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(g4, dotted_eight);
    Beep(g4, dotted_eight);
    Beep(f4, dotted_eight);
    Beep(e4, sixtenth);
    Beep(d4, eight);
    Beep(c4, sixtenth);
    Beep(d4, sixtenth);
    Beep(f4, sixtenth);
    Beep(d4, sixtenth);

    Beep(f4, quarter);
    Beep(g4, eight);
    Beep(e4, dotted_quarter);
    Beep(d4, sixtenth);
    Beep(c4, eight);
    Beep(c4, sixtenth);

    Beep(g4, quarter);
    Beep(f4, quarter * 2);
    Sleep(quarter);
   
    return 0;
}   
