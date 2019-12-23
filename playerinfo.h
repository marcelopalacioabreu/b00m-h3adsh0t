#pragma once

#include <math.h>

//Here is our vector, makes things easier when dealing with coordinates
    class Vect3d
    {
	public:
        float x;
        float y;
        float z;

        Vect3d(float _x, float _y, float _z)
        {
            x = _x;
            y = _y;
            z = _z;
        }

        Vect3d()
        {
        }

        float length()
        {
			return (float)sqrt(x * x + y * y + z * z);
        }

        float dotproduct(Vect3d dot)
        {
            return (x * dot.x + y * dot.y + z * dot.z);
        }

    };

		struct Color
	{
		public:
		short R;
		short G;
		short B;

		Color()
		{

		}
		Color(short r, short g, short b)
		{
			R = r;
			G = g;
			B = b;
		}

	};

	//Here we store the actual contents of the memory addresses usually within "PlayerData" we
    //will use this just before calling the aimbot to put our player's data and the enemies at use
    //e.g. find how far the enemy is from us
    class PlayerDataVec
    {
		public:
        float xMouse;
        float yMouse;
        int isValid;
        float xPos;
        float yPos;
        float zPos;
        int isAlive;
        int clientNum;
        Color color;
        char name[16];
        int pose;
        int team;
        bool visible;
        int isInGame;
		int health;

        Vect3d VecCoords()
        {
			Vect3d vec(xPos, zPos, yPos);
            return vec;
        }
    };