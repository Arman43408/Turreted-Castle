#include <windows.h>
#include<cstdio>
#include <GL/gl.h>
#define PI          3.141516
#include <GL/glut.h>
#include<math.h>

float _cloudMove = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.50f;
GLfloat flow=0.0f;
GLfloat overflow=0.0f;
GLfloat paraflow=0.0f;

void updateCloud(int value) {

_cloudMove -= 0.42;

if(_cloudMove < -100)
{
_cloudMove = 200.0;
}

glutPostRedisplay(); //Notify GLUT that the display has changed

 glutTimerFunc(20, updateCloud, 0); //Notify GLUT to call update again in 25 milliseconds
}

void updateBoat(int value) {


    if(position >150.0)
        position = -100.0f;

    position += speed;


glutPostRedisplay(); //Notify GLUT that the display has changed

 glutTimerFunc(20, updateBoat, 0); //Notify GLUT to call update again in 25 milliseconds
}

void updateflow(int value) {


    if(flow <-20.0)
        flow = 5.0f;

    flow -= speed;


glutPostRedisplay(); //Notify GLUT that the display has changed

 glutTimerFunc(20, updateflow, 0); //Notify GLUT to call update again in 25 milliseconds
}
void updatepara(int value) {


    if(paraflow >90.0)
        paraflow = 10.0f;

    paraflow += speed;


glutPostRedisplay(); //Notify GLUT that the display has changed

 glutTimerFunc(20, updatepara, 0); //Notify GLUT to call update again in 25 milliseconds
}
void updateoverflow(int value) {


    if(overflow <-6.0)
        overflow = 1.0f;

    overflow -= speed;


glutPostRedisplay(); //Notify GLUT that the display has changed

 glutTimerFunc(20, updateoverflow, 0); //Notify GLUT to call update again in 25 milliseconds
}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	gluOrtho2D(-100, 100, -100, 100);
	glLineWidth(5.0);

    int i;
    int tringle2=40;
    GLfloat tp2 =2.0f * PI  ;
    GLfloat p1=0.0f; GLfloat q1= 14.0f; GLfloat r1 = 2.0f;

    //pro
    glBegin(GL_POLYGON);
    glColor3ub(0, 215, 0);              //for ground and divide sky and river
	glVertex2f(-100.0f, 0.0f);
	glVertex2f(-100.0f, 25.0f);
	glVertex2f(100.0f, 25.0f);
	glVertex2f(100.0f, 0.0f);
	glVertex2f(100.0f, -55.0f);
	glVertex2f(-100.0f, -55.0f);
	glEnd();

	glBegin(GL_QUADS);                                  // sky
	glColor3ub(98,178,247);
	glVertex2f(-100.0f, 25.0f);
	glVertex2f(-100.0f, 100.0f);
	glVertex2f(100.0f, 100.0f);
	glVertex2f(100.0f, 25.0f);
	glEnd();


	glBegin(GL_QUADS);                                  // river
	glColor3ub(87, 126, 255);
	glVertex2f(-100.0f, -55.0f);
	glVertex2f(100.0f, -55.0f);
	glVertex2f(100.0f, -100.0f);
	glVertex2f(-100.0f, -100.0f);
	glEnd();



	glFlush();
}
void riverup(){
glBegin(GL_QUADS);                                  // river upper
	glColor3ub(87, 126, 255);
	glVertex2f(-3.0f, -55.0f);
	glVertex2f(23.0f, 25.0f);
	glVertex2f(46.0f, 25.0f);
	glVertex2f(73.0f, -55.0f);
	glEnd();
}
void piche()
{

                                            //pro testing ghassss1
    glBegin(GL_TRIANGLES);
    glColor3ub(40, 112, 13);
	glVertex2f(80.0f, -30.0f);
	glVertex2f(85.0f, -25.0f);
	glVertex2f(75.0f, -30.0f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(40, 112, 13);
	glVertex2f(80.0f, -30.0f);
	glVertex2f(70.0f, -25.0f);
	glVertex2f(75.0f, -30.0f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(40, 112, 13);
	glVertex2f(80.0f, -30.0f);
	glVertex2f(80.0f, -22.0f);
	glVertex2f(75.0f, -30.0f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(40, 112, 13);
	glVertex2f(80.0f, -30.0f);
	glVertex2f(76.0f, -22.0f);
	glVertex2f(75.0f, -30.0f);
	glEnd();

                                                //pro testing ghassss2
     glBegin(GL_TRIANGLES);
    glColor3ub(40, 112, 13);
	glVertex2f(90.0f, -30.0f);
	glVertex2f(95.0f, -25.0f);
	glVertex2f(85.0f, -30.0f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(40, 112, 13);
	glVertex2f(90.0f, -30.0f);
	glVertex2f(80.0f, -25.0f);
	glVertex2f(85.0f, -30.0f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(40, 112, 13);
	glVertex2f(90.0f, -30.0f);
	glVertex2f(90.0f, -22.0f);
	glVertex2f(85.0f, -30.0f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(40, 112, 13);
	glVertex2f(90.0f, -30.0f);
	glVertex2f(86.0f, -22.0f);
	glVertex2f(85.0f, -30.0f);
	glEnd();

                                                    //Mountains pro
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(-100.0f, 25.0f);
	glVertex2f(-98.0f, 28.0f);
	glVertex2f(-96.0f, 28.0f);
	glVertex2f(-94.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(-94.0f, 25.0f);
	glVertex2f(-92.0f, 28.0f);
	glVertex2f(-90.0f, 30.0f);
	glVertex2f(-88.0f, 30.0f);
	glVertex2f(-86.0f, 30.0f);
	glVertex2f(-84.0f, 28.0f);
	glVertex2f(-82.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(-82.0f, 25.0f);
	glVertex2f(-80.0f, 28.0f);
	glVertex2f(-78.0f, 28.0f);
	glVertex2f(-76.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(-76.0f, 25.0f);
	glVertex2f(-74.0f, 28.0f);
	glVertex2f(-72.0f, 28.0f);
	glVertex2f(-70.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(-70.0f, 25.0f);
	glVertex2f(-68.0f, 28.0f);
	glVertex2f(-66.0f, 28.0f);
	glVertex2f(-64.0f, 25.0f);
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(40, 112, 13);
	glVertex2f(66.0f, 25.0f);
	glVertex2f(66.0f, 30.0f);
	glVertex2f(65.0f, 30.0f);
	glVertex2f(65.0f, 25.0f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(40, 112, 13);
	glVertex2f(67.50f, 30.0f);
	glVertex2f(65.50f, 33.50f);
	glVertex2f(63.50f, 30.0f);
	glEnd();                                    //tree1
	glBegin(GL_QUADS);
    glColor3ub(40, 112, 13);
	glVertex2f(74.0f, 25.0f);
	glVertex2f(74.0f, 30.0f);
	glVertex2f(73.0f, 30.0f);
	glVertex2f(73.0f, 25.0f);
	glEnd();
	glBegin(GL_TRIANGLES);
    glColor3ub(40, 112, 13);
	glVertex2f(75.50f, 30.0f);
	glVertex2f(73.50f, 33.50f);
	glVertex2f(71.50f, 30.0f);
	glEnd();                                    //tree2

	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(-58.0f, 25.0f);
	glVertex2f(-56.0f, 28.0f);
	glVertex2f(-54.0f, 30.0f);
	glVertex2f(-52.0f, 30.0f);
	glVertex2f(-50.0f, 30.0f);
	glVertex2f(-48.0f, 28.0f);
	glVertex2f(-46.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(-46.0f, 25.0f);
	glVertex2f(-44.0f, 28.0f);
	glVertex2f(-42.0f, 30.0f);
	glVertex2f(-40.0f, 30.0f);
	glVertex2f(-38.0f, 30.0f);
	glVertex2f(-36.0f, 28.0f);
	glVertex2f(-34.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(-32.0f, 25.0f);
	glVertex2f(-30.0f, 28.0f);
	glVertex2f(-28.0f, 30.0f);
	glVertex2f(-26.0f, 30.0f);
	glVertex2f(-24.0f, 35.0f);
	glVertex2f(-22.0f, 35.0f);
	glVertex2f(-20.0f, 30.0f);
	glVertex2f(-18.0f, 30.0f);
	glVertex2f(-16.0f, 28.0f);
	glVertex2f(-14.0f, 25.0f);
	glVertex2f(-32.0f, 25.0f);
	glEnd();
                                                    //LEFT
                                                    //RIGHT START

    glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(58.0f, 25.0f);
	glVertex2f(60.0f, 27.0f);
	glVertex2f(62.0f, 27.0f);
	glVertex2f(64.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(58.0f, 25.0f);
	glVertex2f(56.0f, 28.0f);
	glVertex2f(54.0f, 30.0f);
	glVertex2f(52.0f, 30.0f);
	glVertex2f(50.0f, 30.0f);
	glVertex2f(48.0f, 28.0f);
	glVertex2f(46.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(46.0f, 25.0f);
	glVertex2f(44.0f, 28.0f);
	glVertex2f(42.0f, 30.0f);
	glVertex2f(40.0f, 30.0f);
	glVertex2f(38.0f, 30.0f);
	glVertex2f(36.0f, 28.0f);
	glVertex2f(34.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(94.0f, 25.0f);
	glVertex2f(92.0f, 28.0f);
	glVertex2f(90.0f, 30.0f);
	glVertex2f(88.0f, 30.0f);
	glVertex2f(86.0f, 35.0f);
	glVertex2f(84.0f, 35.0f);
	glVertex2f(82.0f, 30.0f);
	glVertex2f(80.0f, 30.0f);
	glVertex2f(78.0f, 28.0f);
	glVertex2f(76.0f, 25.0f);
	glVertex2f(94.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(32.0f, 25.0f);
	glVertex2f(34.0f, 27.0f);
	glVertex2f(36.0f, 27.0f);
	glVertex2f(38.0f, 25.0f);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(100.0f, 25.0f);
	glVertex2f(98.0f, 28.0f);
	glVertex2f(96.0f, 28.0f);
	glVertex2f(94.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(94.0f, 25.0f);
	glVertex2f(92.0f, 28.0f);
	glVertex2f(90.0f, 30.0f);
	glVertex2f(88.0f, 30.0f);
	glVertex2f(86.0f, 30.0f);
	glVertex2f(84.0f, 28.0f);
	glVertex2f(82.0f, 25.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(40, 112, 13);
	glVertex2f(82.0f, 25.0f);
	glVertex2f(80.0f, 28.0f);
	glVertex2f(78.0f, 28.0f);
	glVertex2f(76.0f, 25.0f);
	glEnd();
}

void castle()
{
    glScalef(2.2f, 2.4f, 0.0f);
    glTranslatef(-37.0f,-2.0f,0.0f);

    int i;
    int tringle2=40;
    GLfloat tp2 =2.0f * PI  ;
    GLfloat p1=0.0f; GLfloat q1= 14.0f; GLfloat r1 = 2.0f;



    glBegin(GL_QUADS);             // Background building
	glColor3ub(160, 160, 160);
	glVertex2f(12.0f, 30.0f);
	glVertex2f(12.0f, -15.0f);
	glVertex2f(-8.0f, -15.0f);
	glVertex2f(-8.0f, 30.0f);
	glEnd();

	glBegin(GL_QUADS);             // Background building
	glColor3ub(112, 128, 144);
	glVertex2f(3.0f, 37.0f);
	glVertex2f(8.0f,  30.0f);
	glVertex2f(-8.0f, 30.0f);
	glVertex2f(-3.0f, 37.0f);
	glEnd();

	glBegin(GL_TRIANGLES);             // Background building
	glColor3ub(160, 160, 160);
	glVertex2f(0.0f, 45.0f);
	glVertex2f(3.0f, 37.0f);
	glVertex2f(-3.0f, 37.0f);
	glEnd();


	glBegin(GL_QUADS);             // tallest tower
	glColor3ub(180, 180, 180);
	glVertex2f(4.5f, 45.0f);
	glVertex2f(4.5f, -15.0f);
	glVertex2f(10.5f, -15.0f);
	glVertex2f(10.5f, 45.0f);
	glEnd();

	glBegin(GL_TRIANGLES);             // tallest tower
	glColor3ub(112, 128, 144);
	glVertex2f(7.5f, 50.0f);
	glVertex2f(5.0f, 45.0f);
	glVertex2f(10.0f, 45.0f);
	glEnd();

	glBegin(GL_QUADS);             // tallest tower
	glColor3ub(180, 180, 180);
	glVertex2f(5.5f, 50.0f);
	glVertex2f(5.5f, 46.0f);
	glVertex2f(9.5f, 46.0f);
	glVertex2f(9.5f, 50.0f);
	glEnd();

	glBegin(GL_TRIANGLES);             // tallest tower
	glColor3ub(112, 128, 144);
	glVertex2f(7.5f, 55.0f);
	glVertex2f(5.5f, 50.0f);
	glVertex2f(9.5f, 50.0f);
	glEnd();



	glBegin(GL_QUADS);             // Center Background
	glColor3ub(190, 190, 190);
	glVertex2f(27.0f, 5.0f);
	glVertex2f(28.0f, -15.0f);
	glVertex2f(-28.0f, -15.0f);
	glVertex2f(-27.0f, 5.0f);
	glEnd();


	glBegin(GL_QUADS);             // Center 1.1
	glColor3ub(210, 210, 210);
	glVertex2f(7.0f, 10.0f);
	glVertex2f(7.0f, -15.0f);
	glVertex2f(-7.0f, -15.0f);
	glVertex2f(-7.0f, 10.0f);
	glEnd();


	glBegin(GL_TRIANGLES);             // Triangle 1.1
	glColor3ub(210, 210, 210);
	glVertex2f(0.0f, 25.0f);
	glVertex2f(4.0f, 10.0f);
	glVertex2f(-4.0f, 10.0f);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(112, 128, 144);   //1
	glVertex2f(7.0f, 10.0f);
	glVertex2f(-7.0f, 10.0f);
	glEnd();


	glBegin(GL_TRIANGLES);             // Triangle 1.2
	glColor3ub(112, 128, 144);
	glVertex2f(-6.0f, 20.0f);
	glVertex2f(-5.0f, 10.0f);
	glVertex2f(-7.0f, 10.0f);
	glEnd();


	glBegin(GL_TRIANGLES);             // Triangle 1.3
	glColor3ub(112, 128, 144);
	glVertex2f(6.0f, 20.0f);
	glVertex2f(5.0f, 10.0f);
	glVertex2f(7.0f, 10.0f);
	glEnd();

    //end 1





	glBegin(GL_QUADS);             // Quads -2.1
	glColor3ub(210, 210, 210);
	glVertex2f(-9.0f, 5.0f);
	glVertex2f(-9.0f, -15.0f);
	glVertex2f(-18.0f, -15.0f);
	glVertex2f(-18.0f, 5.0f);
	glEnd();


	glBegin(GL_TRIANGLES);             // Triangle -2.1
	glColor3ub(112, 128, 144);
	glVertex2f(-13.5f, 20.0f);
	glVertex2f(-9.0f, 5.0f);
	glVertex2f(-18.0f, 5.0f);
	glEnd();


	glBegin(GL_QUADS);             // Quads -2.2
	glColor3ub(210, 210, 210);
	glVertex2f(-10.0f, 15.0f);
	glVertex2f(-10.0f, 7.0f);
	glVertex2f(-17.0f, 7.0f);
	glVertex2f(-17.0f, 15.0f);
	glEnd();

    glBegin(GL_TRIANGLES);             // Triangle -2.2
	glColor3ub(112, 128, 144);
	glVertex2f(-13.5f, 25.0f);
	glVertex2f(-10.0f, 15.0f);
	glVertex2f(-17.0f, 15.0f);
	glEnd();

    //end -2



	glBegin(GL_QUADS);             // Quads 2.1
	glColor3ub(210, 210, 210);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(9.0f, -15.0f);
	glVertex2f(18.0f, -15.0f);
	glVertex2f(18.0f, 5.0f);
	glEnd();


	glBegin(GL_TRIANGLES);             // Triangle 2.1
	glColor3ub(112, 128, 144);
	glVertex2f(13.5f, 20.0f);
	glVertex2f(9.0f, 5.0f);
	glVertex2f(18.0f, 5.0f);
	glEnd();


	glBegin(GL_QUADS);             // Quads 2.2
	glColor3ub(210, 210, 210);
	glVertex2f(10.0f, 15.0f);
	glVertex2f(10.0f, 7.0f);
	glVertex2f(17.0f, 7.0f);
	glVertex2f(17.0f, 15.0f);
	glEnd();


	glBegin(GL_TRIANGLES);             // Triangle 2.2
	glColor3ub(112, 128, 144);
	glVertex2f(13.5f, 25.0f);
	glVertex2f(10.0f, 15.0f);
	glVertex2f(17.0f, 15.0f);
	glEnd();

    //end 2


	 glBegin(GL_QUADS);             // Quads -3.1
	glColor3ub(210, 210, 210);
	glVertex2f(-20.0f, 2.0f);
	glVertex2f(-20.0f, -15.0f);
	glVertex2f(-28.0f, -15.0f);
	glVertex2f(-28.0f, 2.0f);
	glEnd();


	glBegin(GL_TRIANGLES);             // Triangle -3.1
	glColor3ub(112, 128, 144);
	glVertex2f(-24.0f, 17.0f);
	glVertex2f(-20.0f, 2.0f);
	glVertex2f(-28.0f, 2.0f);
	glEnd();


	glBegin(GL_QUADS);             // Quads -3.2
	glColor3ub(210, 210, 210);
	glVertex2f(-21.0f, 10.0f);
	glVertex2f(-21.0f, 5.0f);
	glVertex2f(-27.0f, 5.0f);
	glVertex2f(-27.0f, 10.0f);
	glEnd();

    glBegin(GL_TRIANGLES);             // Triangle -3.2
	glColor3ub(112, 128, 144);
	glVertex2f(-24.0f, 18.0f);
	glVertex2f(-21.0f, 10.0f);
	glVertex2f(-27.0f, 10.0f);
	glEnd();

    //end -3


     glBegin(GL_QUADS);             // Quads 3.1
	glColor3ub(210, 210, 210);
	glVertex2f(20.0f, 2.0f);
	glVertex2f(20.0f, -15.0f);
	glVertex2f(28.0f, -15.0f);
	glVertex2f(28.0f, 2.0f);
	glEnd();


	glBegin(GL_TRIANGLES);             // Triangle 3.1
	glColor3ub(112, 128, 144);
	glVertex2f(24.0f, 17.0f);
	glVertex2f(20.0f, 2.0f);
	glVertex2f(28.0f, 2.0f);
	glEnd();


	glBegin(GL_QUADS);             // Quads 33.2
	glColor3ub(210, 210, 210);
	glVertex2f(21.0f, 10.0f);
	glVertex2f(21.0f, 5.0f);
	glVertex2f(27.0f, 5.0f);
	glVertex2f(27.0f, 10.0f);
	glEnd();

    glBegin(GL_TRIANGLES);             // Triangle 3.2
	glColor3ub(112, 128, 144);
	glVertex2f(24.0f, 18.0f);
	glVertex2f(21.0f, 10.0f);
	glVertex2f(27.0f, 10.0f);
	glEnd();

    //end 3

    //Connections
    glBegin(GL_QUADS);
    glColor3ub(112, 128, 144);   //1
	glVertex2f(7.0f, 5.0f);
	glVertex2f(7.0f, 0.0f);
	glVertex2f(9.0f, 0.0f);
	glVertex2f(9.0f, 5.0f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(112, 128, 144);   //-1
	glVertex2f(-7.0f, 5.0f);
	glVertex2f(-7.0f, 0.0f);
	glVertex2f(-9.0f, 0.0f);
	glVertex2f(-9.0f, 5.0f);
	glEnd();

	  glBegin(GL_QUADS);
    glColor3ub(112, 128, 144);   //-2
	glVertex2f(-18.0f, 5.0f);
	glVertex2f(-18.0f, 0.0f);
	glVertex2f(-20.0f, -0.5f);
	glVertex2f(-20.0f, 4.5f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3ub(112, 128, 144);   //2
	glVertex2f(18.0f, 5.0f);
	glVertex2f(18.0f, 0.0f);
	glVertex2f(20.0f, -0.5f);
	glVertex2f(20.0f, 4.5f);
	glEnd();

	//Lines

	glBegin(GL_LINES);
    glColor3ub(112, 128, 144);   //1
	glVertex2f(7.0f, -3.0f);
	glVertex2f(9.0f, -3.0f);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(112, 128, 144);   //-1
	glVertex2f(-7.0f, -3.0f);
	glVertex2f(-9.0f, -3.0f);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(112, 128, 144);   //2
	glVertex2f(18.0f, -3.0f);
	glVertex2f(20.0f, -3.5f);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(112, 128, 144);   //-2
	glVertex2f(-18.0f, -3.0f);
	glVertex2f(-20.0f, -3.5f);
	glEnd();

	glBegin (GL_TRIANGLE_FAN);     //Clock
    glColor3ub (255, 255, 255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );
    }
    glEnd ();




    glFlush();
}
void window()
{
    //Window
	glBegin(GL_QUADS);             // window -3.1.1
	glColor3ub(90, 90, 90);
	glVertex2f(-26.0f, 1.0f);
	glVertex2f(-26.0f, -1.5f);
	glVertex2f(-27.5f, -1.5f);
	glVertex2f(-27.5f, 1.0f);
	glEnd();


	glBegin(GL_QUADS);             // window -3.1.2
	glColor3ub(90, 90, 90);
	glVertex2f(-23.0f, 1.0f);
	glVertex2f(-23.0f, -1.5f);
	glVertex2f(-25.0f, -1.5f);
	glVertex2f(-25.0f, 1.0f);
	glEnd();


	glBegin(GL_QUADS);             // window -3.1.3
	glColor3ub(90, 90, 90);
	glVertex2f(-20.5f, 1.0f);
	glVertex2f(-20.5f, -1.5f);
	glVertex2f(-22.0f, -1.5f);
	glVertex2f(-22.0f, 1.0f);
	glEnd();


	  //Window
	glBegin(GL_QUADS);             // window -2.1.1
	glColor3ub(90, 90, 90);
	glVertex2f(-15.5f, 4.0f);
	glVertex2f(-15.5f, 1.0f);
	glVertex2f(-17.5f, 1.0f);
	glVertex2f(-17.5f, 4.0f);
	glEnd();


	glBegin(GL_QUADS);             // window -2.1.2
	glColor3ub(90, 90, 90);
	glVertex2f(-12.0f, 4.0f);
	glVertex2f(-12.0f, 1.0f);
	glVertex2f(-15.0f, 1.0f);
	glVertex2f(-15.0f, 4.0f);
	glEnd();


	glBegin(GL_QUADS);             // window -2.1.3
	glColor3ub(90, 90, 90);
	glVertex2f(-9.5f, 4.0f);
	glVertex2f(-9.5f, 1.0f);
	glVertex2f(-11.5f, 1.0f);
	glVertex2f(-11.5f, 4.0f);
	glEnd();

    glBegin(GL_QUADS);             // window 3.1.1
	glColor3ub(90, 90, 90);
	glVertex2f(26.0f, 1.0f);
	glVertex2f(26.0f, -1.5f);
	glVertex2f(27.5f, -1.5f);
	glVertex2f(27.5f, 1.0f);
	glEnd();


	glBegin(GL_QUADS);             // window 3.1.2
	glColor3ub(90, 90, 90);
	glVertex2f(23.0f, 1.0f);
	glVertex2f(23.0f, -1.5f);
	glVertex2f(25.0f, -1.5f);
	glVertex2f(25.0f, 1.0f);
	glEnd();


	glBegin(GL_QUADS);             // window 3.1.3
	glColor3ub(90, 90, 90);
	glVertex2f(20.5f, 1.0f);
	glVertex2f(20.5f, -1.5f);
	glVertex2f(22.0f, -1.5f);
	glVertex2f(22.0f, 1.0f);
	glEnd();


	  //Window
	glBegin(GL_QUADS);             // window 2.1.1
	glColor3ub(90, 90, 90);
	glVertex2f(15.5f, 4.0f);
	glVertex2f(15.5f, 1.0f);
	glVertex2f(17.5f, 1.0f);
	glVertex2f(17.5f, 4.0f);
	glEnd();


	glBegin(GL_QUADS);             // window 2.1.2
	glColor3ub(90, 90, 90);
	glVertex2f(12.0f, 4.0f);
	glVertex2f(12.0f, 1.0f);
	glVertex2f(15.0f, 1.0f);
	glVertex2f(15.0f, 4.0f);
	glEnd();


	glBegin(GL_QUADS);             // window 2.1.3
	glColor3ub(90, 90, 90);
	glVertex2f(9.5f, 4.0f);
	glVertex2f(9.5f, 1.0f);
	glVertex2f(11.5f, 1.0f);
	glVertex2f(11.5f, 4.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -3.2.1
	glColor3ub(90, 90, 90);
	glVertex2f(-25.5f, 9.0f);
	glVertex2f(-25.5f, 8.0f);
	glVertex2f(-26.5f, 8.0f);
	glVertex2f(-26.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -3.2.2
	glColor3ub(90, 90, 90);
	glVertex2f(-23.5f, 9.0f);
	glVertex2f(-23.5f, 8.0f);
	glVertex2f(-24.5f, 8.0f);
	glVertex2f(-24.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -3.2.3
	glColor3ub(90, 90, 90);
	glVertex2f(-21.5f, 9.0f);
	glVertex2f(-21.5f, 8.0f);
	glVertex2f(-22.5f, 8.0f);
	glVertex2f(-22.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -2.2.1
	glColor3ub(90, 90, 90);
	glVertex2f(-15.0f, 14.0f);
	glVertex2f(-15.0f, 13.0f);
	glVertex2f(-16.5f, 13.0f);
	glVertex2f(-16.5f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -2.2.2
	glColor3ub(90, 90, 90);
	glVertex2f(-13.0f, 14.0f);
	glVertex2f(-13.0f, 13.0f);
	glVertex2f(-14.0f, 13.0f);
	glVertex2f(-14.0f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -2.2.3
	glColor3ub(90, 90, 90);
	glVertex2f(-10.5f, 14.0f);
	glVertex2f(-10.5f, 13.0f);
	glVertex2f(-12.0f, 13.0f);
	glVertex2f(-12.0f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 3.2.1
	glColor3ub(90, 90, 90);
	glVertex2f(25.5f, 9.0f);
	glVertex2f(25.5f, 8.0f);
	glVertex2f(26.5f, 8.0f);
	glVertex2f(26.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 3.2.2
	glColor3ub(90, 90, 90);
	glVertex2f(23.5f, 9.0f);
	glVertex2f(23.5f, 8.0f);
	glVertex2f(24.5f, 8.0f);
	glVertex2f(24.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 3.2.3
	glColor3ub(90, 90, 90);
	glVertex2f(21.5f, 9.0f);
	glVertex2f(21.5f, 8.0f);
	glVertex2f(22.5f, 8.0f);
	glVertex2f(22.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 2.2.1
	glColor3ub(90, 90, 90);
	glVertex2f(15.0f, 14.0f);
	glVertex2f(15.0f, 13.0f);
	glVertex2f(16.5f, 13.0f);
	glVertex2f(16.5f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 2.2.2
	glColor3ub(90, 90, 90);
	glVertex2f(13.0f, 14.0f);
	glVertex2f(13.0f, 13.0f);
	glVertex2f(14.0f, 13.0f);
	glVertex2f(14.0f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 2.2.3
	glColor3ub(90, 90, 90);
	glVertex2f(10.5f, 14.0f);
	glVertex2f(10.5f, 13.0f);
	glVertex2f(12.0f, 13.0f);
	glVertex2f(12.0f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // tallest tower 1
	glColor3ub(90, 90, 90);
	glVertex2f(6.0f, 49.0f);
	glVertex2f(6.0f, 47.0f);
	glVertex2f(9.0f, 47.0f);
	glVertex2f(9.0f, 49.0f);
	glEnd();

	glBegin(GL_QUADS);             // tallest tower 2
	glColor3ub(90, 90, 90);
	glVertex2f(5.5f, 44.0f);
	glVertex2f(5.5f, 41.0f);
	glVertex2f(9.5f, 41.0f);
	glVertex2f(9.5f, 44.0f);
	glEnd();

	glBegin(GL_QUADS);             // background 1
	glColor3ub(90, 90, 90);
	glVertex2f(-5.5f, 29.5f);
	glVertex2f(-5.5f, 27.5f);
	glVertex2f(-7.5f, 27.5f);
	glVertex2f(-7.5f, 29.5f);
	glEnd();

	glBegin(GL_QUADS);             // background 2
	glColor3ub(90, 90, 90);
	glVertex2f(-2.5f, 29.5f);
	glVertex2f(-2.5f, 27.5f);
	glVertex2f(-4.5f, 27.5f);
	glVertex2f(-4.5f, 29.5f);
	glEnd();

	glBegin(GL_QUADS);             // background 3
	glColor3ub(90, 90, 90);
	glVertex2f(0.5f, 29.5f);
	glVertex2f(0.5f, 27.5f);
	glVertex2f(-1.5f, 27.5f);
	glVertex2f(-1.5f, 29.5f);
	glEnd();

	glBegin(GL_QUADS);             // background 3
	glColor3ub(90, 90, 90);
	glVertex2f(3.5f, 29.5f);
	glVertex2f(3.5f, 27.5f);
	glVertex2f(1.5f, 27.5f);
	glVertex2f(1.5f, 29.5f);
	glEnd();

	glBegin(GL_QUADS);             // Center 1.1
	glColor3ub(90, 90, 90);
	glVertex2f(5.0f, 8.0f);
	glVertex2f(5.0f, 0.0f);
	glVertex2f(-5.0f, 0.0f);
	glVertex2f(-5.0f, 8.0f);
	glEnd();

	glBegin(GL_QUADS);             // Center 1.2
	glColor3ub(210, 210, 210);
	glVertex2f(5.0f, 8.0f);
	glVertex2f(2.0f, 6.0f);
	glVertex2f(-2.0f, 6.0f);
	glVertex2f(-5.0f, 8.0f);
	glEnd();

	glBegin(GL_LINES);             // Center 1.1.1
	glColor3ub(210, 210, 210);
	glVertex2f(-2.0f, 8.0f);
	glVertex2f(-2.0f, 0.0f);
	glEnd();

	glBegin(GL_LINES);             // Center 1.1.2
	glColor3ub(210, 210, 210);
	glVertex2f(2.0f, 8.0f);
	glVertex2f(2.0f, 0.0f);
	glEnd();

	                                      //DOOR
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-5.0f, -15.0f);
    glVertex2f(-5.0f, -10.0f);
    glVertex2f(5.0f, -10.0f);
    glVertex2f(5.0f, -15.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(-5.0f, -10.0f);
    glVertex2f(-5.0f, -7.0f);
    glVertex2f(-3.0f, -4.0f);
    glVertex2f(-1.0f, -3.0f);

    glVertex2f(1.0f, -3.0f);
    glVertex2f(3.0f, -4.0f);
    glVertex2f(5.0f, -7.0f);
    glVertex2f(5.0f, -10.0f);
    glEnd();
                                    //END OF DOOR

    glBegin(GL_QUADS);
    glColor3ub(250, 0, 0);
    glVertex2f(-5.0f, -15.0f);
    glVertex2f(-15.0f, -30.0f);
    glVertex2f(15.0f, -30.0f);
    glVertex2f(5.0f, -15.0f);
    glEnd();

}

void nightwindow()
{
    //Window
	glBegin(GL_QUADS);             // window -3.1.1
	glColor3ub(255, 215, 0);
	glVertex2f(-26.0f, 1.0f);
	glVertex2f(-26.0f, -1.5f);
	glVertex2f(-27.5f, -1.5f);
	glVertex2f(-27.5f, 1.0f);
	glEnd();


	glBegin(GL_QUADS);             // window -3.1.2
	glColor3ub(255, 215, 0);
	glVertex2f(-23.0f, 1.0f);
	glVertex2f(-23.0f, -1.5f);
	glVertex2f(-25.0f, -1.5f);
	glVertex2f(-25.0f, 1.0f);
	glEnd();


	glBegin(GL_QUADS);             // window -3.1.3
	glColor3ub(255, 215, 0);
	glVertex2f(-20.5f, 1.0f);
	glVertex2f(-20.5f, -1.5f);
	glVertex2f(-22.0f, -1.5f);
	glVertex2f(-22.0f, 1.0f);
	glEnd();


	  //Window
	glBegin(GL_QUADS);             // window -2.1.1
	glColor3ub(255, 215, 0);
	glVertex2f(-15.5f, 4.0f);
	glVertex2f(-15.5f, 1.0f);
	glVertex2f(-17.5f, 1.0f);
	glVertex2f(-17.5f, 4.0f);
	glEnd();


	glBegin(GL_QUADS);             // window -2.1.2
	glColor3ub(255, 215, 0);
	glVertex2f(-12.0f, 4.0f);
	glVertex2f(-12.0f, 1.0f);
	glVertex2f(-15.0f, 1.0f);
	glVertex2f(-15.0f, 4.0f);
	glEnd();


	glBegin(GL_QUADS);             // window -2.1.3
	glColor3ub(255, 215, 0);
	glVertex2f(-9.5f, 4.0f);
	glVertex2f(-9.5f, 1.0f);
	glVertex2f(-11.5f, 1.0f);
	glVertex2f(-11.5f, 4.0f);
	glEnd();

    glBegin(GL_QUADS);             // window 3.1.1
	glColor3ub(255, 215, 0);
	glVertex2f(26.0f, 1.0f);
	glVertex2f(26.0f, -1.5f);
	glVertex2f(27.5f, -1.5f);
	glVertex2f(27.5f, 1.0f);
	glEnd();


	glBegin(GL_QUADS);             // window 3.1.2
	glColor3ub(255, 215, 0);
	glVertex2f(23.0f, 1.0f);
	glVertex2f(23.0f, -1.5f);
	glVertex2f(25.0f, -1.5f);
	glVertex2f(25.0f, 1.0f);
	glEnd();


	glBegin(GL_QUADS);             // window 3.1.3
	glColor3ub(255, 215, 0);
	glVertex2f(20.5f, 1.0f);
	glVertex2f(20.5f, -1.5f);
	glVertex2f(22.0f, -1.5f);
	glVertex2f(22.0f, 1.0f);
	glEnd();


	  //Window
	glBegin(GL_QUADS);             // window 2.1.1
	glColor3ub(255, 215, 0);
	glVertex2f(15.5f, 4.0f);
	glVertex2f(15.5f, 1.0f);
	glVertex2f(17.5f, 1.0f);
	glVertex2f(17.5f, 4.0f);
	glEnd();


	glBegin(GL_QUADS);             // window 2.1.2
	glColor3ub(255, 215, 0);
	glVertex2f(12.0f, 4.0f);
	glVertex2f(12.0f, 1.0f);
	glVertex2f(15.0f, 1.0f);
	glVertex2f(15.0f, 4.0f);
	glEnd();


	glBegin(GL_QUADS);             // window 2.1.3
	glColor3ub(255, 215, 0);
	glVertex2f(9.5f, 4.0f);
	glVertex2f(9.5f, 1.0f);
	glVertex2f(11.5f, 1.0f);
	glVertex2f(11.5f, 4.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -3.2.1
	glColor3ub(255, 215, 0);
	glVertex2f(-25.5f, 9.0f);
	glVertex2f(-25.5f, 8.0f);
	glVertex2f(-26.5f, 8.0f);
	glVertex2f(-26.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -3.2.2
	glColor3ub(255, 215, 0);
	glVertex2f(-23.5f, 9.0f);
	glVertex2f(-23.5f, 8.0f);
	glVertex2f(-24.5f, 8.0f);
	glVertex2f(-24.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -3.2.3
	glColor3ub(255, 215, 0);
	glVertex2f(-21.5f, 9.0f);
	glVertex2f(-21.5f, 8.0f);
	glVertex2f(-22.5f, 8.0f);
	glVertex2f(-22.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -2.2.1
	glColor3ub(255, 215, 0);
	glVertex2f(-15.0f, 14.0f);
	glVertex2f(-15.0f, 13.0f);
	glVertex2f(-16.5f, 13.0f);
	glVertex2f(-16.5f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -2.2.2
	glColor3ub(255, 215, 0);
	glVertex2f(-13.0f, 14.0f);
	glVertex2f(-13.0f, 13.0f);
	glVertex2f(-14.0f, 13.0f);
	glVertex2f(-14.0f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads -2.2.3
	glColor3ub(255, 215, 0);
	glVertex2f(-10.5f, 14.0f);
	glVertex2f(-10.5f, 13.0f);
	glVertex2f(-12.0f, 13.0f);
	glVertex2f(-12.0f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 3.2.1
	glColor3ub(255, 215, 0);
	glVertex2f(25.5f, 9.0f);
	glVertex2f(25.5f, 8.0f);
	glVertex2f(26.5f, 8.0f);
	glVertex2f(26.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 3.2.2
	glColor3ub(255, 215, 0);
	glVertex2f(23.5f, 9.0f);
	glVertex2f(23.5f, 8.0f);
	glVertex2f(24.5f, 8.0f);
	glVertex2f(24.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 3.2.3
	glColor3ub(255, 215, 0);
	glVertex2f(21.5f, 9.0f);
	glVertex2f(21.5f, 8.0f);
	glVertex2f(22.5f, 8.0f);
	glVertex2f(22.5f, 9.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 2.2.1
	glColor3ub(255, 215, 0);
	glVertex2f(15.0f, 14.0f);
	glVertex2f(15.0f, 13.0f);
	glVertex2f(16.5f, 13.0f);
	glVertex2f(16.5f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 2.2.2
	glColor3ub(255, 215, 0);
	glVertex2f(13.0f, 14.0f);
	glVertex2f(13.0f, 13.0f);
	glVertex2f(14.0f, 13.0f);
	glVertex2f(14.0f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // Quads 2.2.3
	glColor3ub(255, 215, 0);
	glVertex2f(10.5f, 14.0f);
	glVertex2f(10.5f, 13.0f);
	glVertex2f(12.0f, 13.0f);
	glVertex2f(12.0f, 14.0f);
	glEnd();

	glBegin(GL_QUADS);             // tallest tower 1
	glColor3ub(255, 215, 0);
	glVertex2f(6.0f, 49.0f);
	glVertex2f(6.0f, 47.0f);
	glVertex2f(9.0f, 47.0f);
	glVertex2f(9.0f, 49.0f);
	glEnd();

	glBegin(GL_QUADS);             // tallest tower 2
	glColor3ub(255, 215, 0);
	glVertex2f(5.5f, 44.0f);
	glVertex2f(5.5f, 41.0f);
	glVertex2f(9.5f, 41.0f);
	glVertex2f(9.5f, 44.0f);
	glEnd();

	glBegin(GL_QUADS);             // background 1
	glColor3ub(255, 215, 0);
	glVertex2f(-5.5f, 29.5f);
	glVertex2f(-5.5f, 27.5f);
	glVertex2f(-7.5f, 27.5f);
	glVertex2f(-7.5f, 29.5f);
	glEnd();

	glBegin(GL_QUADS);             // background 2
	glColor3ub(255, 215, 0);
	glVertex2f(-2.5f, 29.5f);
	glVertex2f(-2.5f, 27.5f);
	glVertex2f(-4.5f, 27.5f);
	glVertex2f(-4.5f, 29.5f);
	glEnd();

	glBegin(GL_QUADS);             // background 3
	glColor3ub(255, 215, 0);
	glVertex2f(0.5f, 29.5f);
	glVertex2f(0.5f, 27.5f);
	glVertex2f(-1.5f, 27.5f);
	glVertex2f(-1.5f, 29.5f);
	glEnd();

	glBegin(GL_QUADS);             // background 3
	glColor3ub(255, 215, 0);
	glVertex2f(3.5f, 29.5f);
	glVertex2f(3.5f, 27.5f);
	glVertex2f(1.5f, 27.5f);
	glVertex2f(1.5f, 29.5f);
	glEnd();

	glBegin(GL_QUADS);             // Center 1.1
	glColor3ub(242, 171, 39);
	glVertex2f(5.0f, 8.0f);
	glVertex2f(5.0f, 0.0f);
	glVertex2f(-5.0f, 0.0f);
	glVertex2f(-5.0f, 8.0f);
	glEnd();

	glBegin(GL_QUADS);             // Center 1.2
	glColor3ub(255, 215, 0);
	glVertex2f(5.0f, 8.0f);
	glVertex2f(2.0f, 6.0f);
	glVertex2f(-2.0f, 6.0f);
	glVertex2f(-5.0f, 8.0f);
	glEnd();

	glBegin(GL_LINES);             // Center 1.1.1
	glColor3ub(210, 210, 210);
	glVertex2f(-2.0f, 8.0f);
	glVertex2f(-2.0f, 0.0f);
	glEnd();

	glBegin(GL_LINES);             // Center 1.1.2
	glColor3ub(210, 210, 210);
	glVertex2f(2.0f, 8.0f);
	glVertex2f(2.0f, 0.0f);
	glEnd();

	                                      //DOOR

    glBegin(GL_POLYGON);
    glColor3ub(245, 242, 66);
    glVertex2f(-5.0f, -15.0f);
    glVertex2f(-5.0f, -7.0f);
    glVertex2f(-3.0f, -4.0f);
    glVertex2f(-1.0f, -3.0f);

    glVertex2f(1.0f, -3.0f);
    glVertex2f(3.0f, -4.0f);
    glVertex2f(5.0f, -7.0f);
    glVertex2f(5.0f, -15.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(237, 212, 50);
    glVertex2f(-5.0f, -15.0f);
    glVertex2f(-3.0f, -10.0f);
    glVertex2f(3.0f, -10.0f);
    glVertex2f(5.0f, -15.0f);
    glEnd();
                                    //END OF DOOR

    glBegin(GL_QUADS);
    glColor3ub(250, 0, 0);
    glVertex2f(-5.0f, -15.0f);
    glVertex2f(-15.0f, -30.0f);
    glVertex2f(15.0f, -30.0f);
    glVertex2f(5.0f, -15.0f);
    glEnd();

}

void clouds()
{
    glScalef(0.8f, 0.9f, 0.0f);
                                        //starting of clouds
   	int i;

    GLfloat p4=-60.0f; GLfloat q4= 105.0f; GLfloat r4 = 18.0f;
    GLfloat p2=-75.0f; GLfloat q2= 105.0f; GLfloat r2 = 16.0f;
    GLfloat p3=-45.0f; GLfloat q3= 105.0f; GLfloat r3 = 12.0f;
    int tringle=40;

    GLfloat tp =2.0f * PI  ;

    glPushMatrix();
    glTranslatef(_cloudMove, 0.0f, 0.0f);

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p4,q4);
    for(i= 0;i<=tringle; i++)
    {
        glVertex2f (
                    p4+(r4*cos(i*tp/tringle)),
                    q4+(r4*sin(i*tp/tringle))
                    );


    }
    glEnd ();
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p2,q2);
    for(i= 0;i<=tringle; i++)
    {
        glVertex2f (
                    p2+(r2*cos(i*tp/tringle)),
                    q2+(r2*sin(i*tp/tringle))
                    );


    }
    glEnd ();
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p3,q3);
    for(i= 0;i<=tringle; i++)
    {
        glVertex2f (
                    p3+(r3*cos(i*tp/tringle)),
                    q3+(r3*sin(i*tp/tringle))
                    );


    }
    glEnd ();
    glPopMatrix();                                //end of cloud
}

void rainclouds()
{
    glScalef(0.8f, 0.9f, 0.0f);
                                        //starting of clouds
   	int i;

    GLfloat p4=-60.0f; GLfloat q4= 105.0f; GLfloat r4 = 18.0f;
    GLfloat p2=-75.0f; GLfloat q2= 105.0f; GLfloat r2 = 16.0f;
    GLfloat p3=-45.0f; GLfloat q3= 105.0f; GLfloat r3 = 12.0f;
    int tringle=40;

    GLfloat tp =2.0f * PI  ;

    glPushMatrix();
    glTranslatef(_cloudMove, 0.0f, 0.0f);

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 70, 74, 79);
    glVertex2f (p4,q4);
    for(i= 0;i<=tringle; i++)
    {
        glVertex2f (
                    p4+(r4*cos(i*tp/tringle)),
                    q4+(r4*sin(i*tp/tringle))
                    );


    }
    glEnd ();
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 70, 74, 79);
    glVertex2f (p2,q2);
    for(i= 0;i<=tringle; i++)
    {
        glVertex2f (
                    p2+(r2*cos(i*tp/tringle)),
                    q2+(r2*sin(i*tp/tringle))
                    );


    }
    glEnd ();
    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 70, 74, 79);
    glVertex2f (p3,q3);
    for(i= 0;i<=tringle; i++)
    {
        glVertex2f (
                    p3+(r3*cos(i*tp/tringle)),
                    q3+(r3*sin(i*tp/tringle))
                    );


    }
    glEnd ();
    glPopMatrix();                                //end of cloud
}

void sun()
{

    int tringle=40;
    GLfloat tp =2.0f * PI  ;

   	int i;

    GLfloat p5=110.0f; GLfloat q5= 110.0f; GLfloat r5 = 10.0f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 252,158,17);
    glVertex2f (p5,q5);
    for(i= 0;i<=tringle; i++)
    {
        glVertex2f (
                    p5+(r5*cos(i*tp3/tringle3)),
                    q5+(r5*sin(i*tp/tringle3))
                    );
    }
    glEnd ();
    glFlush();
}
void moon()
{

    int tringle=40;
    GLfloat tp =2.0f * PI  ;

   	int i;

    GLfloat p5=-98.0f; GLfloat q5= 100.0f; GLfloat r5 = 10.0f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p5,q5);
    for(i= 0;i<=tringle; i++)
    {
        glVertex2f (
                    p5+(r5*cos(i*tp3/tringle3)),
                    q5+(r5*sin(i*tp/tringle3))
                    );
    }
    glEnd ();
    glFlush();
}

void boat()
{
    glScalef(0.8f, 0.8f, 0.0f);
                                                //BOAT PRO

    glPushMatrix();
    glTranslatef(0.0f,-25.0f,0.0f);
    glTranslatef(position, 0.0f, 0.0f);

    glBegin(GL_TRIANGLES);
    glColor3ub(98, 58, 34);
    glVertex2f(-85.0f, -80.0f);
	glVertex2f(-95.0f, -65.0f);
	glVertex2f(-50.0f, -80.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(98, 58, 34);
    glVertex2f(-85.0f, -80.0f);
	glVertex2f(-40.0f, -65.0f);
	glVertex2f(-50.0f, -80.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(98, 58, 34);
    glVertex2f(-80.0f, -80.0f);
	glVertex2f(-80.0f, -63.0f);
	glVertex2f(-56.0f, -63.0f);
	glVertex2f(-56.0f, -80.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
    glVertex2f(-80.0f, -70.0f);
    glVertex2f(-56.0f, -70.0f);

    glVertex2f(-80.0f, -66.0f);
    glVertex2f(-56.0f, -66.0f);

	glVertex2f(-80.0f, -63.0f);
	glVertex2f(-56.0f, -63.0f);
	glEnd();

	glBegin(GL_LINES);

	glColor3ub(157, 189, 245);
	glVertex2f(50.0f, -80.0f);
	glVertex2f(60.0f, -80.0f);

	glVertex2f(0.0f, -55.0f);
	glVertex2f(15.0f, -55.0f);

	glVertex2f(-120.0f, -55.0f);
	glVertex2f(-150.0f, -55.0f);

	glVertex2f(-140.0f, -90.0f);
	glVertex2f(-170.0f, -90.0f);

	glVertex2f(-55.0f, -90.0f);
	glVertex2f(-10.0f, -90.0f);

	glVertex2f(120.0f, -90.0f);
	glVertex2f(85.0f, -90.0f);

	glVertex2f(120.0f, -50.0f);
	glVertex2f(85.0f, -50.0f);

	glVertex2f(-200.0f, -65.0f);
	glVertex2f(-150.0f, -65.0f);
	glEnd();

	glPopMatrix();
	glFlush();
}

/*void indivitual()
{
                                    //For everyone
	glPushMatrix();

	//start from here

	glPopMatrix();
	glFlush();
}*/
void lamp()
{



    glBegin(GL_QUADS);

    glColor3ub(112, 128, 144);
	glVertex2f(80.0f, -50.0f);
	glVertex2f(80.0f, -55.0f);
	glVertex2f(73.0f, -55.0f);
	glVertex2f(73.0f, -50.0f);
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(210, 210, 210);
	glVertex2f(78.0f, -30.0f);
	glVertex2f(78.0f, -50.0f);
	glVertex2f(75.0f, -50.0f);
	glVertex2f(75.0f, -30.0f);
	glEnd();
	glBegin(GL_QUADS);
    glColor3ub(160, 160, 160);
	glVertex2f(79.0f, -28.0f);
	glVertex2f(79.0f, -30.0f);
	glVertex2f(74.0f, -30.0f);
	glVertex2f(74.0f, -28.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(160, 160, 160);
	glVertex2f(74.0f, -28.0f);
	glVertex2f(73.0f, -27.0f);
	glVertex2f(80.0f, -27.0f);
	glVertex2f(79.0f, -28.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(160, 160, 160);
	glVertex2f(73.0f, -27.0f);
	glVertex2f(72.0f, -26.0f);
	glVertex2f(81.0f, -26.0f);
	glVertex2f(80.0f, -27.0f);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3ub(235, 235, 34);
	glVertex2f(74.0f, -26.0f);
	glVertex2f(71.0f, -22.0f);
	glVertex2f(71.0f, -16.0f);

	glVertex2f(82.0f, -16.0f);
	glVertex2f(82.0f, -22.0f);
	glVertex2f(79.0f, -26.0f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3ub(235, 235, 34);
	glVertex2f(71.0f, -16.0f);
	glVertex2f(76.30f, -10.0f);

	glVertex2f(82.0f, -16.0f);
	glEnd();



}


void bridge()
{



// middle of the bridge //



glBegin(GL_POLYGON);
glColor3ub(203, 204, 205);
glVertex2i(48, 3);
glVertex2i(76, 3);
glVertex2i(79, -6);
glVertex2i(44, -6);
glEnd();



// Left of the bridge //



glBegin(GL_POLYGON);
glColor3ub(192, 192, 192);
glVertex2i(44, 0);
glVertex2i(48, 3);
glVertex2i(45, -6);
glVertex2i(40, -10);
glVertex2i(44, 0);
glEnd();



// Right of the bridge
glBegin(GL_POLYGON);
glColor3ub(192, 192, 192);
glVertex2i(76, 3);
glVertex2i(76, -6);
glVertex2i(83, -8);
glVertex2i(80, 0);
glEnd();
///




//// Railings Bottom



glBegin(GL_POLYGON);
glColor3ub(128, 93, 65);



glVertex2i(43, -10);
glVertex2i(48, -6);
glVertex2i(45, -4);
glVertex2i(39, -8);
glEnd();



glBegin(GL_TRIANGLES);
glVertex2i(43, -10);
glVertex2i(39, -8);
glVertex2i(37, -10);



glEnd();



glBegin(GL_POLYGON);
glColor3ub(128, 93, 65);



glVertex2i(48, -6);
glVertex2i(76, -6);
glVertex2i(78, -4);
glVertex2i(45, -4);
glEnd();



glBegin(GL_POLYGON);
glColor3ub(128, 93, 65);



glVertex2i(76, -6);
glVertex2i(78, -4);
glVertex2i(85, -9);
glVertex2i(81, -10);
glEnd();



glBegin(GL_TRIANGLES);
glVertex2i(85, -9);
glVertex2i(81, -10);
glVertex2i(86, -10);



glEnd();



//// Railing upper
//



glBegin(GL_POLYGON);
glColor3ub(128, 93, 65);



glVertex2i(44, 0);
glVertex2i(48, 3);
glVertex2i(46, 5);
glVertex2f(42.0f, 1.0f);
glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(128, 93, 65);
glVertex2i(44, 0);
glVertex2f(42.0f, 1.0f);
glVertex2i(41, 0);
glEnd();



glBegin(GL_POLYGON);
glColor3ub(128, 93, 65);
glVertex2i(76, 3);
glVertex2i(80, 0);
glVertex2i(82, 1);
glVertex2i(78, 5);
glEnd();



glBegin(GL_TRIANGLES);
glVertex2i(80, 0);
glVertex2i(82, 1);
glVertex2i(83, 0);
glEnd();



glBegin(GL_POLYGON);
glColor3ub(128, 93, 65);



glVertex2i(76, 3);
glVertex2i(48, 3);
glVertex2i(46, 5);
glVertex2i(78, 5);
glEnd();



// decoration



glLineWidth(2);
// Upper Railing lower line
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2i(42, 2);
glVertex2i(46, 6);



glVertex2i(46, 6);
glVertex2i(78, 6);



glVertex2i(78, 6);
glVertex2i(81, 3);
glEnd();



// Upper Railing upper line
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2i(42, 3);
glVertex2i(46, 7);



glVertex2i(46, 7);
glVertex2i(78, 7);



glVertex2i(78, 7);
glVertex2i(81, 4);
glEnd();



// Upper Railing
glBegin(GL_LINES);
glColor3ub(255, 255, 255);
glVertex2i(42, 1);
glVertex2i(42, 5);



glVertex2i(46, 5);
glVertex2i(46, 8);



glVertex2f(54, 5);
glVertex2f(54, 8);



glVertex2f(62, 5);
glVertex2f(62, 8);



glVertex2f(70, 5);
glVertex2f(70, 8);



glVertex2i(78, 5);
glVertex2i(78, 8);



glVertex2i(81, 2);
glVertex2i(81, 5);
glEnd();



// Lower Railing lower line
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2i(39, -7);
glVertex2i(45, -3);



glVertex2i(45, -3);
glVertex2i(78, -3);



glVertex2i(78, -3);
glVertex2i(84, -7);
glEnd();



// Lower Railing upper line
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2i(39, -5);
glVertex2i(45, -1);



glVertex2i(45, -1);
glVertex2i(78, -1);



glVertex2i(78, -1);
glVertex2i(84, -5);
glEnd();



// Lower Railing
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2i(39, -8);
glVertex2i(39, -3);



glVertex2i(45, -4);
glVertex2i(45, 0);



glVertex2f(53.25, -4);
glVertex2f(53.25, 0);



glVertex2f(61.50, -4);
glVertex2f(61.50, 0);



glVertex2f(69.75, -4);
glVertex2f(69.75, 0);



glVertex2i(78, -4);
glVertex2i(78, 0);



glVertex2i(84, -8);
glVertex2i(84, -3);
glEnd();



// Circle above verticle pillars
glPointSize(4);
glBegin(GL_POINTS);
glColor3ub(255, 255, 0);
glVertex2i(39, -3);
glVertex2i(45, 0);
glVertex2f(53.25, 0);
glVertex2f(61.50, 0);
glVertex2f(69.75, 0);
glVertex2i(78, 0);
glVertex2i(84, -3);



glVertex2i(42, 5);
glVertex2i(46, 8);
glVertex2f(54, 8);
glVertex2f(62, 8);
glVertex2f(70, 8);
glVertex2i(78, 8);
glVertex2i(81, 5);



glEnd();



glFlush();
}

void flags()
{
glBegin(GL_TRIANGLES); // Flag background
glColor3ub(205, 87, 255);
glVertex2f(5.0f, 47.5f);
glVertex2f(0.0f, 45.0f);
glVertex2f(0.0f, 50.0f);
glEnd();

 glBegin(GL_TRIANGLES); // Flag main
glColor3ub(205, 87, 255);
glVertex2f(7.0f, 28.5f);
glVertex2f(0.0f, 25.0f);
glVertex2f(0.0f, 31.0f);
glEnd();

 glBegin(GL_TRIANGLES); // Flag 1
glColor3ub(205, 87, 255);
glVertex2f(-19.0f, 20.5f);
glVertex2f(-24.0f, 18.0f);
glVertex2f(-24.0f, 23.0f);
glEnd();

 glBegin(GL_TRIANGLES); // Flag 2
glColor3ub(205, 87, 255);
glVertex2f(30.0f, 20.5f);
glVertex2f(24.0f, 18.0f);
glVertex2f(24.0f, 23.0f);
glEnd();

 glBegin(GL_TRIANGLES); // Flag 3
glColor3ub(250, 30, 30);
glVertex2f(-3.5f, 21.0f);
glVertex2f(-6.0f, 20.0f);
glVertex2f(-6.0f, 22.0f);
glEnd();
glBegin(GL_TRIANGLES); // Flag 4
glColor3ub(250, 30, 30);
glVertex2f(8.5f, 21.0f);
glVertex2f(6.0f, 20.0f);
glVertex2f(6.0f, 22.0f);
glEnd();
}

void mountain()
{
                                     //main mountain

    glBegin(GL_TRIANGLES);                  //BACK MOUNT
    glColor3ub(62, 62, 62);
    glVertex2f(-6.0f, 25.0f);
    glVertex2f(33.0f, 98.0f);
	glVertex2f(66.0f, 25.0f);
    glEnd();
    glBegin(GL_TRIANGLES);                  // left back
    glColor3ub(62, 62, 62);
    glVertex2f(-20.0f, 25.0f);
    glVertex2f(5.0f, 80.0f);
	glVertex2f(30.0f, 25.0f);
    glEnd();
    glBegin(GL_TRIANGLES);                  // right back
    glColor3ub(62, 62, 62);
    glVertex2f(30.0f, 25.0f);
    glVertex2f(63.0f, 80.0f);
	glVertex2f(90.0f, 25.0f);
    glEnd();

    glBegin(GL_TRIANGLES);                  //BACK MOUNT TOP
    glColor3ub(255, 255, 255);
    glVertex2f(27.0f, 88.0f);
    glVertex2f(33.0f, 98.0f);
	glVertex2f(38.0f, 88.0f);
    glEnd();

    glBegin(GL_TRIANGLES);                  // left back
    glColor3ub(22, 51, 6);
    glVertex2f(-30.0f, 25.0f);
    glVertex2f(-2.0f, 75.0f);
	glVertex2f(20.0f, 25.0f);
    glEnd();
    glBegin(GL_TRIANGLES);                  // left back top
    glColor3ub(255, 255, 255);
    glVertex2f(-7.0f, 66.0f);
    glVertex2f(-2.0f, 75.0f);
	glVertex2f(2.0f, 66.0f);
    glEnd();

    /*glBegin(GL_TRIANGLES);                  // left back
    glColor3ub(0, 0, 0);
    glVertex2f(-30.0f, 25.0f);
    glVertex2f(-20.0f, 65.0f);
	glVertex2f(0.0f, 25.0f);
    glEnd();*/


    glBegin(GL_TRIANGLES);                  // right back
    glColor3ub(62, 62, 62);
    glVertex2f(55.0f, 25.0f);
    glVertex2f(86.0f, 65.0f);
	glVertex2f(95.0f, 25.0f);
    glEnd();

    glBegin(GL_TRIANGLES);                  // right back
    glColor3ub(22, 51, 6);
    glVertex2f(35.0f, 25.0f);
    glVertex2f(70.0f, 75.0f);
	glVertex2f(93.0f, 25.0f);
    glEnd();
    glBegin(GL_TRIANGLES);                  // right back top
    glColor3ub(255, 255, 255);
    glVertex2f(63.0f, 66.0f);
    glVertex2f(70.0f, 75.0f);
	glVertex2f(74.0f, 66.0f);
    glEnd();

    //left

    glBegin(GL_TRIANGLES);                  //BACK MOUNT
    glColor3ub(7, 61, 16);
    glVertex2f(-15.0f, 25.0f);
    glVertex2f(18.0f, 90.0f);
	glVertex2f(45.0f, 25.0f);
    glEnd();
    glBegin(GL_TRIANGLES);                  //BACK MOUNT
    glColor3ub(255, 255, 255);
    glVertex2f(13.0f, 80.0f);
    glVertex2f(18.0f, 90.0f);
	glVertex2f(22.0f, 80.0f);
    glEnd();


    //right
    glBegin(GL_TRIANGLES);                  //BACK MOUNT
    glColor3ub(7, 61, 16);
    glVertex2f(20.0f, 25.0f);
    glVertex2f(52.0f, 90.0f);
	glVertex2f(75.0f, 25.0f);
    glEnd();
    glBegin(GL_TRIANGLES);                  //BACK MOUNT
    glColor3ub(255, 255, 255);
    glVertex2f(47.0f, 80.0f);
    glVertex2f(52.0f, 90.0f);
	glVertex2f(56.0f, 80.0f);
    glEnd();


    //white
    glBegin(GL_POLYGON);
    glColor3ub(193, 205, 217);
    glVertex2f(23.0f, 25.0f);
    glVertex2f(27.0f, 69.0f);
    glVertex2f(42.0f, 69.0f);
	glVertex2f(46.0f, 25.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(23.0f, 26.0f);
    glVertex2f(27.0f, 24.0f);
    glVertex2f(42.0f, 24.0f);
	glVertex2f(46.0f, 26.0f);
    glEnd();

    glPushMatrix();
    glTranslatef(0.0f, overflow, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(161, 192, 247);
    glVertex2f(30.0f,60.0f);
    glVertex2f(29.0f,45.0f);

    glVertex2f(40.0f,55.0f);
    glVertex2f(41.0f,40.0f);

    glVertex2f(35.0f,68.0f);
    glVertex2f(36.0f,60.0f);

    glVertex2f(35.0f,45.0f);
    glVertex2f(35.0f,30.0f);

    glVertex2f(30.0f,30.0f);
    glVertex2f(29.0f,26.0f);

    glVertex2f(40.0f,30.0f);
    glVertex2f(41.0f,26.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, flow, 0.0f);
    glBegin(GL_LINES);
    glLineWidth(0.8);
    glColor3ub(161, 192, 247);

    glVertex2f(42.0f,20.0f);
    glVertex2f(45.0f,10.0f);

    glVertex2f(27.0f,20.0f);
    glVertex2f(24.0f,10.0f);

    glVertex2f(45.0f,0.0f);
    glVertex2f(48.0f,-20.0f);

    glVertex2f(25.0f,0.0f);
    glVertex2f(23.0f,-20.0f);

    glVertex2f(50.0f,-40.0f);
    glVertex2f(53.0f,-52.0f);

    glVertex2f(22.0f,-40.0f);
    glVertex2f(24.0f,-52.0f);

    glEnd();
    glPopMatrix();


}

//Fire parachute
void parachute(){
    glPushMatrix();
    glTranslatef(0.0f, paraflow, 0.0f);
    glPushMatrix();
        glTranslatef(-25.0f, 10.0f, 0.0f);
        glScaled(0.4f, 0.4f ,0.0f);
        glPushMatrix();
            glRotated(-36,0.0f,0.0f,1.0f);
            glBegin(GL_POLYGON);
            for(int i=0;i<50;i++)
                {
                    glColor3f(1.00f, 0.0f, 0.0f);
                    float pi=3.1416;
                    float A=(i*2*pi)/70;
                    float r=25.0;
                    float x = r * cos(A);
                    float y = r * sin(A);
                    glVertex2f(x,y);
                }
            glEnd();

        glPopMatrix();

        glBegin(GL_QUADS);
        glColor3ub(117, 69, 42);
        glVertex2f(-15.0f,-30.0f);
        glVertex2f(-15.0f,-45.0f);
        glVertex2f(15.0f,-45.0f);
        glVertex2f(15.0f,-30.0f);
        glEnd();

        glBegin(GL_QUADS);
        glColor3ub(117, 69, 42);
        glVertex2f(-7.0f,-24.0f);
        glVertex2f(-7.0f,-29.0f);
        glVertex2f(7.0f,-29.0f);
        glVertex2f(7.0f,-24.0f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-7.0f,-24.0f);
        glVertex2f(-3.0f,-20.0f);
        glVertex2f(-1.0f,-23.0f);
        glVertex2f(1.0f,-18.0f);
        glVertex2f(3.5f,-23.0f);
        glVertex2f(4.0f,-21.0f);
        glVertex2f(7.0f,-24.0f);
        glEnd();



        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3f(0.00f, 0.0f, 0.0f);
        glVertex2f(-20.5f,-14.0f);
        glVertex2f(-15.0f,-30.0f);
        glEnd();

        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3f(0.00f, 0.0f, 0.0f);
        glVertex2f(20.5f,-14.0f);
        glVertex2f(15.0f,-30.0f);
        glEnd();


    glPopMatrix();
    glPopMatrix();
}
                                            //parasagor

void lamps()
{
    glTranslatef(-10.0f,-8.0f,0.0f);
    glScalef(0.3f,0.4f,0.3f);
    lamp();
    glTranslatef(-85.0f,0.0f,0.0f);
    lamp();

    glTranslatef(160.0f,45.0f,0.0f);   //flag 4
    lamp();
    glTranslatef(175.0f,-0.0f,0.0f);     //flag 5
    lamp();
    glTranslatef(-4.0f,25.0f,0.0f); //flag 3
    glScalef(0.7f,0.7f,0.7f);
    lamp();
    glTranslatef(-175.0f,0.0f,0.0f);     //flag 5
    lamp();
}
int rainstatus=0;
int x=0;
int y=0;
float wx=0;
float wy=0;
void DrawCircle(float cx, float cy, float r, int num_segments) {
glBegin(GL_TRIANGLE_FAN);
for (int i = 0; i < num_segments; i++)
{
float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle
float x = r * cosf(theta);//calculate x
float y = r * sinf(theta);//calculate y
glVertex2f(x + cx, y + cy);//output vertex
}
glEnd();
glFlush();
}
void rain()
{
// glClear(GL_COLOR_BUFFER_BIT);
glColor3d(0,1,0);
glBegin(GL_POINTS);
for(int i=1;i<=1000;i++)
{
x=rand(),y=rand();
x%=1000; y%=1000;
//if(x>=120&&x<=280&&y<=280)continue;
glBegin(GL_LINES);
glColor3b(1,1,1);
glVertex2d(x,y);
glVertex2d(x+5,y+5);
glEnd();
}
for(int i=1;i<=1000;i+=5){
x=rand(),y=rand();
x%=1000; y%=1000;
//if(x>=120&&x<=280&&y<=280)continue;
glBegin(GL_LINES);
glColor3b(1,1,1);
glVertex2d(x,y);
glVertex2d(x+5,y+5);
glEnd();
}}

void moverain(int x)
{ if(rainstatus ==1){
wx -= 0.01;
wy -= 0.01;
glPushMatrix();
glTranslatef(wx, wy, 0);
if (x==1){
rain();
}
glPopMatrix();
//glFlush();
}}
void rainywater()
{
if(rainstatus==1)
{
for (int i = 0; i < 150; i++)
{
int random1 = rand() % 640 + 1;
int random2 = rand() % 255 + 1;
glColor3ub(255, 255, 255);
DrawCircle(random1,random2,1,1000);
}
}
}


int nightmode=0;
void nightsky()
{
    glBegin(GL_QUADS);                                  // sky
	glColor3ub(26, 58, 107);
	glVertex2f(-100.0f, 25.0f);
	glVertex2f(-100.0f, 100.0f);
	glVertex2f(100.0f, 100.0f);
	glVertex2f(100.0f, 25.0f);
	glEnd();
}
void rainsky()
{
    glBegin(GL_QUADS);                                  // sky
	glColor3ub(116, 145, 181);
	glVertex2f(-100.0f, 25.0f);
	glVertex2f(-100.0f, 100.0f);
	glVertex2f(100.0f, 100.0f);
	glVertex2f(100.0f, 25.0f);
	glEnd();
}
void nightground()
{
    glBegin(GL_POLYGON);
    glColor3ub(50, 79, 47);              //for ground and divide sky and river
	glVertex2f(-100.0f, 0.0f);
	glVertex2f(-100.0f, 25.0f);
	glVertex2f(100.0f, 25.0f);
	glVertex2f(100.0f, 0.0f);
	glVertex2f(100.0f, -55.0f);
	glVertex2f(-100.0f, -55.0f);
	glEnd();
}

                                                            //nuhan

    void fountian()
{
                                    //For everyone
	glPushMatrix();
	glTranslatef(0.0f,12.0f,0.0f);
    glScalef(1.0f,1.0f,0.3f);


	//start from here
	    glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(90.0f,-9.0f);
        glVertex2f(100.0f,-9.0f);
        glVertex2f(98.0f,-5.0f);
        glVertex2f(92.0f,-5.0f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(112, 128, 144);
        glVertex2f(94.0f,-5.0f);
        glVertex2f(96.0f,-5.0f);
        glVertex2f(97.0f,-3.0f);
        glVertex2f(96.0f,-1.0f);
        glVertex2f(94.0f,-1.0f);
        glVertex2f(93.0f,-3.0f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(224 ,238 ,238);
        glVertex2f(94.0f,-1.0f);
        glVertex2f(96.0f,-1.0f);
        glVertex2f(96.0f,1.0f);
        glVertex2f(94.0f,1.0f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(112, 128, 144);
        glVertex2f(89.0f,1.0f);
        glVertex2f(101.0f,1.0f);
        glVertex2f(103.0f,4.0f);
        glVertex2f(87.0f,4.0f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(224 ,238 ,238);
        glVertex2f(94.0f,4.0f);
        glVertex2f(96.0f,4.0f);
        glVertex2f(96.0f,6.0f);
        glVertex2f(94.0f,6.0f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(112, 128, 144);
        glVertex2f(90.0f,6.0f);
        glVertex2f(100.0f,6.0f);
        glVertex2f(102.0f,9.0f);
        glVertex2f(88.0f,9.0f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(224, 238, 238);
        glVertex2f(94.5f,9.0f);
        glVertex2f(95.5f,9.0f);
        glVertex2f(95.5f,11.0f);
        glVertex2f(94.5f,11.0f);
        glEnd();


        glBegin(GL_POLYGON);
        glColor3ub(112, 128 ,144);
        glVertex2f(94.0f,11.0f);
        glVertex2f(96.0f,11.0f);
        glVertex2f(97.0f,14.0f);
        glVertex2f(93.0f,14.0f);
        glEnd();

	glPopMatrix();
	glFlush();
}

//tree
void tree()
{
    glPushMatrix();
    glTranslatef(0.0f,8.0f,0.0f);
    glScalef(1.0f,1.0f,0.3f);

    glBegin(GL_POLYGON);
    glColor3ub(139 ,69 ,19);
    glVertex2f(84.0f,-1.0f);
    glVertex2f(85.0f,-1.0f);
    glVertex2f(85.0f,10.0f);
    glVertex2f(84.0f,10.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(34 ,139, 34);
    glVertex2f(82.0f, 8.0f);
	glVertex2f(88.0f, 8.0f);
	glVertex2f(85.0f, 12.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(34 ,139, 34);
    glVertex2f(80.0f, 11.0f);
	glVertex2f(90.0f, 11.0f);
	glVertex2f(85.0f, 15.0f);
	glEnd();

//tree2

    glBegin(GL_POLYGON);
    glColor3ub(139 ,69 ,19);
    glVertex2f(80.0f,0.0f);
    glVertex2f(81.0f,0.0f);
    glVertex2f(81.0f,11.0f);
    glVertex2f(80.0f,11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(34 ,139, 34);
    glVertex2f(77.0f, 10.0f);
	glVertex2f(84.0f, 10.0f);
	glVertex2f(80.5f, 13.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(34 ,139, 34);
    glVertex2f(75.0f, 12.0f);
	glVertex2f(86.0f, 12.0f);
	glVertex2f(80.5f, 17.0f);
	glEnd();
//tree3
    glBegin(GL_POLYGON);
    glColor3ub(139 ,69 ,19);
    glVertex2f(105.0f,0.0f);
    glVertex2f(106.0f,0.0f);
    glVertex2f(106.0f,11.0f);
    glVertex2f(105.0f,11.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(34 ,139, 34);
    glVertex2f(101.0f, 11.0f);
	glVertex2f(110.0f, 11.0f);
	glVertex2f(105.5f, 16.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(34 ,139, 34);
    glVertex2f(102.0f, 14.0f);
	glVertex2f(111.0f, 14.0f);
	glVertex2f(105.5f, 20.0f);
	glEnd();


    glPopMatrix();
    glFlush();
}
                                                    //nuhan end
//season winter

int winter=0;
void winterriver(){
glBegin(GL_QUADS);                                  // river
	glColor3ub(116, 175, 247);
	glVertex2f(-100.0f, -55.0f);
	glVertex2f(100.0f, -55.0f);
	glVertex2f(100.0f, -100.0f);
	glVertex2f(-100.0f, -100.0f);
	glEnd();
glBegin(GL_QUADS);                                  // river upper
	glColor3ub(116, 175, 247);
	glVertex2f(-3.0f, -55.0f);
	glVertex2f(23.0f, 25.0f);
	glVertex2f(46.0f, 25.0f);
	glVertex2f(73.0f, -55.0f);
	glEnd();
}
void wintersky()
{
    glBegin(GL_QUADS);                                  // sky
	glColor3ub(177, 206, 242);
	glVertex2f(-100.0f, 25.0f);
	glVertex2f(-100.0f, 100.0f);
	glVertex2f(100.0f, 100.0f);
	glVertex2f(100.0f, 25.0f);
	glEnd();
}
void winterground()
{
    glBegin(GL_POLYGON);
    glColor3ub(177, 206, 242);              //for ground and divide sky and river
	glVertex2f(-100.0f, 0.0f);
	glVertex2f(-100.0f, 25.0f);
	glVertex2f(100.0f, 25.0f);
	glVertex2f(100.0f, 0.0f);
	glVertex2f(100.0f, -55.0f);
	glVertex2f(-100.0f, -55.0f);
	glEnd();
}


void alldisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glColor3d(1,0,0);
    glLineWidth(7.5);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    display();


    if(nightmode==1){
        nightground();
        }
        if(winter==1){
            wintersky();
        winterground();
        }
    riverup();
    if(winter==1){
        winterriver();

    }



    if(nightmode==1){
        nightsky();
        }
    if(rainstatus==1){
        rainsky();
    }
        piche();

    mountain();

    //lamp2();
    boat();


    if(nightmode==1){
        if(rainstatus==0){
                if(winter==0){
                   moon();
                }

        }
    }
    else if(rainstatus==0){
        if(winter==0){

        sun();
        }

    }

    parachute();



    if(rainstatus==1){
        rainclouds();
    }
    else{
        clouds();
    }
    castle();
    window();
    fountian();
    tree();
    if(nightmode==1){
        nightwindow();
    }
    bridge();
    flags();
    lamps();


    if(rainstatus==1){
        glTranslatef(-300.0f,-400.0f,0.0f);
        rain();
        rainywater();
    }


    //lamp33();



    //indivitual();



    glFlush();
    glutSwapBuffers();
}


void keyboard(unsigned char key, int x, int y){
if (key == 'a'){
speed = 0.0f;
}
else if (key == 'w'){
speed = 0.42f;
}
else if (key == '1'){
rainstatus=1;
}
else if (key == '2'){
rainstatus=0;
}
else if (key == '5'){
nightmode=1;
}
else if (key == '6'){
nightmode=0;
}
else if(key =='3'){
winter=1;
}
else if(key =='4'){
winter=0;
}


glutPostRedisplay();
}

void myInit(void){
glClearColor(1.0f,1.0f,1.0f,1.0f);
glColor3f(.0f,.0f,.0f);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(780, 620);
	glutCreateWindow("Turreted Castle");
	glutDisplayFunc(alldisplay);
    glutKeyboardFunc(keyboard);
    myInit();
	glutTimerFunc(20, updateCloud, 0);
	glutTimerFunc(20, updateBoat, 0);
	glutTimerFunc(20, updateflow, 0);
	glutTimerFunc(20, updateoverflow, 0);
	glutTimerFunc(20, updatepara, 0);
	glutMainLoop();
	return 0;
}
