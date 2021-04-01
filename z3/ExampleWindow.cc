/*
 * ExampleWindow.cc
 *
 *  Created on: 25 мар. 2021 г.
 *      Author: TEN
 */

#include "ExampleWindow.h"

#include <stdexcept>
#include <SDL2/SDL_image.h>

ExampleWindow::ExampleWindow(int width, int height)
: Window(width, height),
  _doroga_x(0), _doroga_y(470),
  _trava1_x(0), _trava1_y(700),
  _trava11_x(900), _trava11_y(700),
	_trava2_x(0), _trava2_y(232),
	_trava22_x(900), _trava22_y(232),
	_house_x(400), _house_y(118),
	_lesdal_x(0), _lesdal_y(180),
	_lesdal2_x(900), _lesdal2_y(180),
	_cloudback_x(0), _cloudback_y(0),
	_sun_x(660),_sun_y(0),
	_cloud2_x(0),_cloud2_y(0),
	_cloud1_x(900),_cloud1_y(0),
	_otboibliz_x(0), _otboibliz_y(700),
	_otboidaln_x(0), _otboidaln_y(435),
	_otboibliz1_x(900), _otboibliz1_y(700),
	_otboidaln1_x(900), _otboidaln1_y(435),
	_treemnog_x(0), _treemnog_y(235),
	_treemnog1_x(900), _treemnog1_y(235),
	_car_x(0), _car_y(540),
	_znak_x(900), _znak_y(650)

{

	//Добавляем Картинку png (Дорога)
	_doroga = std::shared_ptr<SDL_Texture>(
		IMG_LoadTexture(_renderer.get(), "doroga.png"),
		SDL_DestroyTexture);
	if (_doroga == nullptr)
		throw std::runtime_error(
				std::string("Не удалось закгрузить doroga.png") +
				std::string(SDL_GetError()));
	//И выводим ошибку если неудалось загрузить png


	_trava1 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "trava1.png"),
			SDL_DestroyTexture);
		if (_trava1 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить trava1.png") +
					std::string(SDL_GetError()));

	_trava11 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "trava11.png"),
			SDL_DestroyTexture);
		if (_trava11 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить trava11.png") +
					std::string(SDL_GetError()));

	_trava2 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "trava2.png"),
			SDL_DestroyTexture);
		if (_trava2 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить trava2.png") +
					std::string(SDL_GetError()));

	_trava22 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "trava22.png"),
			SDL_DestroyTexture);
		if (_trava22 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить trava22.png") +
					std::string(SDL_GetError()));

	_house = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "house.png"),
			SDL_DestroyTexture);
		if (_house == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить house.png") +
					std::string(SDL_GetError()));

	_lesdal = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "lesdal.png"),
			SDL_DestroyTexture);
		if (_lesdal == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить lesdal.png") +
					std::string(SDL_GetError()));

	_lesdal2 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "lesdal2.png"),
			SDL_DestroyTexture);
		if (_lesdal2 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить lesdal2.png") +
					std::string(SDL_GetError()));


	_cloudback = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "cloudback.png"),
			SDL_DestroyTexture);
		if (_cloudback == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить cloudback.png") +
					std::string(SDL_GetError()));

	_sun = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "sun.png"),
			SDL_DestroyTexture);
		if (_sun == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить sun.png") +
					std::string(SDL_GetError()));

	_cloud2 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "cloud2.png"),
			SDL_DestroyTexture);
		if (_cloud2 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить cloud2.png") +
					std::string(SDL_GetError()));

	_cloud1 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "cloud1.png"),
			SDL_DestroyTexture);
		if (_cloud1 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить cloud1.png") +
					std::string(SDL_GetError()));

	_otboibliz = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "otboibliz.png"),
			SDL_DestroyTexture);
		if (_otboibliz == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить otboibliz.png") +
					std::string(SDL_GetError()));

	_otboibliz1 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "otboibliz1.png"),
			SDL_DestroyTexture);
		if (_otboibliz1 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось закгрузить otboibliz1.png") +
					std::string(SDL_GetError()));

	_otboidaln = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "otboidaln.png"),
			SDL_DestroyTexture);
		if (_otboidaln == nullptr)
				throw std::runtime_error(
					std::string("Не удалось закгрузить otboidaln.png") +
					std::string(SDL_GetError()));

	_otboidaln1 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "otboidaln1.png"),
			SDL_DestroyTexture);
		if (_otboidaln1 == nullptr)
				throw std::runtime_error(
					std::string("Не удалось закгрузить otboidaln1.png") +
					std::string(SDL_GetError()));

	_treemnog = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "treemnog.png"),
			SDL_DestroyTexture);
		if (_treemnog == nullptr)
				throw std::runtime_error(
					std::string("Не удалось закгрузить treemnog.png") +
					std::string(SDL_GetError()));

	_treemnog1 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "treemnog1.png"),
			SDL_DestroyTexture);
		if (_treemnog1 == nullptr)
				throw std::runtime_error(
					std::string("Не удалось закгрузить treemnog1.png") +
					std::string(SDL_GetError()));


	_car = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "car.png"),
			SDL_DestroyTexture);
		if (_car == nullptr)
				throw std::runtime_error(
					std::string("Не удалось закгрузить car.png") +
					std::string(SDL_GetError()));

	_znak = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "znak.png"),
			SDL_DestroyTexture);
		if (_znak == nullptr)
				throw std::runtime_error(
					std::string("Не удалось закгрузить znak.png") +
					std::string(SDL_GetError()));


}

void ExampleWindow::render() //Добавляем изображение
{
		SDL_SetRenderDrawColor(_renderer.get(),32,30,95,255);
		SDL_RenderClear (_renderer.get());

	//Дорога


	SDL_Rect doroga_rect { _doroga_x, _doroga_y, 1000, 288 };
	SDL_RenderCopy(_renderer.get(), _doroga.get(), nullptr,&doroga_rect);


	SDL_Rect trava2_rect { _trava2_x, _trava2_y, 900, 238 };
	SDL_RenderCopy(_renderer.get(), _trava2.get(), nullptr,&trava2_rect);

	SDL_Rect trava22_rect { _trava22_x, _trava22_y, 900, 238 };
	SDL_RenderCopy(_renderer.get(), _trava22.get(), nullptr,&trava22_rect);



	SDL_Rect cloudback_rect { _cloudback_x, _cloudback_y, 900, 275 };
	SDL_RenderCopy(_renderer.get(), _cloudback.get(), nullptr,&cloudback_rect);

	SDL_Rect sun_rect { _sun_x, _sun_y, 247, 244 };
	SDL_RenderCopy(_renderer.get(), _sun.get(), nullptr,&sun_rect);


	SDL_Rect lesdal_rect { _lesdal_x, _lesdal_y, 900, 120 };
	SDL_RenderCopy(_renderer.get(), _lesdal.get(), nullptr,&lesdal_rect);

	SDL_Rect lesdal2_rect { _lesdal2_x, _lesdal2_y, 900, 120 };
	SDL_RenderCopy(_renderer.get(), _lesdal2.get(), nullptr,&lesdal2_rect);

	SDL_Rect cloud2_rect { _cloud2_x, _cloud2_y, 900, 244 };
	SDL_RenderCopy(_renderer.get(), _cloud2.get(), nullptr,&cloud2_rect);

	SDL_Rect cloud1_rect { _cloud1_x, _cloud1_y, 900, 244 };
	SDL_RenderCopy(_renderer.get(), _cloud1.get(), nullptr,&cloud1_rect);

	SDL_Rect house_rect { _house_x, _house_y, 385, 353 };
	SDL_RenderCopy(_renderer.get(), _house.get(), nullptr,&house_rect);



	SDL_Rect treemnog_rect { _treemnog_x, _treemnog_y, 510, 180 };
	SDL_RenderCopy(_renderer.get(), _treemnog.get(), nullptr,&treemnog_rect);

	SDL_Rect treemnog1_rect { _treemnog1_x, _treemnog1_y, 510, 180 };
	SDL_RenderCopy(_renderer.get(), _treemnog1.get(), nullptr,&treemnog1_rect);

	SDL_Rect otboidaln_rect { _otboidaln_x, _otboidaln_y, 900, 81 };
		SDL_RenderCopy(_renderer.get(), _otboidaln.get(), nullptr,&otboidaln_rect);

	SDL_Rect otboidaln1_rect { _otboidaln1_x, _otboidaln1_y, 900, 81 };
	SDL_RenderCopy(_renderer.get(), _otboidaln1.get(), nullptr,&otboidaln1_rect);

	SDL_Rect car_rect { _car_x, _car_y, 356, 120 };
	SDL_RenderCopy(_renderer.get(), _car.get(), nullptr,&car_rect);

	SDL_Rect otboibliz_rect { _otboibliz_x, _otboibliz_y, 900, 81 };
	SDL_RenderCopy(_renderer.get(), _otboibliz.get(), nullptr,&otboibliz_rect);

	SDL_Rect otboibliz1_rect { _otboibliz1_x, _otboibliz1_y, 900, 81 };
	SDL_RenderCopy(_renderer.get(), _otboibliz1.get(), nullptr,&otboibliz1_rect);

	SDL_Rect trava1_rect { _trava1_x, _trava1_y, 900, 200 };
	SDL_RenderCopy(_renderer.get(), _trava1.get(), nullptr,&trava1_rect);

	SDL_Rect trava11_rect { _trava11_x, _trava11_y, 900, 200 };
	SDL_RenderCopy(_renderer.get(), _trava11.get(), nullptr,&trava11_rect);

	SDL_Rect znak_rect { _znak_x, _znak_y, 59, 205 };
	SDL_RenderCopy(_renderer.get(), _znak.get(), nullptr,&znak_rect);



}


void ExampleWindow::do_logic() //Движение картинки
{
	_trava1_x -= 2;
	if (_trava1_x <= -width())
		_trava1_x = 900;

	_trava11_x -= 2;
		if (_trava11_x <= -width())
			_trava11_x = 900;

	_trava2_x -= 2;
		if (_trava2_x <= -width())
			_trava2_x = 900;

	_trava22_x -= 2;
		if (_trava22_x <= -width())
			_trava22_x = 900;

	_house_x -= 2;
		if (_house_x <= -width())
			_house_x = 900;

	_lesdal_x -= 1;
		if (_lesdal_x <= -width())
			_lesdal_x = 900;
	_lesdal2_x -= 1;
		if (_lesdal2_x <= -width())
			_lesdal2_x = 900;

	_cloud2_x += 1;
		if (_cloud2_x >= width())
			_cloud2_x = -900;

	_cloud1_x += 1;
		if (_cloud1_x >= width())
			_cloud1_x = -900;

//	_otboibliz_x -= 1;
//		if (_otboibliz_x <= -width())
//			_otboibliz_x = 900;
//	_otboibliz1_x -= 1;
//		if (_otboibliz1_x <= -width())
//			_otboibliz1_x = 900;

//	_otboidaln_x -= 1;
//		if (_otboidaln_x <= -width())
//			_otboidaln_x = 900;
//	_otboidaln1_x -= 1;
//		if (_otboidaln1_x <= -width())
//			_otboidaln1_x = 900;

	_treemnog_x -= 2;
		if (_treemnog_x <= -width())
			_treemnog_x = 900;

	_treemnog1_x -= 2;
		if (_treemnog1_x <= -width())
			_treemnog1_x = 900;


	_car_x += 1;
		if (_car_x >= width())
			_car_x = -300;

	_znak_x -= 2;
		if (_znak_x <= -width())
			_znak_x = 900;



}

void ExampleWindow::handle_keys(const Uint8 *keys)
{
	if (keys[SDL_SCANCODE_DOWN])
		_car_y += 4;
	if (keys[SDL_SCANCODE_UP])
		_car_y -= 4;
	if (keys[SDL_SCANCODE_RIGHT])
			_car_x += 5;
	if (keys[SDL_SCANCODE_LEFT])
			_car_x -= 3;

}
