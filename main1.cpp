/*

//The list of included libraries

#include<iostream>
#include<winbgim.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<unistd.h>

#include "chor.h"
#include "police.h"

using namespace std;


void initwindow();
void run();
void chorMove(int, int);
void policeMove(int, int);
void update();
void clearScreen();
void generateFood();


//Initializing the variables declared (possibly)
	int horz_x=190;
	int vert_y=144;
	char strInput;
	char key=0;
	bool running;	//determines whether the game is running
	
	Police player1;
	Chor player2;
	
	int horz_x1=player1.get_x();
	int vert_y1=player1.get_y();
	
	int horz_x2=player2.get_x();
	int vert_y2=player2.get_y();
	
	
main()	
{
	initwindow();
	running = true;
   	while(running)
	{
		cleardevice();		//clears the windows screen
		setcolor(14);		//sets the background color of the windows screen
		policeMove(horz_x1,vert_y1);
		chorMove(horz_x2,vert_y2);
	
	}
		
}
		
void initwindow()
{
	initwindow(400, 400);					// init window graphics
	setbkcolor(15);							// set background
}

void policeMove(int horz_x1, int vert_y1)
{
	setcolor(12);
	circle(horz_x1,vert_y1,15);
	outtextxy(horz_x1-9,vert_y1-5,"P");
	
	if(GetAsyncKeyState(VK_UP)<0)
	{
		horz_x1-=400;
		vert_y1-=400;
	}
			
	if(GetAsyncKeyState(VK_DOWN)<0)
	{
		
	}
			
	if(GetAsyncKeyState(VK_RIGHT)<0)
	{
		
	}
			
	if(GetAsyncKeyState(VK_LEFT)<0)
	{
		
	}
		
	delay(1);
	
}

void chorMove(int horz_x2, int vert_y2)
{
	setcolor(8);
	circle(horz_x2,vert_y2,15);
	outtextxy(horz_x2,vert_y2-4,"C");
	
	if(GetAsyncKeyState((0x57)<0)) //w
	{
		
	}
			
	if(GetAsyncKeyState((0x53)<0))	//s
	{
		
	}
			
	if(GetAsyncKeyState((0x44)<0)) //d
	{
		
	}
			
	if(GetAsyncKeyState((0x41)<0)) //a
	{
		
	}
		
	delay(1);
	
}




			
	
	
	



*/








