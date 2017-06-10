#include "../../Suprannua Engine/SuprannuaEngine.h" 

/*Custom code for Initialisation, Scripting and Controls*/

/*Global variables*/

char gameTitle[64] = "[Test] AI Algorithms";
Rect worldSizeMetres = { 200,150 }; // m
double dpadSensitivity = 10.0; // m/s
double cameraScrollSpeed = 50.0; // m/s
double platformGravity = 9.8; // m/s^2
double gravityConstant = 6.674E-11; // m/s^2

void initGameAssets()
{
	camera_setViewportWidth(40);
	camera_setTarget(edit_get(CAMERA, 0, XCENTRE), edit_get(CAMERA, 0, YCENTRE));
	edit_createRectangle(BACKGROUND, 0, edit_get(GAME, 0, WIDTH), 0, edit_get(GAME, 0, HEIGHT), SKY_BLUE);
}

/*Controls*/
void readInput()
{
	if (gameState == GAMEPLAY)
	{

	}
	else if (gameState == MENU)
	{

	}
}

void runGameLogic()
{
	physics_limitBoundary();
	physics_detectPolygonCollision();
	physics_detectPlatformCollision();
}