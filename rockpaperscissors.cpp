// John Anthony Trevino 02-15-16
// Rock/Paper/Scissors Game 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int comm, user, game;
    unsigned seed;
    seed = time(0);
    srand(seed);
    
    comm = rand() % 3 + 1;
    
cout << "Rock/Paper/Scissors\n\n";
cout << "1. Rock 2. Paper 3. Scissors\n\n";
cout << "Enter choice: ";
cin >> user;

//cout << comm <<"\n"; for debugging

game = user + comm;

//cout << game; debug for debugging

// user 
if (user == 1)
{
	cout << "\nRock\n\n\n";
}
else if (user == 2)
{
	cout << "\nPaper\n\n\n";
}
else if (user == 3)
{
	cout << "\nScissors\n\n\n";
}
// comm 
if (comm == 1)
{
	cout << "Rock\n\n\n";
}
else if (comm == 2)
{
	cout << "Paper\n\n\n";
}
else if (comm == 3)
{
	cout << "Scissors\n\n\n";
}

//game if statements
if (game == 3 && user == 2)
{
	cout << "You Win!\nPaper beats Rock\n\n\n";
}
else if (game == 5 && user == 3)
{
	cout << "You Win!\nScissors beats Paper\n\n\n";
}
else if (game == 4 && user == 1)
{
	cout << "You Win!\nRock beats Scissors\n\n\n";
}
else if (game == 5 && user == 2)
{
	cout << "You Lose!\nScissors beats Paper\n\n\n";
}
else if (game == 3 && user == 1)
{
	cout << "You Lose!\nPaper beats Rock\n\n\n";
}
else if (game == 4 && user == 3)
{
	cout << "You Lose!\nRock beats Scissors\n\n\n";
}
else
{
	cout << "Tie\n\n\n";
}
return 0;
     

}
