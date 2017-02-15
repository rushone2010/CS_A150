// Reads in 5 scores and shows how much each
// score differs from the highest score.

#include <iostream>
using namespace std;

const int CAP = 5;

int main( )
{
    int score[CAP];

    cout << "Enter 5 scores:\n";
    cin >> score[0];

    int max = score[0];
    for (int i = 1; i < 5; i++) //note that the loop starts at 1
    {
        cin >> score[i];
        if (score[i] > max)
            max = score[i];
        //max is the largest of the values score[0],..., score[i].
    }

    cout << "The highest score is " << max << endl
         << "The scores and their\n"
         << "differences from the highest are:\n";
    for (int i = 0; i < 5; i++)
        cout << score[i] << " off by " << (max - score[i]) << endl;

	cout << endl;
    return 0;
}
