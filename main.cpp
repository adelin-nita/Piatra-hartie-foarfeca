#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

const char PIATRA = 'p';
const char HARTIE = 'h';
const char FOARFECA = 'f';

char alegeOptiuneCalculator()
{
    srand(time(NULL));
    int num = (rand() % 3) + 1;
    if (num == 1)
        return 'p';
     if (num == 2)
        return 'h';
    return 'f';
}
void arataRezultatul(char miscareJucator, char miscareCalculator)
{
    if (miscareCalculator == miscareJucator)
        cout << "Egalitate! Joaca din nou!" << endl;
    if (miscareJucator == PIATRA && miscareCalculator == HARTIE)
        cout << "Ai castigat! Hartia bate piatra" << endl;
    if (miscareJucator == PIATRA && miscareCalculator == FOARFECA)
        cout << "Ai piedut! Piatra bate foarfeca" << endl;
    if (miscareJucator == FOARFECA && miscareCalculator == PIATRA)
        cout << "Ai castigat! Piatra bate foarfeca" << endl;
    if (miscareJucator == FOARFECA && miscareCalculator == HARTIE)
        cout << "Ai pierdut! Foarfeca bate hartia" << endl;
    if (miscareJucator == HARTIE && miscareCalculator == PIATRA)
        cout << "Ai pierdut! Hartia bate piatra" << endl;
    if (miscareJucator == HARTIE && miscareCalculator == FOARFECA)
        cout << "Ai castigat! Foarfeca bate hartia" << endl;

}
char alegeOptiuneJucator()
{
    char c;
    cout << "Piatra, Hartie, Foarfeca" << endl;
    cout << "Alege una dintre urmatoarele optiuni" << endl;
    cout << "_____________" << endl;
    cout << "(p) pentru piatra" << endl << "(h) pentru hartie" << endl << "(f) pentru foarfeca" << endl;
    cin >> c;

    while (c != 'p' && c != 'h' && c != 'f')
    {
        cout << "Alege una dintre urmatoarele optiuni!" << endl;
        cout << "(p) pentru piatra" << endl << "(h) pentru hartie" << endl << "(f) pentru foarfeca" << endl;
        cin >> c;
    }
    return c;
}
void arataOptiunea(char optiune)
{
    if (optiune == PIATRA)
        cout << "Piatra" << endl;
    if (optiune == FOARFECA)
        cout << "Foarfeca" << endl;
    if (optiune == HARTIE)
        cout << "Hartie" << endl;
}

int main()
{
    char alegereC, alegereJ;
    alegereJ = alegeOptiuneJucator();
    alegereC = alegeOptiuneCalculator();
    cout << "ai ales:" << endl;
    arataOptiunea(alegereJ);
    cout << "utilizatorul a ales:" << endl;
    arataOptiunea(alegereC);
    arataRezultatul(alegereC, alegereJ);

    return 0;
    

}