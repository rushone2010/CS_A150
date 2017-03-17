/*
	Reads quiz scores for each student into the
	two-dimensional array grade.
	Computes the average score for each student and
	the average score for each quiz.
	Displays the quiz scores and the averages.
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int NUMBER_STUDENTS = 4,
	      NUMBER_QUIZZES = 3;

void computeStAve(const int grade[][NUMBER_QUIZZES], double stAve[]);

void computeQuizAve(const int grade[][NUMBER_QUIZZES], double quizAve[]);

void display(const int grade[][NUMBER_QUIZZES],
             const double stAve[], const double quizAve[]);

int main()
{
  int grade[NUMBER_STUDENTS][NUMBER_QUIZZES];
  /*
  	Each row (NUMBER_STUDENTS) is a student.
  	Each column (NUMBER_QUIZZES) is a quiz.
  	The values represent the grade the student
  	has for each quiz.

  	Example:
  				Q1	Q2	Q3
  	STUDENT 1:	10	9	10
  	STUDENT 2:	8	9	10
  */

  double stAve[NUMBER_STUDENTS];
  /*
  	Each index represents the quiz average
  	for each student.

  	Example:
  		Index 0: Quiz average for student 1
  		Index 1: Quiz average for student 2
  		Index 2: Quiz average for student 3
  */

  double quizAve[NUMBER_QUIZZES];
  /*
  	Each index represents the student average
  	for each quiz.

  	Example:
  		Index 0: Students' average for quiz 1
  		Index 1: Students' average for quiz 2
  		Index 2: Students' average for quiz 3
  */

  grade[0][0] = 10; grade[0][1] = 10; grade[0][2] = 10;
  grade[1][0] = 2;  grade[1][1] = 0;  grade[1][2] = 1;
  grade[2][0] = 8;  grade[2][1] = 6;  grade[2][2] = 9;
  grade[3][0] = 8;  grade[3][1] = 4;  grade[3][2] = 10;

  computeStAve(grade, stAve);
  computeQuizAve(grade, quizAve);
  display(grade, stAve, quizAve);

  cout << endl;

  cin.ignore();
  cin.get();
  return 0;
}

void computeStAve(const int grade[][NUMBER_QUIZZES], double stAve[])
{
  for (int stNum = 1; stNum <= NUMBER_STUDENTS; stNum++) {
	//Process one stNum

    double sum = 0;

    for (int quizNum = 1; quizNum <= NUMBER_QUIZZES; ++quizNum)
             sum += grade[stNum-1][quizNum-1];

	//sum contains the sum of the quiz scores for student number stNum.

	stAve[stNum-1] = sum / NUMBER_QUIZZES;
  //Average for student stNum is the value of stAve[stNum-1]
  }
}

void computeQuizAve(const int grade[][NUMBER_QUIZZES], double quizAve[])
{
  for (int quizNum = 1; quizNum <= NUMBER_QUIZZES; ++quizNum) {
	//Process one quiz (for all students):

	double sum = 0;

	for (int stNum = 1; stNum <= NUMBER_STUDENTS; ++stNum)
           sum += grade[stNum-1][quizNum-1];

	//sum contains the sum of all student scores on quiz number quizNum.

	quizAve[quizNum-1] = sum / NUMBER_STUDENTS;
  //Average for quiz quizNum is the value of quizAve[quizNum-1]
  }
}

void display(const int grade[][NUMBER_QUIZZES],
             const double stAve[], const double quizAve[])
{
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);

  cout << setw(10) << "Student"
       << setw(5) << "Ave"
       << setw(15) << "Quizzes\n";
  for (int stNum = 1; stNum <= NUMBER_STUDENTS; ++stNum) {
	//Display for one stNum
    cout << setw(10) << stNum
         << setw(5) << stAve[stNum-1] << " ";

	for (int quizNum = 1; quizNum <= NUMBER_QUIZZES; ++quizNum)
    cout << setw(5) << grade[stNum-1][quizNum-1];

	cout << endl;
  }

  cout << "Quiz averages = ";

	for (int quizNum = 1; quizNum <= NUMBER_QUIZZES; ++quizNum)
    cout << setw(5) << quizAve[quizNum-1];

	cout << endl;
}
