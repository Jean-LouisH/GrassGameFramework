/**
 * GLUT
 *
 * Author: Jean-Louis Haywood
 *
 * Defines all the freeglut functions to handle the OpenGL window context, timing and inputs.
 */

void keyPressed(unsigned char key, int x, int y);	//During key press.
void keySpecial(unsigned char key, int x, int y);	//During key press for special keys.
void keyUp(unsigned char key, int x, int y);		//After key press.
void keyUpSpecial(unsigned char key, int x, int y);	//After key press for special keys.
void resize(int width, int height);					//Maintains the window size.
void runGLUT(int argc, char **argv);				//All Suprannua freeglut callback functions
void timer(int milliseconds);						//For frame rate.