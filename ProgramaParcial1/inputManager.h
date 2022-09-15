#pragma once
#include <iostream>
#include "Shape.cpp"
#include "Triangule.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

class inputManager{

	public:
        void Run() {
            Menu();
        }

        void Menu() {
            int optShape = 0;
            int optSquare = 0;
            int size = 0, x = 0, y = 0;

            cout << "\t\tWelcome to the project of the 1° partial\t\n";
            cout << "\t\t   by Andrea Paola Jimenez Espinoza\t\n\n";
            cout << "\n Choose a Shape.......\n";
            cout << "1] Square\n";
            cout << "2] Triangule\n";
            cout << "3] Circle\n";
            cout << "4] Exit\n\n\t";

            cin >> optShape;
            system("cls");

            switch (optShape) {
                case 1: {
                    cout << "\n\t So you want to draw a square... \n";
                    cout << "\n Well, choose the type of square you want... \n";
                    cout << "1] Full\n";
                    cout << "2] Empty\n";

                    cin >> optSquare;
                    system("cls");

                    switch (optSquare) {
                        case 1: {
                            cout << "\n\t\t\tFull Square\n";
                            cout << "\n\tEnter the size of the square...\n";
                            cin >> size;
                            cout << "\nOk, now the coordinates\n";
                            cout << "\nEnter the x-coordinate of the square...\n";
                            cin >> x;
                            cout << "\nEnter the y-coordinate of the square...\n";
                            cin >> y;
                            Square square = Square(size, x, y);
                            square.Draw();
                            MoveSquare(square, 0);
                            system("cls");
                            Menu();
                            break;
                        }
                        case 2: {
                            cout << "\n\t\t\tEmpty Square\n";
                            cout << "\n\tEnter the size of the square...\n";
                            cin >> size;
                            cout << "\nOk, now the coordinates\n";
                            cout << "\nEnter the x-coordinate of the square...\n";
                            cin >> x;
                            cout << "\nEnter the y-coordinate of the square...\n";
                            cin >> y;
                            Square square = Square(size, x, y);
                            square.DrawEmpty();
                            MoveSquare(square, 1);
                            system("cls");
                            Menu();
                            break;
                        }
                    }
                }
                case 2: {
                    cout << "\n\t\t So you want to draw a Triangule... \n";
                    cout << "\n\tEnter the size of the triangule...\n";
                    cin >> size;
                    cout << "\nOk, now the coordinates\n";
                    cout << "\nEnter the x-coordinate of the triangule...\n";
                    cin >> x;
                    cout << "\nEnter the y-coordinate of the triangule...\n";
                    cin >> y;
                    Triangule triangule = Triangule(size, x, y);
                    triangule.Draw();
                    MoveTriangule(triangule);
                    system("cls");
                    Menu();
                    break;
                }
                case 3: {
                    cout << "\n\t\t So you want to draw a Circle... \n";
                    cout << "\n\tEnter the size of the circle...\n";
                    cin >> size;
                    cout << "\nOk, now the coordinates\n";
                    cout << "\nEnter the x-coordinate of the circle...\n";
                    cin >> x;
                    cout << "\nEnter the y-coordinate of the circle...\n";
                    cin >> y;
                    Circle circle = Circle(size, x, y);
                    circle.Draw();
                    MoveCircle(circle);
                    system("cls");
                    Menu();
                    break;
                }
                case 4: {
                    cout << "\n\t ------Thanks for checkin the project :)------ \n";
                    cout << "\n\t\t---Come back for the 2° partial---\n";
                    exit(EXIT_SUCCESS);
                }
            }

        }

        void MoveSquare(Square square, int type) {
            char key = 'm';
            do {
                if (key == 'a')
                    square.setX(-1);
                if (key == 'd')
                    square.setX(1);
                if (key == 'w')
                    square.setY(-1);
                if (key == 's')
                    square.setY(1);

                system("cls");
                if (type == 1) {
                    square.DrawEmpty();
                }
                else {
                    square.Draw();
                }
               
                cin >> key;

            } while (key != 'b');
            
		}
        void MoveTriangule(Triangule triangule) {
            char key = 'm';
            do {
                if (key == 'a')
                    triangule.setX(-1);
                if (key == 'd')
                    triangule.setX(1);
                if (key == 'w')
                    triangule.setY(-1);
                if (key == 's')
                    triangule.setY(1);

                system("cls");
                triangule.Draw();

                cin >> key;

            } while (key != 'b');
            
        }
        void MoveCircle(Circle circle) {
            char key = 'm';
            do {
                if (key == 'a')
                    circle.setX(-1);
                if (key == 'd')
                    circle.setX(1);
                if (key == 'w')
                    circle.setY(-1);
                if (key == 's')
                    circle.setY(1);

                system("cls");
                circle.Draw();

                cin >> key;

            } while (key != 'b');
        }
};



