#include<GL/glut.h>

void inicializar()
{
//glClearColor(0.8,0.8,0.8,1); // background de la ventana
//glMatrixMode(GL_PROJECTION);
gluOrtho2D (1200,-1200,-1200,1200); // Los par�metros son para delimitar la zona de
//trabajo GLdouble izq, GLdouble dcha, GLdouble abajo, GLdouble arriba);
}
//Graficamos 
void graficar()
{

glClear(GL_COLOR_BUFFER_BIT);

/*0*/
/*BACKGROUND*/
glColor3f  (0.8,0.8,0.8);
glBegin    (GL_QUADS);
glVertex2f (1200,1200); //ESQUINA SUPERIOR DERECHA
glVertex2f (-1200,1200); //ESQUINA SUPERIOR IZQUIERDA
glColor3f  (0.3725,0.3725,0.3725);
glVertex2f (-1200,-1200);
glVertex2f (1200,-1200);
glEnd ();

/*1*/
/* OREJA IZQUIERDA 1*/
glBegin    (GL_TRIANGLES); //PRIMITIVAS
glColor3f  (0.2039,0.2039,0.2039);
glVertex2f (980,665);
glVertex2f (840,550);
glVertex2f (650,830);
glEnd ();

/*2*/
/* OREJA IZQUIERDA 1.1*/
glBegin    (GL_TRIANGLES); //PRIMITIVAS
glColor3f  (0.1764,0.1764,0.1764);
glVertex2f (980,665);
glVertex2f (840,550);
glVertex2f (950,380);
glEnd ();

/*3*/
/* PARTE ADYACENTE BAJA DE LA OREJA IZQUIERDA 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3843,0.3843,0.3843);
glVertex2f (650,830);
glVertex2f (650,670);
glVertex2f (840,550);
glEnd ();

/*4*/
/* PARTE ADYACENTE BAJA DE LA OREJA IZQUIERDA 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3529,0.3529,0.3529);
glVertex2f (650,670);
glVertex2f (840,550);
glVertex2f (630,505);
glEnd ();

/*5*/
/* PARTE ADYACENTE BAJA DE LA OREJA IZQUIERDA 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4156,0.3882,0.3568);
glVertex2f (650,670);
glVertex2f (450,750);
glVertex2f (630,505);
glEnd ();

/*6*/
/* PARTE ADYACENTE BAJA DE LA OREJA IZQUIERDA 4 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4823,0.4823,0.4823);
glVertex2f (840,550);
glVertex2f (950,380);
glVertex2f (630,505);
glEnd ();

/*7*/
/* PARTE ADYACENTE BAJA DE LA OREJA IZQUIERDA 5 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3686,0.3529,0.3411);
glVertex2f (650,830);
glVertex2f (450,750);
glVertex2f (650,670);
glEnd ( );

/*8*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (DCHA A IZQ)01*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2549,0.2627,0.2509);
glVertex2f (950,380);
glVertex2f (630,505);
glVertex2f (960,180);
glEnd ( );

/*9*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (DCHA A IZQ)02*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3450,0.3529,0.3411);
glVertex2f (960,180);
glVertex2f (630,505);
glVertex2f (580,190);
glEnd ( );

/*10*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (DCHA A IZQ)03*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2901,0.2705,0.2470);
glVertex2f (960,180);
glVertex2f (580,190);
glVertex2f (700,-60);
glEnd ( );

/*11*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (DCHA A IZQ)04*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2470,0.2666,0.2509);
glVertex2f (960,180);
glVertex2f (700,-60);
glVertex2f (950,-80);
glEnd ( );

/*12*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (DCHA A IZQ)06*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2196,0.2196,0.2196);
glVertex2f (720,-430);
glVertex2f (700,-60);
glVertex2f (950,-80);
glEnd ();

/*13*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (DCHA A IZQ)07*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.1843,0.1647,0.1529);
glVertex2f (720,-430);
glVertex2f (510,-190);
glVertex2f (700,-60);
glEnd ();

/*14*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (DCHA A IZQ)08*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.1882,0.1490,0.1450);
glVertex2f (720,-430);
glVertex2f (510,-190);
glVertex2f (370,-550);
glEnd ();

/*15*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (DCHA A IZQ)09*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.1686,0.1333,0.1372);
glVertex2f (720,-430);
glVertex2f (370,-550);
glVertex2f (410,-790);
glEnd ();

/*16*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (DCHA A IZQ)10*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2588,0.2588,0.2588);
glVertex2f (410,-790);
glVertex2f (370,-550);
glVertex2f (250,-870);
glEnd ();

/*17*/
/* BORDE DE LA MANDIBULA 1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3490,0.3176,0.3098);
glVertex2f (370,-550);
glVertex2f (250,-870);
glVertex2f (180,-610);
glEnd ();

/*18*/
/* BORDE DE LA MANDIBULA 2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.6470,0.5921,0.5803);
glVertex2f (370,-550);
glVertex2f (384,-245);
glVertex2f (180,-610);
glEnd ();

/*19*/
/* BORDE DE LA MANDIBULA 3*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.4039,0.3294,0.2745);
glVertex2f (510,-190);
glVertex2f (370,-550);
glVertex2f (390,-110);
glEnd ();

/*20*/
/* BORDE DE LA MANDIBULA 4*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.4196,0.4274,0.4156);
glVertex2f (500,90);
glVertex2f (510,-190);
glVertex2f (320,-70);
glEnd ();

/*21*/
/* ADYACENTE DEL BORDE DERECHO 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2745,0.2470,0.2235);
glVertex2f (500,90);
glVertex2f (510,-190);
glVertex2f (700,-60);
glEnd ();

/*22*/
/* ADYACENTE DEL BORDE DERECHO 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4196,0.4274,0.4156);
glVertex2f (500,90);
glVertex2f (580,190);
glVertex2f (700,-60);
glEnd ();

/*23*/
/* PARTE ADYACENTE DERECHA DE LA PARTE IZQ DE LA OJERA DEL OJO 01.1 02 01*/
glBegin    (GL_QUADS);
glColor3f  (0.2431,0.2431,0.2431);
glVertex2f (500,390);
glVertex2f (500,90);
glVertex2f (320,-70);
glVertex2f (405,340);
glEnd ( );

/*24*/
/* PARTE ADYACENTE DERECHA DE LA PARTE IZQ DE LA OJERA DEL OJO 01.1 02 02*/
glBegin    (GL_QUADS);
glColor3f  (0.1843,0.1843,0.1843);
glVertex2f (405,340);
glVertex2f (320,-70);
glVertex2f (180,220);
glVertex2f (240,400);
glEnd ( );

/*25*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO Y IZQ)1.8*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3411,0.3411,0.3411);
glVertex2f (500,90);
glVertex2f (500,390);
glVertex2f (580,190);
glEnd ( );

/*26*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO Y IZQ)1.7*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.1686,0.1686,0.1686);
glVertex2f (500,390);
glVertex2f (580,190);
glVertex2f (630,505);
glEnd ( );

/*27*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO Y IZQ)1.6*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3058,0.3137,0.3098);
glVertex2f (500,390);
glVertex2f (505,600);
glVertex2f (630,505);
glEnd ( );

/*28*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO Y IZQ)1.5*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2235,0.2235,0.2313);
glVertex2f (505,600);
glVertex2f (410,510);
glVertex2f (500,390);
glEnd ( );

/*29*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO Y IZQ)1.4*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2627,0.2627,0.2627);
glVertex2f (450,760);
glVertex2f (505,600);
glVertex2f (630,505);
glEnd ( );

/*30*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.1921,0.2078,0.2039);
glVertex2f (650,830);
glVertex2f (340,1030);
glVertex2f (450,750);
glEnd ( );

/*31*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA) 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3882,0.3882,0.3960);
glVertex2f (340,1030);
glVertex2f (160,810);
glVertex2f (450,750);
glEnd ( );

/*32*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA) 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3960,0.4117,0.4156);
glVertex2f (340,1030);
glVertex2f (0,1030);
glVertex2f (160,810);
glEnd ( );

/*33*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA) 4 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4588,0.4588,0.4588);
glVertex2f (0,1030);
glVertex2f (160,810);
glVertex2f (0,790);
glEnd ( );

/*34*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3254,0.3254,0.3254);
glVertex2f (170,630);
glVertex2f (160,810);
glVertex2f (0,790);
glEnd ( );

/*35*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO Y IZQ) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3,0.3,0.3);
glVertex2f (160,810);
glVertex2f (170,630);
glVertex2f (450,760);
glEnd ( );

/*36*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO Y IZQ) 2*/
glBegin     (GL_TRIANGLES);
glColor3f   (0.2,0.2,0.2);
glVertex2f  (450,760);
glVertex2f  (170,630);
glVertex2f  (395,605);
glEnd ( );

/*37*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO Y IZQ) 3*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3,0.3,0.3);
glVertex2f (450,760);
glVertex2f (505,600);
glVertex2f (395,605);
glEnd ( );

/*38*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO) 2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2745,0.2784,0.2862);
glVertex2f (170,630);
glVertex2f (0,555);
glVertex2f (0,790);
glEnd ( );

/*39*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA(IZQ A DCHA Y ABAJO) 3*/
glBegin    (GL_QUADS);
glColor3f  (0.1411,0.1333,0.1375);
glVertex2f (170,630);
glVertex2f (200,545);
glVertex2f (0,460);
glVertex2f (0,555);
glEnd ( );

/*40*/
/* PARTE ADYACENTE DCHA DEL OJO 1.1 */
glBegin    (GL_QUADS);
glColor3f  (0.0941,0.0941,0.0941);
glVertex2f (395,605);
glVertex2f (295,550);
glVertex2f (200,545);
glVertex2f (170,630);
glEnd ( );

/*41*/
/* OJO 1.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.7372,0.6313,0.3137);
glVertex2f (395,605);
glVertex2f (295,550);
glVertex2f (370,510);
glEnd ( );

/*42*/
/* INTERMEDIO DEL OJO 1 Y OJO 1.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.1529,0.1568,0.1764);
glVertex2f (395,605);
glVertex2f (410,510);
glVertex2f (370,510);
glEnd ( );

/*43*/
/* OJO 1.2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9529,0.8509,0.3058);
glVertex2f (505,600);
glVertex2f (395,605);
glVertex2f (410,510);
glEnd ( );

/*44*/
/* PARTE ADYACENTE BAJA DEL OJO 1.1*/
glBegin    (GL_POLYGON);
glColor3f  (0.1411,0.1529,0.1725);
glVertex2f (410,510);
glVertex2f (500,390);
glVertex2f (200,545);
glVertex2f (295,550);
glVertex2f (370,510);
glEnd ( );

/*45*/
/* OJERA DE OJO 1.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3372,0.3333,0.3529);
glVertex2f (500,390);
glVertex2f (405,340);
glVertex2f (200,545);
glEnd ( );

/*46*/
/* OJERA DE OJO 1.2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2745,0.2901,0.2862);
glVertex2f (405,340);
glVertex2f (240,400);
glVertex2f (200,545);
glEnd ( );

/*47*/
/* PARTE ADYACENTE IZQUIERDA DE LA NARIZ 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.1411,0.1333,0.1375);
glVertex2f (200,545);
glVertex2f (240,400);
glVertex2f (0,460);
glEnd ( );

/*48*/
/* PARTE ADYACENTE IZQUIERDA DE LA NARIZ 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2078,0.2078,0.2078);
glVertex2f (240,400);
glVertex2f (180,370);
glVertex2f (0,460);
glEnd ( );

/*49*/
/* PARTE ADYACENTE IZQUIERDA DE LA NARIZ 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2745,0.2705,0.2627);
glVertex2f (240,400);
glVertex2f (180,220);
glVertex2f (180,370);
glEnd ( );

/*50*/
/* NARIZ 1.1*/
glBegin    (GL_QUADS);
glColor3f  (0.6117,0.6117,0.6117);
glVertex2f (180,370);
glVertex2f (180,220);
glVertex2f (0,310);
glVertex2f (0,460);
glEnd ( );

/*51*/
/* NARIZ 1.2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4392,0.4392,0.4313);
glVertex2f (180,220);
glVertex2f (0,160);
glVertex2f (0,310);
glEnd ( );

/*52*/
/* DEBAJO DE LA NARIZ 1.1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2862,0.2666,0.2431);
glVertex2f (180,220);
glVertex2f (0,160);
glVertex2f (0,-78);
glEnd ( );

/*53*/
/* ADYACENTE IZQ DE LA PARTE DE BAJO DE LA NARIZ 01.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2196,0.2039,0.2);
glVertex2f (180,220);
glVertex2f (320,-70);
glVertex2f (0,-78);
glEnd ( );

/*54*/
/*MANDIBULA (IZQ A DCHA) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3176,0.2431,0.2274);
glVertex2f (387,-190);
glVertex2f (384,-245);
glVertex2f (295,-405);
glEnd ();

/*55*/
/*DIENTE 1.1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.8313,0.6705,0.5450);
glVertex2f (387,-190);
glVertex2f (295,-405);
glVertex2f (230,-330);
glEnd ();

/*56*/
/*DIENTE 1.2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9607,0.8352,0.6352);
glVertex2f (295,-405);
glVertex2f (230,-330);
glVertex2f (180,-610);
glEnd ();

/*57*/
/*MANDIBULA (IZQ A DCHA) 2.1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2117,0.1529,0.1333);
glVertex2f (390,-110);
glVertex2f (387,-190);
glVertex2f (320,-70);
glEnd ();

/*58*/
/*MANDIBULA (IZQ A DCHA) 2.2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2549,0.0941,0.1098);
glVertex2f (280,-70);
glVertex2f (387,-190);
glVertex2f (320,-70);
glEnd ();

/*59*/
/*MANDIBULA (IZQ A DCHA) 2.3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3725,0.1764,0.1490);
glVertex2f (280,-70);
glVertex2f (387,-190);
glVertex2f (230,-330);
glEnd ();

/*60*/
/*DIENTE 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.9960,0.9333,0.7019);
glVertex2f (280,-70);
glVertex2f (230,-330);
glVertex2f (140,-80);
glEnd ();

/*61*/
/*MANDIBULA (IZQ A DCHA) 3.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3803,0.1490,0.1176);
glVertex2f (140,-80);
glVertex2f (120,-190);
glVertex2f (230,-330);
glEnd ();

/*62*/
/*MANDIBULA (IZQ A DCHA) 3.1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3333,0.1607,0.1490);
glVertex2f (170,-380);
glVertex2f (120,-190);
glVertex2f (230,-330);
glEnd ();

/*63*/
/*MANDIBULA (IZQ A DCHA) 3.2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3921,0.1372,0.1294);
glVertex2f (170,-380);
glVertex2f (180,-610);
glVertex2f (230,-330);
glEnd ();

/*64*/
/*DIENTE 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.9411,0.8745,0.7058);
glVertex2f (140,-80);
glVertex2f (120,-190);
glVertex2f (60,-78);
glEnd ();

/*65*/
/*TRAQUEA (IZQ A DCHA) 1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9058,0.8156,0.6117);
glVertex2f (120,-190);
glVertex2f (60,-78);
glVertex2f (0,-180);
glEnd ();

/*66*/
/*TRAQUEA (IZQ A DCHA) 2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7450,0.6392,0.4705);
glVertex2f (60,-78);
glVertex2f (0,-78);
glVertex2f (0,-180);
glEnd ();

/*67*/
/*LENGUA (ARRIBA A ABAJO) 1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7333,0.3490,0.3058);
glVertex2f (0,-180);
glVertex2f (0,-410);
glVertex2f (120,-190);
glEnd ();

/*68*/
/*LENGUA (ARRIBA A ABAJO) 2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9215,0.4470,0.3803);
glVertex2f (120,-190);
glVertex2f (0,-410);
glVertex2f (170,-380);
glEnd ();

/*69*/
/*LENGUA (ARRIBA A ABAJO) 3*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9098,0.4745,0.4);
glVertex2f (120,-680);
glVertex2f (0,-410);
glVertex2f (170,-380);
glEnd ();

/*70*/
/*LENGUA (ARRIBA A ABAJO) 4*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9137,0.5921,0.5450);
glVertex2f (120,-680);
glVertex2f (180,-610);
glVertex2f (170,-380);
glEnd ();

/*71*/
/*LENGUA (ARRIBA A ABAJO) 5*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9417,0.4784,0.4392);
glVertex2f (0,-410);
glVertex2f (0,-710);
glVertex2f (120,-680);
glEnd ();

/*72*/
/* DEBAJO DE LA LENGUA (IZQ A DCHA) 1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3372,0.1647,0.1529);
glVertex2f (0,-790);
glVertex2f (180,-610);
glVertex2f (90,-790);
glEnd ();

/*73*/
/* DEBAJO DE LA LENGUA (IZQ A DCHA) 2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2941,0.1372,0.1411);
glVertex2f (0,-790);
glVertex2f (0,-690);
glVertex2f (120,-680);
glEnd ();

/*74*/
/* BIGOTE AMARILLO (IZQ A DCHA) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (1,0.9568,0.8313);
glVertex2f (180,-610);
glVertex2f (80,-790);
glVertex2f (160,-810);
glEnd ();

/*75*/
/* BIGOTE AMARILLO (IZQ A DCHA) 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.9960,0.9529,0.8745);
glVertex2f (80,-790);
glVertex2f (160,-810);
glVertex2f (0,-810);
glEnd ();

/*76*/
/* ARRIBA DEL BIGOTE AMARILLO */
glBegin    (GL_TRIANGLES);
glColor3f  (0.7647,0.7215,0.7372);
glVertex2f (80,-790);
glVertex2f (0,-810);
glVertex2f (0,-790);
glEnd ();

/*77*/
/* ABAJO DEL BIGOTE AMARILLO (IZQ A DCHA) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3294,0.2941,0.2745);
glVertex2f (180,-610);
glVertex2f (250,-870);
glVertex2f (145,-890);
glEnd ();

/*78*/
/* ABAJO DEL BIGOTE AMARILLO (IZQ A DCHA) 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3098,0.2823,0.2431);
glVertex2f (160,-810);
glVertex2f (0,-810);
glVertex2f (145,-890);
glEnd ();

/*79*/
/* ABAJO DEL BIGOTE AMARILLO (IZQ A DCHA) 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2980,0.2470,0.2235);
glVertex2f (0,-810);
glVertex2f (0,-900);
glVertex2f (145,-890);
glEnd ();

/*80*/
/* BIGOTE BLANCO (DCHA A IZQ ) 1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7098,0.7098,0.7098);
glVertex2f (470,-100);
glVertex2f (380,0);
glVertex2f (390,20);
glEnd ();

/*81*/
/* BIGOTE BLANCO (DCHA A IZQ ) 2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7098,0.7098,0.7098);
glVertex2f (650,-100);
glVertex2f (410,85);
glVertex2f (420,100);
glEnd ();

/*82*/
/* BIGOTE BLANCO (DCHA A IZQ ) 3*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7098,0.7098,0.7098);
glVertex2f (840,-80);
glVertex2f (470,130);
glVertex2f (470,150);
glEnd ();

/*83*/
/* BIGOTE BLANCO (DCHA A IZQ ) 4*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7098,0.7098,0.7098);
glVertex2f (940,80);
glVertex2f (480,185);
glVertex2f (480,205);
glEnd ();

/*84*/
/* BIGOTE BLANCO (DCHA A IZQ ) 5*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7098,0.7098,0.7098);
glVertex2f (980,295);
glVertex2f (490,285);
glVertex2f (480,265);
glEnd ();

/*BARBILLA (IZQ A DCHA) 01*/
/*glBegin (GL_TRIANGLES);
glColor3f(0.0,0.0,0.0);
glVertex2f (260,-1020);
glVertex2f (250,-870);
glVertex2f (410,-790);
glEnd ();*/

/*85*/
/* OREJA DERECHA 1*/
glBegin    (GL_TRIANGLES); //PRIMITIVAS
glColor3f  (0.2039,0.2039,0.2039);
glVertex2f (-980,665);
glVertex2f (-840,550);
glVertex2f (-650,830);
glEnd ();

/*86*/
/* OREJA DERECHA 1.1*/
glBegin    (GL_TRIANGLES); //PRIMITIVAS
glColor3f  (0.1764,0.1764,0.1764);
glVertex2f (-980,665);
glVertex2f (-840,550);
glVertex2f (-950,380);
glEnd ();

/*87*/
/* PARTE ADYACENTE BAJA DE LA OREJA DERECHA 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3843,0.3843,0.3843);
glVertex2f (-650,830);
glVertex2f (-650,670);
glVertex2f (-840,550);
glEnd ();

/*88*/
/* PARTE ADYACENTE BAJA DE LA OREJA DERECHA 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3529,0.3529,0.3529);
glVertex2f (-650,670);
glVertex2f (-840,550);
glVertex2f (-630,505);
glEnd ();

/*89*/
/* PARTE ADYACENTE BAJA DE LA OREJA DERECHA 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4156,0.3882,0.3568);
glVertex2f (-650,670);
glVertex2f (-450,750);
glVertex2f (-630,505);
glEnd ();

/*90*/
/* PARTE ADYACENTE BAJA DE LA OREJA DERECHA 4 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4823,0.4823,0.4823);
glVertex2f (-840,550);
glVertex2f (-950,380);
glVertex2f (-630,505);
glEnd ();

/*91*/
/* PARTE ADYACENTE BAJA DE LA OREJA DERECHA 5 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3686,0.3529,0.3411);
glVertex2f (-650,830);
glVertex2f (-450,750);
glVertex2f (-650,670);
glEnd ( );

/*92*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA (IZQ A DCHA) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2549,0.2627,0.2509);
glVertex2f (-950,380);
glVertex2f (-630,505);
glVertex2f (-960,180);
glEnd ( );

/*93*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (IZQ A DCHA) 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3450,0.3529,0.3411);
glVertex2f (-960,180);
glVertex2f (-630,505);
glVertex2f (-580,190);
glEnd ( );

/*94*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (IZQ A DCHA) 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2901,0.2705,0.2470);
glVertex2f (-960,180);
glVertex2f (-580,190);
glVertex2f (-700,-60);
glEnd ( );

/*95*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (IZQ A DCHA) 4 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2470,0.2666,0.2509);
glVertex2f (-960,180);
glVertex2f (-700,-60);
glVertex2f (-950,-80);
glEnd ( );

/*96*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (IZQ A DCHA) 5 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2196,0.2196,0.2196);
glVertex2f (-720,-430);
glVertex2f (-700,-60);
glVertex2f (-950,-80);
glEnd ();

/*97*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (IZQ A DCHA) 6 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.1843,0.1647,0.1529);
glVertex2f (-720,-430);
glVertex2f (-510,-190);
glVertex2f (-700,-60);
glEnd ();

/*98*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (IZQ A DCHA) 7 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.1882,0.1490,0.1450);
glVertex2f (-720,-430);
glVertex2f (-510,-190);
glVertex2f (-370,-550);
glEnd ();

/*99*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (IZQ A DCHA) 8 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.1686,0.1333,0.1372);
glVertex2f (-720,-430);
glVertex2f (-370,-550);
glVertex2f (-410,-790);
glEnd ();

/*100*/
/* SECUENCIA DEL BORDE DE LA OREJA IZQUIERDA (IZQ A DCHA) 9 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2588,0.2588,0.2588);
glVertex2f (-410,-790);
glVertex2f (-370,-550);
glVertex2f (-250,-870);
glEnd ();

/*101*/
/* BORDE DE LA MANDIBULA IZQUIERDA 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3490,0.3176,0.3098);
glVertex2f (-370,-550);
glVertex2f (-250,-870);
glVertex2f (-180,-610);
glEnd ();

/*102*/
/* BORDE DE LA MANDIBULA IZQUIERDA 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.6470,0.5921,0.5803);
glVertex2f (-370,-550);
glVertex2f (-384,-245);
glVertex2f (-180,-610);
glEnd ();

/*103*/
/* BORDE DE LA MANDIBULA IZQUIERDA 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4039,0.3294,0.2745);
glVertex2f (-510,-190);
glVertex2f (-370,-550);
glVertex2f (-390,-110);
glEnd ();

/*104*/
/* BORDE DE LA MANDIBULA IZQUIERDA 4 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4196,0.4274,0.4156);
glVertex2f (-500,90);
glVertex2f (-510,-190);
glVertex2f (-320,-70);
glEnd ();

/*105*/
/* ADYACENTE DEL BORDE IZQUIERDO 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2745,0.2470,0.2235);
glVertex2f (-500,90);
glVertex2f (-510,-190);
glVertex2f (-700,-60);
glEnd ();

/*106*/
/* ADYACENTE DEL BORDE IZQUIERDO 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4196,0.4274,0.4156);
glVertex2f (-500,90);
glVertex2f (-580,190);
glVertex2f (-700,-60);
glEnd ();

/*107*/
/* PARTE ADYACENTE DERECHA DE LA PARTE DERECHA DE LA OJERA DEL OJO 01.1 */
glBegin    (GL_QUADS);
glColor3f  (0.2431,0.2431,0.2431);
glVertex2f (-500,390);
glVertex2f (-500,90);
glVertex2f (-320,-70);
glVertex2f (-405,340);
glEnd ( );

/*108*/
/* PARTE ADYACENTE IZQUIERDA DE LA PARTE IZQUIERDA DE LA OJERA DEL OJO 1.1 */
glBegin    (GL_QUADS);
glColor3f  (0.1843,0.1843,0.1843);
glVertex2f (-405,340);
glVertex2f (-320,-70);
glVertex2f (-180,220);
glVertex2f (-240,400);
glEnd ( );

/*109*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(IZQ A DCHA Y ABAJO Y IZQ)1.2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3411,0.3411,0.3411);
glVertex2f (-500,90);
glVertex2f (-500,390);
glVertex2f (-580,190);
glEnd ( );

/*110*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(IZQ A DCHA Y ABAJO Y IZQ)1.3*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.1686,0.1686,0.1686);
glVertex2f (-500,390);
glVertex2f (-580,190);
glVertex2f (-630,505);
glEnd ( );

/*111*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(IZQ A DCHA Y ABAJO Y IZQ)1.4*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3058,0.3137,0.3098);
glVertex2f (-500,390);
glVertex2f (-505,600);
glVertex2f (-630,505);
glEnd ( );

/*112*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(IZQ A DCHA Y ABAJO Y IZQ)1.5*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2235,0.2235,0.2313);
glVertex2f (-505,600);
glVertex2f (-410,510);
glVertex2f (-500,390);
glEnd ( );

/*113*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(IZQ A DCHA Y ABAJO Y IZQ)1.6*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2627,0.2627,0.2627);
glVertex2f (-450,760);
glVertex2f (-505,600);
glVertex2f (-630,505);
glEnd ( );

/*114*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(DCHA A IZQ) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.1921,0.2078,0.2039);
glVertex2f (-650,830);
glVertex2f (-340,1030);
glVertex2f (-450,750);
glEnd ( );

/*115*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(DCHA A IZQ) 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3882,0.3882,0.3960);
glVertex2f (-340,1030);
glVertex2f (-160,810);
glVertex2f (-450,750);
glEnd ( );

/*116*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(DCHA A IZQ) 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3960,0.4117,0.4156);
glVertex2f (-340,1030);
glVertex2f (0,1030);
glVertex2f (-160,810);
glEnd ( );

/*117*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(DCHA A IZQ) 4 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4588,0.4588,0.4588);
glVertex2f (0,1030);
glVertex2f (-160,810);
glVertex2f (0,790);
glEnd ( );

/*118*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(DCHA A IZQ Y ABAJO) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3254,0.3254,0.3254);
glVertex2f (-170,630);
glVertex2f (-160,810);
glVertex2f (0,790);
glEnd ( );

/*119*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(DCHA A IZQ Y ABAJO Y DCHA) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3,0.3,0.3);
glVertex2f (-160,810);
glVertex2f (-170,630);
glVertex2f (-450,760);
glEnd ( );

/*120*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(DCHA A IZQ Y ABAJO Y DCHA) 2*/
glBegin     (GL_TRIANGLES);
glColor3f   (0.2,0.2,0.2);
glVertex2f  (-450,760);
glVertex2f  (-170,630);
glVertex2f  (-395,605);
glEnd ( );

/*121*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(DCHA A IZQ Y ABAJO Y DCHA) 3*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3,0.3,0.3);
glVertex2f (-450,760);
glVertex2f (-505,600);
glVertex2f (-395,605);
glEnd ( );

/*122*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(DCHA A IZQ Y ABAJO) 1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2745,0.2784,0.2862);
glVertex2f (-170,630);
glVertex2f (0,555);
glVertex2f (0,790);
glEnd ( );

/*123*/
/* SECUENCIA DEL BORDE DE LA OREJA DERECHA(DCHA A IZQ Y ABAJO) 2*/
glBegin    (GL_QUADS);
glColor3f  (0.1411,0.1333,0.1375);
glVertex2f (-170,630);
glVertex2f (-200,545);
glVertex2f (0,460);
glVertex2f (0,555);
glEnd ( );

/*124/
/* PARTE ADYACENTE IZQ DEL OJO 1.1 */
glBegin    (GL_QUADS);
glColor3f  (0.0941,0.0941,0.0941);
glVertex2f (-395,605);
glVertex2f (-295,550);
glVertex2f (-200,545);
glVertex2f (-170,630);
glEnd ( );

/*125*/
/* OJO DERECHO 1.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.7372,0.6313,0.3137);
glVertex2f (-395,605);
glVertex2f (-295,550);
glVertex2f (-370,510);
glEnd ( );

/*126*/
/* INTERMEDIO DEL OJO 1 Y OJO 1.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.1529,0.1568,0.1764);
glVertex2f (-395,605);
glVertex2f (-410,510);
glVertex2f (-370,510);
glEnd ( );

/*127*/
/* OJO 1.2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9529,0.8509,0.3058);
glVertex2f (-505,600);
glVertex2f (-395,605);
glVertex2f (-410,510);
glEnd ( );

/*128*/
/* PARTE ADYACENTE BAJA DEL OJO 1.1*/
glBegin    (GL_POLYGON);
glColor3f  (0.1411,0.1529,0.1725);
glVertex2f (-410,510);
glVertex2f (-500,390);
glVertex2f (-200,545);
glVertex2f (-295,550);
glVertex2f (-370,510);
glEnd ( );

/*129*/
/* OJERA DE OJO 1.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3372,0.3333,0.3529);
glVertex2f (-500,390);
glVertex2f (-405,340);
glVertex2f (-200,545);
glEnd ( );

/*130*/
/* OJERA DE OJO 1.2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2745,0.2901,0.2862);
glVertex2f (-405,340);
glVertex2f (-240,400);
glVertex2f (-200,545);
glEnd ( );

/*131*/
/* PARTE ADYACENTE DERECHA DE LA NARIZ 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.1411,0.1333,0.1375);
glVertex2f (-200,545);
glVertex2f (-240,400);
glVertex2f (0,460);
glEnd ( );

/*132*/
/* PARTE ADYACENTE DERECHA DE LA NARIZ 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2078,0.2078,0.2078);
glVertex2f (-240,400);
glVertex2f (-180,370);
glVertex2f (0,460);
glEnd ( );

/*133*/
/* PARTE ADYACENTE DERECHA DE LA NARIZ 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2745,0.2705,0.2627);
glVertex2f (-240,400);
glVertex2f (-180,220);
glVertex2f (-180,370);
glEnd ( );

/*134*/
/* NARIZ 2.1*/
glBegin    (GL_QUADS);
glColor3f  (0.6117,0.6117,0.6117);
glVertex2f (-180,370);
glVertex2f (-180,220);
glVertex2f (0,310);
glVertex2f (0,460);
glEnd ( );

/*135*/
/* NARIZ 2.2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.4392,0.4392,0.4313);
glVertex2f (-180,220);
glVertex2f (0,160);
glVertex2f (0,310);
glEnd ( );

/*136*/
/* DEBAJO DE LA NARIZ 1.1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2862,0.2666,0.2431);
glVertex2f (-180,220);
glVertex2f (0,160);
glVertex2f (0,-78);
glEnd ( );

/*137*/
/* ADYACENTE IZQ DE LA PARTE DE BAJO DE LA NARIZ 01.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2196,0.2039,0.2);
glVertex2f (-180,220);
glVertex2f (-320,-70);
glVertex2f (0,-78);
glEnd ( );

/*138*/
/*MANDIBULA (IZQ A DCHA) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3176,0.2431,0.2274);
glVertex2f (-387,-190);
glVertex2f (-384,-245);
glVertex2f (-295,-405);
glEnd ();

/*139*/
/*DIENTE 1.1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.8313,0.6705,0.5450);
glVertex2f (-387,-190);
glVertex2f (-295,-405);
glVertex2f (-230,-330);
glEnd ();

/*140*/
/*DIENTE 1.2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9607,0.8352,0.6352);
glVertex2f (-295,-405);
glVertex2f (-230,-330);
glVertex2f (-180,-610);
glEnd ();

/*141*/
/*MANDIBULA (DCHA A IZQ) 2.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2117,0.1529,0.1333);
glVertex2f (-390,-110);
glVertex2f (-387,-190);
glVertex2f (-320,-70);
glEnd ();

/*142*/
/*MANDIBULA (DCHA A IZQ) 2.2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2549,0.0941,0.1098);
glVertex2f (-280,-70);
glVertex2f (-387,-190);
glVertex2f (-320,-70);
glEnd ();

/*143*/
/*MANDIBULA (DCHA A IZQ) 2.3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3725,0.1764,0.1490);
glVertex2f (-280,-70);
glVertex2f (-387,-190);
glVertex2f (-230,-330);
glEnd ();

/*144*/
/*DIENTE IZQUIERDO 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.9960,0.9333,0.7019);
glVertex2f (-280,-70);
glVertex2f (-230,-330);
glVertex2f (-140,-80);
glEnd ();

/*145*/
/*MANDIBULA (DCHA A IZQ) 3.1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3803,0.1490,0.1176);
glVertex2f (-140,-80);
glVertex2f (-120,-190);
glVertex2f (-230,-330);
glEnd ();

/*146*/
/*MANDIBULA (DCHA A IZQ) 3.1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3333,0.1607,0.1490);
glVertex2f (-170,-380);
glVertex2f (-120,-190);
glVertex2f (-230,-330);
glEnd ();

/*147*/
/*MANDIBULA (DCHA A IZQ) 3.2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3921,0.1372,0.1294);
glVertex2f (-170,-380);
glVertex2f (-180,-610);
glVertex2f (-230,-330);
glEnd ();

/*148*/
/*DIENTE 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.9411,0.8745,0.7058);
glVertex2f (-140,-80);
glVertex2f (-120,-190);
glVertex2f (-60,-78);
glEnd ();

/*149*/
/*TRAQUEA (DCHA A IZQ) 1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9058,0.8156,0.6117);
glVertex2f (-120,-190);
glVertex2f (-60,-78);
glVertex2f (0,-180);
glEnd ();

/*150*/
/*TRAQUEA (DCHA A IZQ) 2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7450,0.6392,0.4705);
glVertex2f (-60,-78);
glVertex2f (0,-78);
glVertex2f (0,-180);
glEnd ();

/*151*/
/*LENGUA (ARRIBA A ABAJO) 1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7333,0.3490,0.3058);
glVertex2f (0,-180);
glVertex2f (0,-410);
glVertex2f (-120,-190);
glEnd ();

/*152*/
/*LENGUA (ARRIBA A ABAJO) 2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9215,0.4470,0.3803);
glVertex2f (-120,-190);
glVertex2f (0,-410);
glVertex2f (-170,-380);
glEnd ();

/*153*/
/*LENGUA (ARRIBA A ABAJO) 3*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9098,0.4745,0.4);
glVertex2f (-120,-680);
glVertex2f (0,-410);
glVertex2f (-170,-380);
glEnd ();

/*154*/
/*LENGUA (ARRIBA A ABAJO) 4*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9137,0.5921,0.5450);
glVertex2f (-120,-680);
glVertex2f (-180,-610);
glVertex2f (-170,-380);
glEnd ();

/*155*/
/*LENGUA (ARRIBA A ABAJO) 5*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.9417,0.4784,0.4392);
glVertex2f (0,-410);
glVertex2f (0,-710);
glVertex2f (-120,-680);
glEnd ();

/*156*/
/* DEBAJO DE LA LENGUA (DCHA A IZQ) 1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.3372,0.1647,0.1529);
glVertex2f (0,-790);
glVertex2f (-180,-610);
glVertex2f (-90,-790);
glEnd ();

/*157*/
/* DEBAJO DE LA LENGUA (DCHA A IZQ) 2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.2941,0.1372,0.1411);
glVertex2f (0,-790);
glVertex2f (0,-690);
glVertex2f (-120,-680);
glEnd ();

/*158*/
/* BIGOTE AMARILLO (DCHA A IZQ) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (1,0.9568,0.8313);
glVertex2f (-180,-610);
glVertex2f (-80,-790);
glVertex2f (-160,-810);
glEnd ();

/*159*/
/* BIGOTE AMARILLO (DCHA A IZQ) 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.9960,0.9529,0.8745);
glVertex2f (-80,-790);
glVertex2f (-160,-810);
glVertex2f (0,-810);
glEnd ();

/*160*/
/* ARRIBA DEL BIGOTE AMARILLO */
glBegin    (GL_TRIANGLES);
glColor3f  (0.7647,0.7215,0.7372);
glVertex2f (-80,-790);
glVertex2f (0,-810);
glVertex2f (0,-790);
glEnd ();

/*161*/
/* ABAJO DEL BIGOTE AMARILLO (DCHA A IZQ) 1 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3294,0.2941,0.2745);
glVertex2f (-180,-610);
glVertex2f (-250,-870);
glVertex2f (-145,-890);
glEnd ();

/*162*/
/* ABAJO DEL BIGOTE AMARILLO (DCHA A IZQ) 2 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.3098,0.2823,0.2431);
glVertex2f (-160,-810);
glVertex2f (0,-810);
glVertex2f (-145,-890);
glEnd ();

/*163*/
/* ABAJO DEL BIGOTE AMARILLO (DCHA A IZQ) 3 */
glBegin    (GL_TRIANGLES);
glColor3f  (0.2980,0.2470,0.2235);
glVertex2f (0,-810);
glVertex2f (0,-900);
glVertex2f (-145,-890);
glEnd ();

/*164*/
/* BIGOTE BLANCO (DCHA A IZQ) 1*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7098,0.7098,0.7098);
glVertex2f (-470,-100);
glVertex2f (-380,0);
glVertex2f (-390,20);
glEnd ();

/*165*/
/* BIGOTE BLANCO (DCHA A IZQ ) 2*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7098,0.7098,0.7098);
glVertex2f (-650,-100);
glVertex2f (-410,85);
glVertex2f (-420,100);
glEnd ();

/*166*/
/* BIGOTE BLANCO (DCHA A IZQ ) 3*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7098,0.7098,0.7098);
glVertex2f (-840,-80);
glVertex2f (-470,130);
glVertex2f (-470,150);
glEnd ();

/*167*/
/* BIGOTE BLANCO (DCHA A IZQ ) 4*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7098,0.7098,0.7098);
glVertex2f (-940,80);
glVertex2f (-480,185);
glVertex2f (-480,205);
glEnd ();

/*168*/
/* BIGOTE BLANCO (DCHA A IZQ ) 5*/
glBegin    (GL_TRIANGLES);
glColor3f  (0.7098,0.7098,0.7098);
glVertex2f (-980,295);
glVertex2f (-490,285);
glVertex2f (-480,265);
glEnd ();

/*BARBILLA (DCHA A IZQ) 1*/
/*glBegin  (GL_TRIANGLES);
glColor3f  (0.0,0.0,0.0);
glVertex2f (260,-1020);
glVertex2f (250,-870);
glVertex2f (410,-790);
glEnd ();*/

glFlush();
}

int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
// GLUT_SINGLE indica que se debe usar un solo buffer
// GLUT_RGB el tipo de modelo de color con el que se dibujar�.
glutInitWindowSize(1100,1000); //TAMA�O DE LA VENTANA
glutInitWindowPosition(450,25);//El ancho y alto de la nueva ventana
glutCreateWindow("PARTE 2 - T1");
inicializar();

glutDisplayFunc(graficar);

glutMainLoop();

return 0;
}
