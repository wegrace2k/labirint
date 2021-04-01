/*
 * main.cc
 *
 *  Created on: 31 ���. 2021 �.
 *      Author: TEN
 */
#include <iostream>
#include <stdexcept>

#include <SDL2/SDL.h>
#include <SDL2/SDL_main.h>

#include "RayCastingWindow.h"

int main(int, char **)
{
	SDL_Init(SDL_INIT_EVERYTHING);

	try {
		RayCastingWindow w;

		w.main_loop();

	} catch (const std::exception &e) {
		std::cerr << "�� ����� ���������� ��������� ��������� ������: "
				<< std::endl << e.what() << std::endl;
		return 1;
	} catch (...) {
		std::cerr << "�� ����� ���������� ��������� ��������� "
				"����������� ������" << std::endl;
		return 1;
	}


	return 0;
}
