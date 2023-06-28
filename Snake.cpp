#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <sstream>
#define ADMIN 50
using std::string;

bool GameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
int iScore;
string FileAddres[4], FileWithAddres[4];
string IntFileAddres[4];
string CurrentUser;
int HighestScoreF[4];
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void UserCheck(string str);

void Setup()
{	
	GameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand()% width;
	fruitY = rand()% height;
	score = 0;
}

void Draw()
{
	system("cls");
	
	for (int i=0; i < width+2; i++) std::cout<<"#";
	std::cout<<std::endl;
	
	for (int i=0; i < height; i++){
		for (int j=0; j < width; j++){
			
			if (j == 0) std::cout<<"#";
			
			if (i == y && j == x) std::cout<<"O";
			
			else if (i == fruitY && j == fruitX) std::cout<<"F";
						
			else {
			bool print = false;
			for (int k=0; k < nTail; k++)
			{
				if (tailX[k] == j && tailY[k] == i){
					std::cout<<"o";
					print = true;
				}
			}
				if (!print) std::cout<<" ";
		}
			if (j == width - 1) std::cout<<"#";
		}		
		std::cout<<std::endl;
	}
	
	
	for (int i=0; i < width+2; i++) std::cout<<"#";
	std::cout<<std::endl;
	
	std::cout<<"User: "<<CurrentUser<<"\n";
	std::cout<<"Score: "<<score<<"\n";
	std::cout<<"Highest score: "<<HighestScoreF[iScore]<<"\n"; // fix here
}

void Input()
{
	if (_kbhit()){
		
		switch (_getch()){
			
			case 'a':
				dir = LEFT;
				break;
			case 'd':
				dir = RIGHT;	
				break;
			case 'w':
				dir = UP;
				break;
			case 's':
				dir = DOWN;
				break;
			case 'x':
				GameOver = true;
				break;
		}
	}
}

void Logic()
{
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;
	for (int i = 1; i < nTail; i++){
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (dir){
		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
			break;
		case UP:
			y--;
			break;
		case DOWN:
			y++;
			break;
		default:
			break;
	}
	//this is the wall colition
	//if (x > width || x < 0 || y > height || y < 0) GameOver = true;
	
	//this make no wall colitions
	if (x >= width) x = 0; else if (x < 0) x = width - 1;
	if (y >= height) y = 0; else if (y < 0) y = height - 1;
	
	for (int i=0; i < nTail; i++) if (tailX[i] == x && tailY[i] == y) GameOver = true;
	
	if (x == fruitX && y == fruitY){
		score++;
		fruitX = rand()% width;
		fruitY = rand()% height;
		nTail++;
	}
}

void user() 
{	
	string answare1;
	
	std::ifstream readInt0("SnakeUser0Score.txt");
	while (getline (readInt0, IntFileAddres[0])){
		std::stringstream pass;
		pass << IntFileAddres[0];
		pass >> HighestScoreF[0];
	}
	readInt0.close();

	std::ifstream read0("SnakeUser0.txt");
	while (getline (read0, FileAddres[0])){
		FileWithAddres[0] = FileAddres[0];
	}
	read0.close();
	
	std::ifstream readInt1("SnakeUser1Score.txt");
	while (getline (readInt1, IntFileAddres[1])){
		std::stringstream pass;
		pass << IntFileAddres[1];
		pass >> HighestScoreF[1];
	}
	readInt1.close();
	
	std::ifstream read1("SnakeUser1.txt");
	while (getline (read1, FileAddres[1])){
		FileWithAddres[1] = FileAddres[1];
	}
	read1.close();
	
	std::ifstream readInt2("SnakeUser2Score.txt");
	while (getline (readInt2, IntFileAddres[2])){
		std::stringstream pass;
		pass << IntFileAddres[2];
		pass >> HighestScoreF[2];
	}
	readInt2.close();
	
	std::ifstream read2("SnakeUser2.txt");
	while (getline (read2, FileAddres[2])){
		FileWithAddres[2] = FileAddres[2];
	}
	read2.close();
	
	std::ifstream readInt3("SnakeUser3Score.txt");
	while (getline (readInt3, IntFileAddres[3])){
		std::stringstream pass;
		pass << IntFileAddres[3];
		pass >> HighestScoreF[3];
	}
	readInt3.close();
	
	std::ifstream read3("SnakeUser3.txt");
	while (getline (read3, FileAddres[3])){
		FileWithAddres[3] = FileAddres[3];
	}
	read3.close();
	
	
	std::cout<<"\n   Select a user by writing its name, if it is empty write empty and the follow number\n";
	std::cout<<"   (*EXAMPLE* empty_1)\n\n";
	
	if (FileWithAddres[0] == ""){
		std::cout<<" Empty user 1\n"; 
		iScore = 0;	
	}
	else {
		std::cout<<"  "<<FileWithAddres[0]<<" Score = "<<HighestScoreF[0]<<"\n";
		iScore = 0;
	}
	
	if (FileWithAddres[1] == ""){
		std::cout<<" Empty user 2\n";
		iScore = 1;
	}
	else {
		std::cout<<"  "<<FileWithAddres[1]<<" Score = "<<HighestScoreF[1]<<"\n";
		iScore = 1;
	}	
	
	if (FileWithAddres[2] == ""){
		std::cout<<" Empty user 3\n";
		iScore = 2;
	}
	else {
		std::cout<<"  "<<FileWithAddres[2]<<" Score = "<<HighestScoreF[2]<<"\n";
		iScore = 2;
	}
	
	if (FileWithAddres[3] == ""){
		std::cout<<" Empty user 4\n";
		iScore = 3;
	}
	else {
	std::cout<<"  "<<FileWithAddres[3]<<" Score = "<<HighestScoreF[3]<<"\n";
	iScore = 3;
	}
	
	std::cout<<"\n ";
	std::cin>>answare1;
	std::cout<<"\n";
	
	UserCheck(answare1);
}

void UserCheck(string str)
{
	system("cls");
	
	if (str == "empty_1" || str == "Empty_1"){
		string answer2;
		std::cout<<" Write a name for the user 1\n\n ";
		std::cin>>answer2;
		std::ofstream file("SnakeUser0.txt");
		file<<answer2;
		file.close();
		CurrentUser = answer2;
		iScore = 0;
	}
	else if (str == FileWithAddres[0]){
	CurrentUser = FileWithAddres[0];
	iScore = 0;
	}
	
	if (str == "empty_2" || str == "Empty_2"){
		string answer2;
		std::cout<<" Write a name for the user 2\n\n ";
		std::cin>>answer2;
		std::ofstream file("SnakeUser1.txt");
		file<<answer2;
		file.close();
		CurrentUser = answer2;
		iScore = 1;
	}
	else if (str == FileWithAddres[1]){
	CurrentUser = FileWithAddres[1];
	iScore = 1;
	}
	
	if (str == "empty_3" || str == "Empty_3"){
		string answer2;
		std::cout<<" Write a name for the user 3\n\n ";
		std::cin>>answer2;
		std::ofstream file("SnakeUser2.txt");
		file<<answer2;
		file.close();
		CurrentUser = answer2;
		iScore = 2;
	}
	else if (str == FileWithAddres[2]){
	CurrentUser = FileWithAddres[2];
	iScore = 2;
	}
	
	if (str == "empty_4" || str == "Empty_4"){
		string answer2;
		std::cout<<" Write a name for the user 4\n\n ";
		std::cin>>answer2;
		std::ofstream file("SnakeUser3.txt");
		file<<answer2;
		file.close();
		CurrentUser = answer2;
		iScore = 3;
	}
	else if (str == FileWithAddres[3]){
	CurrentUser = FileWithAddres[3];
	iScore = 3;
	}
	
}

void HighestScore()
{
	string just_data;
	
	if (iScore == 0){
		if (score > HighestScoreF[iScore]){
			std::ofstream file0("SnakeUser0Score.txt");
			file0<<score;
			file0.close();
		}
	}
	
	if (iScore == 1){
		if (score > HighestScoreF[iScore]){
			std::ofstream file1("SnakeUser1Score.txt");
			file1<<score;
			file1.close();
		}
	}
	
	if (iScore == 2){
		if (score > HighestScoreF[iScore]){
			std::ofstream file2("SnakeUser2Score.txt");
			file2<<score;
			file2.close();
		}
	}
	
	if (iScore == 3){
		if (score > HighestScoreF[iScore]){
			std::ofstream file3("SnakeUser3Score.txt");
			file3<<score;
			file3.close();
		}
	}
}
	
int main()
{	system("cls");
	system("color 06");
	user();
	Setup();
	while (!GameOver){
		Draw();
		Input();
		Logic();
		Sleep(ADMIN);
}
		HighestScore();
	
	system("color 02");

	return 0;
}
