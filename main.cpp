#include <SFML/Graphics.hpp>

using namespace sf;
const float SC_WIDTH = 800.f;
const float SC_HEIGHT = 600.f;
int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(SC_WIDTH, SC_HEIGHT), "SFML Works!");
	float radius = 200.f;
	CircleShape c1(radius);
	c1.move((SC_WIDTH - 2 * radius)/ 2, (SC_HEIGHT - 2 * radius)/ 2);
	c1.setFillColor(Color{ 200,100,50 });
	const int size = 5;
	float dx = 100.f;
	RectangleShape arr_rect[size];
	for (int i = 0; i < size; i++) {
		radius = 200.f - 40 * i;
		arr_rect[i].setSize(Vector2f(50.f, 50.f));
		arr_rect[i].move((SC_WIDTH - 2 * radius) / 2, (SC_HEIGHT - 2 * radius) / 2);
		arr_rect[i].setFillColor(Color{ (Uint8)(50 * i), (Uint8)(rand() % 256) ,
			(Uint8)(rand() % 256) });
	
	
	float dx = 100.f;
	RectangleShape arr_rect[size];
	for (int i = 0; i < size; i++) {
		radius = 200.f - 40 * i;
		arr_rect[i].setSize(Vector2f(50.f, 50.f));
		arr_rect[i].move((SC_WIDTH - 2 * radius) / 2, (SC_HEIGHT - 2 * radius) / 2);
		arr_rect[i].setFillColor(Color{ (Uint8)(50 * i), (Uint8)(rand() % 256) ,
			(Uint8)(rand() % 256) });
	}

	RectangleShape arr_rect[size];
	for (int i = 0; i < size; i++) {
		arr_rect[i].setSize(Vector2f(50.f, 50.f));
	}
	while (window.isOpen())
	{
		//1 Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))

			for (int i = 0; i < size; i++) {

				arr_rect[i].(radius - 25 * i);
				arr_rect[i].setFillColor(Color{ (Uint8)(255 - 10 * i), 150, 75});
			}
		
		// Отрисовка окна 
		window.clear();
		window.draw(c1);
		window.display();
	}

	return 0;
}