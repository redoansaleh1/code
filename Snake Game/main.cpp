#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <string>

std::ifstream highScoreReadFile("C:\\Users\\user\\Desktop\\code\\Snake Game\\highscore.txt");
bool gameOver, exitTheGame;
const int width = 40;
const int height = 20;
int x, y, fruitX, fruitY, score, highScore, tailX[10000], tailY[10000], nTail;
enum eDirecton
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirecton dir;

void Setup() {
    system("title Snake Game");
    system("color B4");
    std::string highScoreString;
    while (getline(highScoreReadFile, highScoreString))
    {
        highScore = stoi(highScoreString);
    }
    std::cout << "\t\t\t\tSnake Game" << std::endl;
    std::cout << "High Score: " << highScore << std::endl;
    std::cout << "How to play?" << std::endl;
    std::cout << "Press w: UP" << std::endl;
    std::cout << "Press s: DOWN" << std::endl;
    std::cout << "Press a: LEFT" << std::endl;
    std::cout << "Press W: UP" << std::endl;
    std::cout << "Press s: STOP" << std::endl;
    std::cout << "Press q: GameOver" << std::endl;
    std::cout << "Press e: exit" << std::endl;
    std::cout << "Press any key to play... " << std::endl;
    _getch();
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}
void Draw()
{
    if (!gameOver)
    {
        system("cls");
        std::cout << "Score:" << score << std::endl;
        std::cout << "High Score:" << highScore << std::endl;
        std::cout << std::endl;
        for (int i = 0; i < width + 2; i++)
            std::cout << "#";
        std::cout << std::endl;
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (j == 0)
                    std::cout << "#";
                if (i == y && j == x)
                    std::cout << "O";
                else if (i == fruitY && j == fruitX)
                    std::cout << "F";
                else
                {
                    bool print = false;
                    for (int k = 0; k < nTail; k++)
                    {
                        if (tailX[k] == j && tailY[k] == i)
                        {
                            std::cout << "o";
                            print = true;
                        }
                    }
                    if (!print)
                        std::cout << " ";
                }
                if (j == width - 1)
                    std::cout << "#";
            }
            std::cout << std::endl;
        }
        for (int i = 0; i < width + 2; i++)
            std::cout << "#";
    }
    else
    {
        system("cls");
        std::string highScoreString;
        while (getline(highScoreReadFile, highScoreString))
        {
            highScore = stoi(highScoreString);
        }
        std::cout << "Score: " << score << std::endl;
        if (score <= highScore)
            std::cout << "High Score: " << highScore << std::endl;
        else
        {
            highScore = score;
            std::ofstream highScoreWriteFile("C:\\Users\\user\\Desktop\\code\\Snake Game\\highscore.txt");
            highScoreWriteFile << highScore;
            highScoreWriteFile.close();
        }
        score = 0;
        nTail = 0;
        std::cout << "Press any key to play again... " << std::endl;
        _getch();
        gameOver = false;
    }
}
void Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
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
        case 'q':
            gameOver = true;
            break;
        case 'e':
            exitTheGame = true;
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
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
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
    if (x >= width)
        x = 0;
    else if (x < 0)
        x = width - 1;
    if (y >= height)
        y = 0;
    else if (y < 0)
        y = height - 1;
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;
    if (x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main()
{
    Setup();
    while (!exitTheGame)
    {
        Draw();
        Input();
        Logic();
        Sleep(10);
    }
}