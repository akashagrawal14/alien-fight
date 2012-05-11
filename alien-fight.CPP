#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void LEVEL2();

int m=0,n=0,p=0;
//a is for car movement
//b is for first alien movement
//c is for 2nd alien movement
//z is for 3rd alien movement
//p for gameover
//y sc tc is for bomb wen to be bomabarded

int CAR(int a,int b,int c,int z,int y,int sc,int tc)
{
	int i,j,k,d;
	cleardevice();
//	randomize();
	/*for(i=0;i<=1500;i++)
	{
		j=random(640);
		k=random(500);
		putpixel(j,k,3);
	} */

	//alien1

	ellipse(590+b,40,0,180,15,30);
	ellipse(590+b,40,180,0,15,10);
	ellipse(590+b,50,105,73,50,20);
	rectangle(580+b,25,585+b,30);
	rectangle(595+b,25,600+b,30);
	line(590+b,30,590+b,35);
	line(580+b,40,585+b,37);
	line(585+b,37,590+b,40);
	line(590+b,40,595+b,37);
	line(595+b,37,600+b,40);
	setfillstyle(1,4);
	//floodfill(590+b,40,4);
	floodfill(582+b,27,4);
	floodfill(597+b,27,4);
	//if y is 0 den taking bomb and making as center of that alien
	if(y==0)
		m=590+b;
	if(sc==0)
		n=50+c;
	if(tc==0)
		p=390+z;
	//2
	ellipse(50+c,110,0,180,15,30);
	ellipse(50+c,110,180,0,15,10);
	ellipse(50+c,120,105,73,50,20);
	rectangle(40+c,95,45+c,100);
	rectangle(55+c,95,60+c,100);
	line(50+c,100,50+c,105);
	line(40+c,110,45+c,107);
	line(45+c,107,50+c,110);
	line(50+c,110,55+c,107);
	line(55+c,107,60+c,110);
	setfillstyle(1,4);
	floodfill(42+c,97,4);
	floodfill(57+c,97,4);
	//gotoxy(10,10);cout<<c;
	//delay(100);

	//3
	ellipse(390+z,160,0,180,15,30);
	ellipse(390+z,160,180,0,15,10);
	ellipse(390+z,170,105,73,50,20);
	rectangle(380+z,145,385+z,150);
	rectangle(395+z,145,400+z,150);
	line(390+z,150,390+z,155);
	line(380+z,160,385+z,157);
	line(385+z,157,390+z,160);
	line(390+z,160,395+z,157);
	line(395+z,157,400+z,160);
	setfillstyle(1,4);
	floodfill(382+z,147,4);
	floodfill(397+z,147,4);

	setcolor(4);
	//rectangle(0,300,635,400);
	setfillstyle(1,14);
	//floodfill(1,390,4);

	//main game car
	arc(60+a,380,0,170,30);
	//floodfill(60+a,332,4);
	arc(90+a,400,0,90,20);
	arc(30+a,400,90,180,25);
	line(110+a,400,100+a,400);
	arc(88+a,400,0,180,12);
	line(76+a,400,40+a,400);
	circle(88+a,400,10);
	circle(88+a,400,2);
	arc(28+a,400,0,180,12);
	line(16+a,400,5+a,400);
	circle(28+a,400,10);
	circle(28+a,400,2);
	arc(65+a,375,0,90,20);
	line(65+a,355,65+a,375);
	line(65+a,375,85+a,375);
	arc(55+a,375,90,180,20);
	line(55+a,375,55+a,355);
	line(55+a,375,35+a,375);
	line(60+a,350,60+a,400);

	//1rectangle(-5+a,380,120+a,400);
	//2rectangle(20+a,350,100+a,380);
	setcolor(4);
	setfillstyle(1,6);

	circle(m,70+y,10);
	floodfill(m,71+y,4);
	if(m>-5+a&&m<120+a&&80+y>380&&80+y<400)
		return 1;
	if(m>20+a&&m<100+a&&80+y>350&&80+y<380)
		return 1;
	/*if(m-10>5+a&&m-10<110+a&&70+y>380&&70+y<400)
	{
	return 1;
}
if(m-10>30+a&&m-10<90+a&&70+y>350&&70+y<380)
{
return 1;
}
if(m+10>5+a&&m+10<110+a&&70+y>380&&70+y<400)
{
return 1;
}
if(m+10>30+a&&m+10<90+a&&70+y>350&&70+y<380)
{
return 1;
} */

	circle(n,140+sc,10);
	floodfill(n,140+sc,4);
	if(n>-5+a&&n<120+a&&150+sc>380&&150+sc<400)
	{
		return 1;
	}
	if(n>20+a&&n<100+a&&150+sc>350&&150+sc<380)
	{
		return 1;
	}
/*if(n-10>5+a&&n-10<140+a&&140+sc>380&&140+sc<400)
{
return 1;
}
if(n-10>30+a&&n-10<90+a&&140+sc>350&&140+sc<380)
{
return 1;
}
if(n+10>5+a&&n+10<110+a&&140+sc>380&&140+sc<400)
{
return 1;
}
if(n+10>30+a&&n+10<90+a&&140+sc>350&&140+sc<380)
{
return 1;
} */

	circle(p,190+tc,10);
	floodfill(p,190+tc,4);
	if(p>-5+a&&p<120+a&&200+tc>380&&200+tc<400)
	{
		return 1;
	}
	if(p>20+a&&p<100+a&&200+tc>350&&200+tc<380)
	{
		return 1;
	}

/*if(p-10>5+a&&p-10<110+a&&190+tc>38&&190+tc<400)
{
return 1;
}
if(p-10>30+a&&p-10<90+a&&190+tc>350&&190+tc<380)
{
return 1;
}
if(p+10>5+a&&p+10<110+a&&190+tc>380&&190+tc<400)
{
return 1;
}
if(p+10>30+a&&p+10<90+a&&190+tc>350&&190+tc<380)
{
return 1;
} */

//floodfill(53+a,375,4);
//arc(88,350,100,170,22);
	delay(20);
	return 0;
}
void car(int a)
{
	setcolor(4);
	arc(60+a,380,0,170,30);
//floodfill(60+a,332,4);
	arc(90+a,400,0,90,20);
	arc(30+a,400,90,180,25);
	line(110+a,400,100+a,400);
	arc(88+a,400,0,180,12);
	line(76+a,400,40+a,400);
	circle(88+a,400,10);
	circle(88+a,400,2);
	arc(28+a,400,0,180,12);
	line(16+a,400,5+a,400);
	circle(28+a,400,10);
	circle(28+a,400,2);
	arc(65+a,375,0,90,20);
	line(65+a,355,65+a,375);
	line(65+a,375,85+a,375);
	arc(55+a,375,90,180,20);
	line(55+a,375,55+a,355);
	line(55+a,375,35+a,375);
	line(60+a,350,60+a,400);
	setfillstyle(1,14);
	floodfill(64+a,373,4);
	floodfill(56+a,373,4);
	setfillstyle(1,7);
	floodfill(66+a,373,4);
	floodfill(54+a,373,4);

}
void movie()
{
	int a;
	setbkcolor(5);
	for(a=0;a<200;a=a+2)
	{
		cleardevice();
		car(a);
		delay(30);
	}
	delay(50);
	for(int b=0;b>-250;b=b-2)
	{
		cleardevice();
		car(a);

		ellipse(590+b,40,0,180,15,30);
		ellipse(590+b,40,180,0,15,10);
		ellipse(590+b,50,105,73,50,20);
		rectangle(580+b,25,585+b,30);
		rectangle(595+b,25,600+b,30);
		line(590+b,30,590+b,35);
		line(580+b,40,585+b,37);
		line(585+b,37,590+b,40);
		line(590+b,40,595+b,37);
		line(595+b,37,600+b,40);
		setfillstyle(1,4);
		floodfill(582+b,27,4);
		floodfill(597+b,27,4);
		delay(30);
	}
	rectangle(300,280,450,330);
	setfillstyle(1,7);

	floodfill(310,300,4);
	outtextxy(310,290,"1->HEY!LOOK UP");
	delay(2000);
	outtextxy(310,300,"2->WHAT'S THAT???");
	delay(2000);
	settextstyle(2,0,5);
	rectangle(200,90,360,160);
	floodfill(210,100,4);
	outtextxy(210,100,"WE ARE FROM MARS!!!!!");
	delay(1000);

	outtextxy(210,120,"WE WILL DESTROY YOU ");
	delay(2000);
	outtextxy(230,140,"HA HA HA......");
	settextstyle(0,0,1);
	delay(2000);
	outtextxy(310,310,"1->LET'S SEE....");
	delay(3000);
}


union REGS i,o;

//Funtion to initialize the mouse
int initmouse()
	 {
	 i.x.ax = 0;//Service number assigned to ax register
	 int86(0x33,&i,&o);//interrupt number provided to the function
   return (o.x.ax);//Value is returned to the calling function
   }

//Function to display mouse pointer
void showmouseptr()
   {
   i.x.ax = 1;
   int86(0x33,&i,&o);
   }


//Function to Hide mouse pointer
void hidemouseptr()
   {
   i.x.ax = 2;
   int86(0x33,&i,&o);
   }

//Restricts the mouse movement
void restrictmouseptr(int x1,int y1,int x2,int y2)
   {
   i.x.ax = 7;
   i.x.cx = x1;
   i.x.dx = x2;
   int86(0x33,&i,&o);

   i.x.ax = 8;
   i.x.cx = y1;
   i.x.dx = y2;
   int86(0x33,&i,&o);
   }
//Gets mouse coordinates and button status
void getmousepos(int *button,int *x,int *y)
   {
   i.x.ax = 3;
   int86(0x33,&i,&o);
   *button = o.x.bx;
   *x = o.x.cx;
   *y = o.x.dx;
   }
  // getch();
//}

//Gets mouse coordinates and button status
/*void getmousepos(int *button,int *x,int *y)
   {
   i.x.ax = 3;
   int86(0x33,&i,&o);
   *button = o.x.bx;
   *x = o.x.cx;
   *y = o.x.dx;
   }*/
  // getch();
//}
int start()
{
	int b,x,y,ch=0;
	initmouse();
	showmouseptr();
/*  setbkcolor(3);
  settextstyle(1,0,6);
 for(int i=0;i<150;i+=4)
 {
 cleardevice();
 outtextxy(i,20,"ALIEN");
 delay(30);
 }
 for(int j=550;j>300;j-=4)
 {
 cleardevice();
 outtextxy(i,20,"ALIEN");
 outtextxy(j,20,"FIGHT");
 delay(30);
 } int b,x,y;
 settextstyle(3,0,4);
 outtextxy(210,120,"NEW GAME");
 delay(500);
 int ch=0;
 outtextxy(210,200,"HELP");
 delay(500);
 outtextxy(210,280,"QUIT");
 setcolor(7);
 line(50,300,80,200);
 line(50,300,100,180);
 line(100,180,60,190);
 line(80,200,40,210);
 line(60,190,90,110);
 line(40,210,90,110);
 setfillstyle(1,7);
// floodfill(38,209,4);
  line(450,300,480,200);
 line(450,300,500,180);
 line(500,180,460,190);
 line(480,200,440,210);
 line(460,190,490,110);
 line(440,210,490,110);
 setcolor(4);
 delay(100);
 initmouse();
 showmouseptr();
//rectangle(180,120,380,160);
//rectangle(180,200,280,240);
//rectangle(180,280,280,320);
//circle for touch screen
circle(180,140,20);
circle(180,220,20);
circle(180,300,20);
//color   14  2 4

//green
setfillstyle(1,2);
floodfill(181,140,4);
setfillstyle(1,14);
floodfill(181,220,4);
setfillstyle(1,4);
floodfill(181,300,4);


//menu getmouse
 do
 {
 getmousepos(&b,&x,&y);
 if(b==1&&x>180&&x<380&&y>120&&y<160)
 ch=1;
 if(b==1&&x>180&&x<280&&y>200&&y<240)
 ch=2;
 if(b==1&&x>180&&x<280&&y>280&&y<320)
 ch=3;
 }while(ch==0);

*/
//
 setcolor(15);
	line(0,150,110,150);
	line(110,150,200,250);
	line(200,250,330,250);
	line(330,250,330,340);
	line(330,340,170,340);
	//tyre
	arc(120,340,0,180,50);
	line(70,340,0,340);
	circle(120,340,45);
	//window..
	line(100,170,160,250);
	line(100,170,30,170);
	line(160,250,30,250);
	line(30,170,30,250);
	line(10,150,10,340);
	//board
	rectangle(300,220,320,250);
	rectangle(300,340,320,385);
	setfillstyle(1,6);
	floodfill(301,230,15);
	floodfill(301,350,15);

	//main board..
	rectangle(200,220,420,20);
	setfillstyle(1,7);
	floodfill(419,21,15);

	//road
	rectangle(-10,385,640,585);
	setfillstyle(1,8);
	floodfill(0,386,15);

	//traffic lite
	circle(230,50,20);
	circle(230,120,20);
	circle(230,190,20);
	rectangle(210,30,410,70);
	rectangle(210,100,410,140);
	rectangle(210,170,410,210);

	settextstyle(1,0,3);
	outtextxy(260,30,"NEW GAME");
	outtextxy(260,100,"HELP");
	outtextxy(260,170,"EXIT");
	//color   14  2 4
	//green
	setfillstyle(1,2);
	floodfill(231,50,15);
	setfillstyle(1,14);
	floodfill(231,120,15);
	setfillstyle(1,4);
	floodfill(231,190,15);
	//sky1
	setfillstyle(1,9);
	floodfill(0,0,15);
  //sky2
  setfillstyle(1,9);
	floodfill(298,350,15);
	//alienfight
	settextstyle(4,0,9);
	setcolor(1);
	delay(500);
	outtextxy(80,360,"alien - fight");
	 do
	 {
		 getmousepos(&b,&x,&y);
		 if(b==1&&x>210&&x<410&&y>30&&y<70)
			 ch=1;
		 if(b==1&&x>210&&x<410&&y>100&&y<140)
			 ch=2;
		 if(b==1&&x>210&&x<410&&y>170&&y<210)
			 ch=3;
	 }while(ch==0);


///////////////////
 hidemouseptr();
 settextstyle(0,0,1);
 return ch;
 getch();
}
int main()
{
clrscr();
int i=0,j=0,k=0,y=0,ch,p=0,sc=0,tc=0;
//char ch;
char *ptr;
ptr=new char[10];
int hrs,min,sec;
union REGS in,out;
in.h.ah=0;
int86(0x16,&in,&out);

   printf("\t\t%d",out.h.ah);


struct time s;
int t=0;
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	cleardevice();
//   movie();
   gb:
   gc:
   i=0;
   j=0;k=0;y=0;ch;p=0;sc=0;tc=0;t=0;
	ch=start();
	hidemouseptr();

switch(ch)
{
	case 1:
			cleardevice();
			gettime(&s);
			gotoxy(20,10);
			printf("LEVEL 1 STARTING TIME::%2d:%02d:%02d",s.ti_hour,s.ti_min,s.ti_sec);
			delay(3000);
			zx:  i=0,j-=4,k+=4,t-=4,y+=3,sc+=3,tc+=3;
			p=CAR(0,0,0,0,0,0,0);
//do
			pt:
			while(out.h.ah='q'&&p==0)
			{
				if(s.ti_min==s.ti_min+1)
				{
					LEVEL2();
				}
				while(!kbhit())
				{
					if(s.ti_min==s.ti_min+1)
					{
						LEVEL2( );
					}
					if(p==1)
					{
						goto pt;
					}
					p=CAR(i,j,k,t,y,sc,tc);
					y+=3;
					sc+=3;
					tc+=3;
					j-=4;
					k+=4;
					t-=4;
					if(j<-540)
					{
						 j=0;
					}
					if(k>540)
					{
						 k=0;
					}
					if(t<-340)
					{
						 t=200;
					}
					if(y>330)
					{
						 y=0;
					}
					if(sc>260)
					{
						 sc=0;
					}
					if(tc>210)
					{
						tc=0;
					}
				}
				if(j<-540)
				{
					 j=0;
				}
				if(k>540)
				{
					 k=0;
				}
				if(t<-340)
				{
					 t=200;
				}
				if(y>330)
				{
					 y=0;
				}
				if(sc>260)
				{
					sc=0;
				}
				if(tc>210)
				{
					tc=0;
				}
				yx:j-=4,k+=4,t-=4,y+=3,sc+=3,tc+=3;
				out.h.ah=getch();
				if(out.h.ah==77)
				{
					i=i+7;
					j=j-4;
					k+=4;
					t-=4;
					y+=3;
					sc+=3;
					tc+=3;
					p=CAR(i,j,k,t,y,sc,tc);
					if(i>=520)
					{
						 goto zx;
					}
				}
				if(out.h.ah==75)
				{
					i=i-7;
					j=j-4;
					k+=4;
					t-=4;
					y+=3;
					sc+=3;
					tc+=3;
					p=CAR(i,j,k,t,y,sc,tc);
					if(i<0)
					{
						i=520;
						goto yx;
					}
				}
				p=CAR(i,j,k,t,y,sc,tc);
			}//while(*ptr!='q');
			if(p==1)
			{
				cleardevice();
				delay(100);
				getch();
			}
			goto gb;
			break;
//delete ptr;
	case 2:
			cleardevice();
			cout<<"help";
			delay(1000);
			getch();
			goto gc;

	case 3:break;
}
//closegraph();
return 0;
}

void LEVEL2()
{
clrscr();
int i=0,j=0,k=0,y=0,ch,p=0,sc=0,tc=0;
//char ch;
char *ptr;
ptr=new char[10];
int hrs,min,sec;
union REGS in,out;
   in.h.ah=0;
   int86(0x16,&in,&out);

   printf("\t\t%d",out.h.ah);


struct time s;
int t=0;
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	cleardevice();
 //  movie();
	ch=start();
	hidemouseptr();


switch(ch)
{
case 1:
cleardevice();
gettime(&s);
gotoxy(300,200);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t  LEVEL 2 STARTING TIME::%2d:%02d:%02d",s.ti_hour,s.ti_min,s.ti_sec);
delay(3000);

zx:  i=0,j-=4,k+=4,t-=4,y+=4,sc+=4,tc+=4;
p=CAR(0,0,0,0,0,0,0);

//do
pt:
while(*ptr!='q'&&p==0)
{
while(!kbhit())
{
if(p==1)
{
goto pt;
}
p=CAR(i,j,k,t,y,sc,tc);
 y+=4;
 j-=4;
 k+=4;
 t-=4;
 sc+=4;
 tc+=4;
 if(j<-540)
 {
 j=0;
 }
 if(k>540)
 {
 k=0;
 }
 if(t<-340)
 {
 t=200;
 }
 if(y>330)
 {
 y=0;
 }
 if(sc>260)
 {
 sc=0;
 }
 if(tc>210)
 {
 tc=0;
 }
}
 if(j<-540)
 {
 j=0;
 }
 if(k>540)
 {
 k=0;
 }
 if(t<-340)
 {
 t=200;
 }
 if(y>330)
 {
 y=0;
 }
 if(sc>260)
 {
 sc=0;
 }
 if(tc>210)
 {
 tc=0;
 }
 yx:j-=4,k+=4,t-=4,y+=4,sc+=4,tc+=4;
out.h.ah=getch();
if(out.h.ah==77)
{i=i+7;
j=j-4;
k+=4;
t-=4;
y+=4;
sc+=4;
tc+=4;
p=CAR(i,j,k,t,y,sc,tc);
if(i>=520)
{
 goto zx;
}
}
if(out.h.ah==75)
{
i=i-7;
j=j-4;
k+=4;
t-=4;
y+=4;
sc+=4;
tc+=4;
p=CAR(i,j,k,t,y,sc,tc);
if(i<0)
{
i=520;
goto yx;
}

}
p=CAR(i,j,k,t,y,sc,tc);

/*do
{
j=j-2;
CAR(i,j);
*ptr='j';
}while(*ptr!='f'&&*ptr!='r');*/
}//while(*ptr!='q');

if(p==1)
{
cleardevice();
getch();
}
delete ptr;
}
//closegraph();
//return 0;
}