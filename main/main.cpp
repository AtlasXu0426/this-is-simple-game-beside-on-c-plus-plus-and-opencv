#include"game.h"
int main()
{
	GAME game;
	while (true)
	{
		int key = cv::waitKeyEx(47);
		game.handle_input(key);
		game.update();
		game.draw();
	}
}

