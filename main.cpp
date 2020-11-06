#include<iostream>
#include<string.h>
#include<winbgim.h> 
#include<windows.h>
#include<unistd.h>
#include<math.h>
#include<stdlib.h>
//#include"chor.h"

using namespace std;

inline void initWindow();
void chorCircle(int, int, int);
void policeCircle(int, int, int);
bool busted(int, int, int, int);
bool Continue();
void goods();
bool got_goods(int, int, int, int);

int x_goods=50;
int y_goods=50;

void menu(void);

int x_c=200;
int y_c=200;

int x_p=250;
int y_p=250;

bool run=true;

int y_start=150;
int y_exit=y_start+25;
int y_choice=y_start+10;

int xLeft_continue=140;
int xRight_continue=210;

main()
{
	initWindow();
	
	setcolor(5);
	circle(x_c, y_c, 10);
	
	menu();
	cleardevice();
	chorCircle(x_c, y_c, 10);
	policeCircle(x_p, y_p, 10);
	goods();
	
	while(run)
	{
		menu();
		delay(1);
		while(kbhit())
		{
			if(GetAsyncKeyState(VK_UP))
			{
				
				y_c-=5;
				cleardevice();
				chorCircle(x_c, y_c, 10);
					policeCircle(x_p, y_p, 10);
for(int radius=5; radius>=0; radius--)
			{
				circle(x_goods, y_goods, radius);
			}
				
			}
		//	delay(0.1);
			
			if(GetAsyncKeyState(VK_LEFT))
			{
				
				x_c-=5;
				cleardevice();
				chorCircle(x_c, y_c, 10);
					policeCircle(x_p, y_p, 10);
for(int radius=5; radius>=0; radius--)
			{
				circle(x_goods, y_goods, radius);
			}
				
			}
			delay(0.1);
			
			if(GetAsyncKeyState(VK_RIGHT))
			{
				
				x_c+=5;
				cleardevice();
				chorCircle(x_c, y_c, 10);
					policeCircle(x_p, y_p, 10);
for(int radius=5; radius>=0; radius--)
			{
				circle(x_goods, y_goods, radius);
			}
				
			}
		//	delay(0.1);
			
			if(GetAsyncKeyState(VK_DOWN))
			{
				
				y_c+=5;
				cleardevice();
				chorCircle(x_c, y_c, 10);
				policeCircle(x_p, y_p, 10);
				for(int radius=5; radius>=0; radius--)
			{
				circle(x_goods, y_goods, radius);
			}
				
			}
			delay(50);
		//}
		
		
		
		//		while(kbhit())
		//{
			if(GetAsyncKeyState('W'))
			{
				
				y_p-=5;
				cleardevice();
				policeCircle(x_p, y_p, 10);
				chorCircle(x_c, y_c, 10);
				for(int radius=5; radius>=0; radius--)
			{
				circle(x_goods, y_goods, radius);
			}
				
			}
		//	delay(0.1);
			
			if(GetAsyncKeyState(97) || GetAsyncKeyState(65))
			{
				
				x_p-=5;
				cleardevice();
				policeCircle(x_p, y_p, 10);
				chorCircle(x_c, y_c, 10);
				for(int radius=5; radius>=0; radius--)
			{
				circle(x_goods, y_goods, radius);
			}
				
			}
		//	delay(0.1);
			
			if(GetAsyncKeyState(100) || GetAsyncKeyState(68))
			{
				
				x_p+=5;
				cleardevice();
				policeCircle(x_p, y_p, 10);
				chorCircle(x_c, y_c, 10);
				for(int radius=5; radius>=0; radius--)
			{
				circle(x_goods, y_goods, radius);
			}
				
			}
		//	delay(0.1);
			
			if(GetAsyncKeyState(115) || GetAsyncKeyState(83))
			{
				
				y_p+=5;
				cleardevice();
				policeCircle(x_p, y_p, 10);
				chorCircle(x_c, y_c, 10);
				for(int radius=5; radius>=0; radius--)
			{
				circle(x_goods, y_goods, radius);
			}
			}
			
			
		if(busted(x_c, y_c, x_p, y_p)){
			run=false;
			delay(5);
			sleep(3);
			break;
		}
			
	//		delay(1);
		}
		
		if(got_goods(x_c, y_c, x_goods, y_goods))
		{
			goods();
		}
			
		
	}
	delay(1);
	

	
	if(!Continue()){
		cleardevice();
		settextstyle(0,0,2);
		outtextxy(15,150,"thanks for spending time");
		delay(1);
		sleep(3);
	}
}


bool busted(int x_c, int y_c, int x_p, int y_p){
			float a1,a;
				a1=pow(x_c-x_p,2)+pow(y_c-y_p,2);
				a=sqrt(a1);
				if(a<=20)
				{
				
			cleardevice();
					outtextxy(100,100,"busted");
						policeCircle(x_p, y_p, 10);
								chorCircle(x_c, y_c, 10);
					return true;
			}
				else
				return false;
				/*
				float a1,a;
				float dx,dy;
				dx=sqrt(pow(x_c-x_p,2));
				dy=sqrt(pow(y_c-y_p,2));
				if(dx<=15 && dy<=15){
					cleardevice();
					outtextxy(100,100,"busted");
						policeCircle(x_p, y_p, 10);
								chorCircle(x_c, y_c, 10);
					
					return true;
				}
				else
				return false;
*/}


bool Continue()
{
//	while(1)
///	{

		/*if(GetAsyncKeyState(VK_DOWN))
		{
				break;
		}
		*/	
		
		/*setlinestyle( SOLID_LINE, 0, 2 );
	  	rectangle( 140, 150, 210, 130 );*/
		
			while(1)
		{
			cleardevice();
			outtextxy(100,100,"Want to continue?");
			
			outtextxy(150,130,"YES");
			outtextxy(300,130,"NO");
			
			if(GetAsyncKeyState(VK_LEFT))
			{
				if(xLeft_continue<=150){
					xLeft_continue+=150;
					xRight_continue+=150;
				}
				else{
					xLeft_continue=140;
					xRight_continue=210;
				}
			}
			
			if(GetAsyncKeyState(VK_RIGHT))
			{
				
				if(xRight_continue>=300){
					xLeft_continue-=150;
					xRight_continue-=150;
				}
				
				else
				{
					xLeft_continue+=150;
					xRight_continue+=150;
				}
				
			}
			
			setlinestyle( SOLID_LINE, 0, 2 );
		  	rectangle( xLeft_continue, 150, xRight_continue, 130 );
		  	
		  	if(GetAsyncKeyState(VK_RETURN)){
		  		break;
			  }
			
			delay(150);
			{
			//setfillstyle( SOLID_FILL, 3 );
		  	setlinestyle( SOLID_LINE, 0, 5 );
		  	rectangle( 400, 80, 50, 160 );			//(left end from left wall of screen	, down end from upper wall of screen	,	right end from left wall of screen,	upper end from upper wall of screen)

		  	delay(150);
			}
			delay(1);
		
		}
	
	if(xLeft_continue<=150)
	return true;
	
	else
	return false;

	
//	}
//	delay(1);
//	sleep(3);
	
}


void goods()
{
	int radius=5;
	while(1)
	{
		
		
		x_goods=rand()+25;
		y_goods=rand()+25;
		
		
		
		if(x_goods<=450 && y_goods<=450)
		{
		
			for(radius=5; radius!=0; radius--)
			{
				circle(x_goods, y_goods, radius);
			}
			break;
		}
	}
}


bool got_goods(int x_c, int y_c, int x_goods, int y_goods)
{
			float a1,a;
				a1=pow(x_c-x_goods,2)+pow(y_c-y_goods,2);
				a=sqrt(a1);
				if(a<=15){
			//if(x_c==x_goods /*&& y_c==y_goods*/){
			//	outtextxy(20,20,"you got it now");
				return true;
			}
				else
				return false;
				
			/*	{
				
			cleardevice();
					outtextxy(100,100,"busted");
						policeCircle(x_p, y_p, 10);
								chorCircle(x_c, y_c, 10);
					return true;
			}
				else
				return false;*/
}



inline void initWindow(){
	initwindow( 500, 500);					// init window graphics
	setbkcolor(3);							// set background
   	cleardevice();	
}

void menu(void)
{
	//int y_start, y_exit, y_choice;
	setcolor(15);
	settextstyle(0,0,3);
	outtextxy(150,y_start,"START");
	outtextxy(150,y_exit,"EXIT");
	circle(135,y_choice,6);
	
while(1){
		if(GetAsyncKeyState(VK_DOWN))
		{
			if(y_choice >= y_exit )
			{
				y_choice=y_start+10;
			}
			else 
			{
			y_choice+=25;
			}

		}
		if(GetAsyncKeyState(VK_UP))	
		{
			if(y_choice <= (y_start+10) )
			{
				y_choice=y_exit+10;
			}
			else
			{
			y_choice-=25;
			}
	
		}
		
		cleardevice();
		outtextxy(150,y_start,"START");
		outtextxy(150,y_exit,"EXIT");
		circle(135,y_choice,6);
		
		
		if(GetAsyncKeyState(VK_RETURN))
		{
		break;
		}
		delay(100);
		
	}

		cleardevice();
		settextstyle(0,0,2);
		
		if(y_choice<=(y_start+10)){
	//	outtextxy(5,100," you have choosen START");
		cleardevice();
		outtextxy(1,100,"your game will start on...");
	
		char variable[3];
		int a=5;
		int b=6;
		int i;
		for(i=3;i>=1;i--){
							sprintf(variable, "%d",i);
							outtextxy(200,130,variable);
							delay(1);
							sleep(1);
						}
		}
		
		if(y_choice>=y_exit+10)
		outtextxy(5,100,"you have choosen EXIT");
	
	//	return();
	
}

/*printingNumbers(){
	char variable[3];
	int a=5;
	int b=6;
	sprintf(variable, "%d %d %d %d %d", a+b, a,b,a,b);
	outtextxy(50,50,variable);
	
}*/

void chorCircle(int x, int y, int radius){
	circle(x, y,10);
}

void policeCircle(int x, int y, int radius){
	circle(x, y,10);
}
