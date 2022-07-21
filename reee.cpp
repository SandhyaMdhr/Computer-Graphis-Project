#include<iostream>
using namespace std;
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

int construction();

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL); 
    delay(3000);
    
    for(int i=0;i<760;i++)
    {
 	    line(1,650,100,650);                     //base of flag
        line(1,650,1,700);
        line(100,650,100,700);
        line(1,700,1500,700);
    //structure of man
	    circle(1300-i,550,30);                   //Head
	    line(1300-i,580,1300-i,650);             //abdomen
	    circle(1288-i,545,3);                    //Eye
	    line(1300-i,650,1320-i,700);	         //leg
	    line(1300-i,650,1280-i,700);
	    line(0,700,1500,700);	                 //Road
	    
	    if(i%10==0 && i<750)                    // hand shaking loop
	    {
	        //1st hand
	        line(1300-i,590,1330-i,620);
	        line(1300-i,590,1270-i,635);
	        delay(200);
     	}
     	
    	if(i%10!=0 && i<750)
    	{
    	    //2nd hand
    	    line(1300-i,590,1310-i,640);
    	    line(1300-i,590,1270-i,620);	
    	}
    	
    	if(i==750)
     	{
    		//saluting position
    		line(1300-i,590,1280-i,630);
    		delay(500);
    		line(1300-i,590,1330-i,580);
		    delay(100);
		    line(1330-i,580,1300-i,550);
		    delay(1000);	
		    construction();
	     	//flag colouring
            line(20,25,20,650);  
            line(40,58,40,650);   
            line(20,25,350 ,205);
            line(40,58,270,185); 
            line(350,205,120,205);
            line(270,185,55,185);
            line(55,185,335,393) ;
            line(120,205,400,415);
            line(400,415,20,415);
            line(335,393,40,393);   
            //base
            line(1,650,100,650);
            line(1,650,1,700);
            line(100,650,100,700);
            line(1,700,1500,700);
         	setfillstyle(1,BLUE);
            floodfill(60,60,getmaxcolor());
            delay(1500);
            line(117,285,139,269);
            line(139,269,128,298);
            line(128,298,159,289);
            line(159,289,144,313);
          	line(144,313,171,317);
           	line(171,317,145,330);
            line(145,330,159,351);
            line(159,351,129,342);
            line(129,342,139,371);
            line(139,371,116,355);
          	line(116,355,110,380); 
        	line(110,380,98,356);
            line(98,356,77,371 );
            line(77,371,87,342);
            line(87,342,57,351);
            line(57,351,73,325);
            line(73,325,48,320);
            line(48,320,72,312);
            line(72,312,57,289);
            line(57,289,87,298);
          	line(87,298,77,269);
         	line(77,269,100,285);
         	line(100,285,105,260);
        	line(105,260,117,285);
            setfillstyle(1,WHITE);
            floodfill(108,320,getmaxcolor());
            delay(1500);
            //for moon
            arc(100,130,180,0,40);
            arc(98,115,200,243,40);
            arc(102,115,298,340,40);
	        line(78,151,72,140);
	        line(72,140,82,142);
	        line(82,142,80,130);
	        line(80,130,90,135);
	        line(90,135,90,122);
	        line(90,122,100,130);
	        line(100,130,105,122);
	        line(105,122,110,134);
	      	line(110,134,117,125);
	      	line(117,125,118,138);
	        line(118,138,128,138);
	        line(128,138,122,150);
            setfillstyle(1,WHITE);
            floodfill(100,150,getmaxcolor());
            delay(1500);
            setfillstyle(1,RED);
	        floodfill(80,100,getmaxcolor());
	        delay(1000);
            settextstyle(1,0,3);
            outtextxy(200,400,"NEPAL");
            delay(1000);
            
            for(int j=0;j<=1000;j++)
            {
            	
                if(j%10==0&&j<=1000)
                {
    	            //flag
                    line(20,25,20,650);  
                    line(40,58,40,650);   
                    line(20,25,350 ,205);
                    line(40,58,270,185); 
                    line(350,205,120,205);
                    line(270,185,55,185);
                    line(55,185,335,393) ;
                    line(120,205,400,415);
                    line(400,415,20,415);
                    line(335,393,40,393);   
                    //base
                    line(1,650,100,650);
                    line(1,650,1,700);
                    line(100,650,100,700);
                    line(1,700,1500,700);
	                setfillstyle(1,BLUE);
                    floodfill(60,60,getmaxcolor());
                    line(117,285,139,269);
                    line(139,269,128,298);
                    line(128,298,159,289);
                    line(159,289,144,313);
	                line(144,313,171,317);
	                line(171,317,145,330);
                    line(145,330,159,351);
                    line(159,351,129,342);
                    line(129,342,139,371);
                    line(139,371,116,355);
	                line(116,355,110,380); 
	                line(110,380,98,356);
                    line(98,356,77,371 );
                    line(77,371,87,342);
                    line(87,342,57,351);
                    line(57,351,73,325);
                    line(73,325,48,320);
                    line(48,320,72,312);
                    line(72,312,57,289);
                    line(57,289,87,298);
	                line(87,298,77,269);
                 	line(77,269,100,285);
                   	line(100,285,105,260);
	                line(105,260,117,285);
                    setfillstyle(1,WHITE);
                    floodfill(108,320,getmaxcolor());
                    //for moon
                    arc(100,130,180,0,40);
                    arc(98,115,200,243,40);
                    arc(102,115,298,340,40);
	                line(78,151,72,140);
	                line(72,140,82,142);
	                line(82,142,80,130);
	                line(80,130,90,135);
	                line(90,135,90,122);
	                line(90,122,100,130);
	                line(100,130,105,122);
	                line(105,122,110,134);
	              	line(110,134,117,125);
	               	line(117,125,118,138);
	                line(118,138,128,138);
               	    line(128,138,122,150);
                    setfillstyle(1,WHITE);
                    floodfill(100,150,getmaxcolor());
                    setfillstyle(1,RED);
	                floodfill(80,100,getmaxcolor());
                    settextstyle(1,0,3);
                     outtextxy(200,400,"NEPAL");
	            }
	            
	            if(j%10!=0&&j<=1000)
	            {
                    //flag
                    line(20,25,20,650);  
                    line(40,58,40,650);    
                    line(20,25,335,250);
                    line(40,58,270,230);
                    line(335,250,120,250);
                    line(270,230,55,230);
                    line(55,230,335,438);
                    line(120,250,400,460);
                    line(335,438,40,438);
                    line(400,460,20,460);
                    //base
                    line(1,650,100,650);
                    line(1,650,1,700);
                    line(100,650,100,700);
                    line(1,700,1500,700);
	                setfillstyle(1,BLUE);
                    floodfill(60,60,getmaxcolor());
                    //sun
                    line(117,315,139,299);
                    line(139,299,128,328);
                    line(128,328,159,319);
                    line(159,319,144,343);
	                line(144,343,171,347);
	                line(171,347,145,360);
                    line(145,360,159,381);
                    line(159,381,129,372);
                    line(129,372,139,401);
                    line(139,401,116,385);
	                line(116,385,110,410); 
	                line(110,410,98,386);
                    line(98,386,77,401 );
                    line(77,401,87,372);
                    line(87,372,57,381);
                    line(57,381,73,355);
                    line(73,355,48,350);
                    line(48,350,72,342);
                    line(72,342,57,309);
                    line(57,309,87,328);
	                line(87,328,77,299);
	                line(77,299,100,315);
	                line(100,315,105,290);
	                line(105,290,117,315);
                    setfillstyle(1,WHITE);
                    floodfill(108,320,getmaxcolor());
                    //for moon
                    arc(100,150,180,0,40);
                    arc(98,135,200,243,40);
                    arc(102,135,298,340,40); 
	                line(78,170,72,160);
	                line(72,160,82,162);
	                line(82,162,80,150);
	                line(80,150,90,155);
	                line(90,155,90,142);
	                line(90,142,100,150);
	                line(100,150,105,142);
	                line(105,142,110,154);
		            line(110,154,117,145);
		            line(117,145,118,158);
	                line(118,158,128,158);
	                line(128,158,122,170);
                    setfillstyle(1,WHITE);
                    floodfill(100,170,getmaxcolor());
                    setfillstyle(1,RED);
	                floodfill(80,100,getmaxcolor());
                    settextstyle(1,0,3);
                    outtextxy(200,440,"NEPAL"); 
                }
                
                delay(50);
                //for man
       	        circle(1300-i,550,30);                   //Head
	            line(1300-i,580,1300-i,650);             //abdomen
	            circle(1288-i,545,3);                    //Eye
		        //saluting position
		        line(1300-i,590,1280-i,630);
		        line(1300-i,590,1330-i,580);
		        line(1330-i,580,1300-i,550);
		        line(1300-i,650,1320-i,700);	         //leg
	            line(1300-i,650,1280-i,700);
                cleardevice();
            }
	    }
	    delay(10);
	    cleardevice();
    }
    getch();
}

int construction()
{
    line(20,25,20,650); 
    line(40,58,40,650);  
	delay(1500);
    line(20,25,350 ,205);
    line(40,58,270,185);
	delay(1500);
    line(350,205,120,205);
    line(270,185,55,185);
	delay(1500);
    line(55,185,335,393);
    line(120,205,400,415);
	delay(1500);
    line(400,415,40,415);
    line(335,393,40,393);
	delay(1500);
    //for sun
    line(117,285,139,269);
    delay(100);
    line(139,269,128,298);
    delay(100);
    line(128,298,159,289);
    delay(100);
    line(159,289,144,313);
	delay(100);
	line(144,313,171,317);
	delay(100);
	line(171,317,145,330);
	delay(100);
    line(145,330,159,351);
    delay(100);
    line(159,351,129,342);
    delay(100);
    line(129,342,139,371);
    delay(100);
    line(139,371,116,355);
	delay(100);
	line(116,355,110,380); 
	delay(100);
	line(110,380,98,356);
	delay(100);
    line(98,356,77,371 );
    delay(100);
    line(77,371,87,342);
    delay(100);
    line(87,342,57,351);
    delay(100);
    line(57,351,73,325);
	delay(100);
	line(73,325,48,320);
	delay(100);
	line(48,320,72,312);
	delay(100);
    line(72,312,57,289);
    delay(100);
    line(57,289,87,298);
    delay(100);
	line(87,298,77,269);
	delay(100);
	line(77,269,100,285);
	delay(100);
	line(100,285,105,260);
	delay(100);
	line(105,260,117,285);
	delay(100);
    setfillstyle(1,WHITE);
    //for moon
    delay(1500);
    arc(100,130,180,0,40);
    delay(1500);
    arc(98,115,200,243,40);
    delay(1500);
    arc(102,115,298,340,40);
    delay(1500);
    line(78,151,72,140);
	delay(100);
	line(72,140,82,142);
	delay(100);
	line(82,142,80,130);
	delay(100);
	line(80,130,90,135);
	delay(100);
	line(90,135,90,122);
	delay(100);
	line(90,122,100,130);
	delay(100);
	line(100,130,105,122);
	delay(100);
	line(105,122,110,134);
	delay(100);
	line(110,134,117,125);
	delay(100);
	line(117,125,118,138);
	delay(100);
	line(118,138,128,138);
	delay(100);
	line(128,138,122,150);
	delay(1000);
    getch();
}
