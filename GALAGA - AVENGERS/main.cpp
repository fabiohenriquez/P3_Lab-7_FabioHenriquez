#include <iostream>
#include <ncurses.h>
#include <unistd.h>
//#include "tablero.h"

 
int main(int argc, char*argv[]){
    //base de la nave
    int x=32,y=75;
    int tx=0,ty=0;
    bool seguir = true;
    initscr();
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_WHITE);
    init_pair(2,COLOR_BLACK,COLOR_BLACK);
    init_pair(3,COLOR_RED,COLOR_RED);
    char vv;

    while(seguir){   
     tx = x;
     ty = y;
     //base 1
     attron(COLOR_PAIR(1));
     move(x,y);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x,y-1);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x,y-2);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x,y-3);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x,y-4);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x,y-5);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x,y-6);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x,y-7);
     printw(" ");

     attron(COLOR_PAIR(1));
     move(x,y+1);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x,y+2);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x,y+3);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x,y+4);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x,y+5);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x,y+6);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x,y+7);
     printw(" ");

     //base 2 

     attron(COLOR_PAIR(3));
     move(x-1,y);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x-1,y-1);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x-1,y-2);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x-1,y-3);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x-1,y-4);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x-1,y-5);
     printw(" ");
     
     attron(COLOR_PAIR(3));
     move(x-1,y+1);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x-1,y+2);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x-1,y+3);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x-1,y+4);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x-1,y+5);
     printw(" ");     
     //base 3
     
     attron(COLOR_PAIR(1));
     move(x-2,y);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x-2,y-1);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x-2,y-2);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x-2,y-3);
     printw(" ");
     
     attron(COLOR_PAIR(1));
     move(x-2,y+1);
     printw(" ");
     attron(COLOR_PAIR(3));
     move(x-2,y+2);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x-2,y+3);
     printw(" ");

     //base 4
     attron(COLOR_PAIR(3));
     move(x-3,y);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x-3,y-1);
     printw(" ");
     attron(COLOR_PAIR(1));
     move(x-3,y+1);
     printw(" ");
     // fin de la nave

     vv = getch();
     if(vv == 'a'&& ty>7){
                //base 1
            attron(COLOR_PAIR(2));
            move(tx,ty);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-1);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-2);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-3);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-4);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-5);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-6);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-7);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+1);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+2);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+3);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+4);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+5);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+6);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+7);
            printw("      ");

            //base 2 

            attron(COLOR_PAIR(2));
            move(tx-1,ty);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty-1);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty-2);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty-3);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty-4);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty-5);
            printw("      ");
            
            attron(COLOR_PAIR(2));
            move(tx-1,ty+1);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty+2);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty+3);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty+4);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty+5);
            printw("      ");     
            //base 3
            
            attron(COLOR_PAIR(2));
            move(tx-2,ty);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-2,ty-1);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-2,ty-2);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-2,ty-3);
            printw("      ");
            
            attron(COLOR_PAIR(2));
            move(tx-2,ty+1);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-2,ty+2);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-2,ty+3);
            printw("      ");

            //base 4
            attron(COLOR_PAIR(2));
            move(tx-3,ty);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-3,ty-1);
            printw("      ");
            
            
            attron(COLOR_PAIR(2));
            move(tx-3,ty+1);
            printw("      ");
            // fin de la nave
        y--;

     }

     if(vv== 'd' && ty<143){
            //base 1
            attron(COLOR_PAIR(2));
            move(tx,ty);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-1);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-2);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-3);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-4);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-5);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-6);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty-7);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+1);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+2);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+3);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+4);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+5);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+6);
            printw("      ");

            attron(COLOR_PAIR(2));
            move(tx,ty+7);
            printw("      ");

            //base 2 

            attron(COLOR_PAIR(2));
            move(tx-1,ty);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty-1);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty-2);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty-3);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty-4);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty-5);
            printw("      ");
            
            attron(COLOR_PAIR(2));
            move(tx-1,ty+1);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty+2);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty+3);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty+4);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-1,ty+5);
            printw("      ");     
            //base 3
            
            attron(COLOR_PAIR(2));
            move(tx-2,ty);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-2,ty-1);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-2,ty-2);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-2,ty-3);
            printw("      ");
            
            attron(COLOR_PAIR(2));
            move(tx-2,ty+1);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-2,ty+2);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-2,ty+3);
            printw("      ");

            //base 4
            attron(COLOR_PAIR(2));
            move(tx-3,ty);
            printw("      ");
            attron(COLOR_PAIR(2));
            move(tx-3,ty-1);
            printw("      ");
            
            
            attron(COLOR_PAIR(2));
            move(tx-3,ty+1);
            printw("      ");
            // fin de la nave
            y++;

     }

     if(vv == 32){
         
         for(int i = 0; i < tx-3; i++){
             attron(COLOR_PAIR(2));
             move(i,ty);
             printw(" ");
             attron(COLOR_PAIR(1));
             move(i+1,ty);
             printw(" ");
             usleep(4000);
             refresh();
         }
         

     }


    
    endwin();
    refresh();

    }
     

    return 0;
}
