 #pragma once 
#include <iostream>
#include <string>
#include <cstdlib>

#define RAND_MAX 255

using namespace std;


class Character
{
public:
	int hp = 1;
	int r;
	int g;
	int b;
    int speed = 3;
    
    bool isdead = false;

};

class Hero : public Character
{
    public:
    Hero(int z,int x,int c)
    {
            r = z;
            g = x;
            c = b;

    };
};

class BadGuy : public Character 
{
public:
BadGuy(int z, int x, int c){     
    r=z;
    g=x;
    b=c;
}

};
