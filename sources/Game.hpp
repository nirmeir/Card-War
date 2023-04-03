#pragma once
#include <iostream>
#include <stdio.h>
#include "Player.hpp"


namespace ariel
{

    class Game
    {
    public:
        Player p1;
        Player p2;
    
        Game(Player & player1, Player & player2) :p1(player1),p2(player2)
        {
           
        };
      
        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
    };
}
