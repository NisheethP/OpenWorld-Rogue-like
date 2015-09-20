#pragma once
#ifndef _HELPER_H_
#define _HELPER_H_

#include <Windows.h>
#include <string>

namespace Helper
{
	enum Colour
	{
		Gray,
		White,
		DarkRed,
		Red,
		DarkBlue,
		Blue,
		DarkGreen,
		Green,
		DarkCyan,
		Cyan,
		DarkMagenta,
		Magenta,
		DarkYellow,
		Yellow,
		None
	};

	class Coord
	{
	public:
		int x;
		int y;

		Coord()
		{
			x = 0;
			y = 0;
		};

		Coord(int X, int Y)
		{
			x = X;
			y = Y;
		}

		bool operator== (Coord p_Coord)
		{
			return (p_Coord.x == this->x) && (p_Coord.y == this->y);
		}

		bool operator!= (Coord p_Coord)
		{
			if (p_Coord.x == this->x)
			{
				if (p_Coord.y == this->y)
					return false;
			}
			return true;
		}

		Coord& operator-= (Coord p_Coord)
		{
			this->x -= p_Coord.x;
			this->y -= p_Coord.y;

			return *this;
		}

		Coord& operator+= (Coord p_Coord)
		{
			this->x += p_Coord.x;
			this->y += p_Coord.y;

			return *this;
		}

		Coord operator+ (Coord p_Coord)
		{
			Coord tempCoord = *this;
			tempCoord.x += p_Coord.x;
			tempCoord.y += p_Coord.y;

			return tempCoord;
		}

		Coord operator- (Coord p_Coord)
		{
			Coord tempCoord = *this;
			tempCoord.x -= p_Coord.x;
			tempCoord.y -= p_Coord.y;

			return tempCoord;
		}

		//Multiply both coordinates by pNum, and get their floor (by truncation)
		Coord operator* (double pNum)
		{
			Coord tempCoord = *this;
			tempCoord.x *= pNum;
			tempCoord.y *= pNum;

			return tempCoord;
		}

		//Divide both coordinates by pNum, and get their floor (by truncation)
		Coord operator/ (double pNum)
		{
			Coord tempCoord = *this;
			tempCoord.x /= pNum;
			tempCoord.y /= pNum;

			return tempCoord;
		}
	};

	enum KeyPress
	{
		Key_Up,
		Key_Down,
		Key_Left,
		Key_Right,
		Key_Enter,
		Key_A,
		Key_B,
		Key_C,
		Key_D,
		Key_E,
		Key_F,
		Key_G,
		Key_H,
		Key_I,
		Key_J,
		Key_K,
		Key_L,
		Key_M,
		Key_N,
		Key_O,
		Key_P,
		Key_Q,
		Key_R,
		Key_S,
		Key_T,
		Key_U,
		Key_V,
		Key_W,
		Key_X,
		Key_Y,
		Key_Z,
		Key_Space,
		Key_Other
	};

	struct KeyInput
	{
		char keyNum;
		KeyPress arrowKey;
		bool isArrowKey;
	};

	void ClearScreen();

	int PressAnyKey(const char *prompt = "\n\nPress any key to continue . . .");

	void SetColour(Coord crd, int length, Colour fore = Colour::DarkBlue, Colour back = Colour::White);

	void gotoxy(int column, int line);
	int wherex();
	int wherey();

	struct Global
	{
		static HANDLE hStdin;
		static HANDLE hStdout;
	};

	KeyInput getArrowInput();
	bool Str_To_KeyPress(KeyPress& key, std::string chr);
	bool keyPress_To_Str(KeyPress key, std::string& chr);
}

#endif