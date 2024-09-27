#include <GL/glut.h>
#include <iostream>

void renderLines() {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear the screen

    glLineWidth(2.5f);  // Set line width

    glBegin(GL_LINES);
    //g++ project.cpp -o app -lGL -lGLU -lglut

    // Far Left Pillar
    glVertex2f(614, 2141); glVertex2f(508, 0); 
    glVertex2f(811, 2141); glVertex2f(724, 0); 
    glVertex2f(943, 2000); glVertex2f(878, 0); 

    // Far Left Pillar Bottom
    glVertex2f(894, 2141); glVertex2f(943, 1999); 
    glVertex2f(899, 2141); glVertex2f(948, 2002); 
    glVertex2f(925, 2141); glVertex2f(951, 2075); 
    glVertex2f(951, 2004); glVertex2f(951, 2075); 
    glVertex2f(951, 2004); glVertex2f(942, 1997); 

    //Left Door Wall
    glVertex2f(898, 622); glVertex2f(880, 65); 
    glVertex2f(880, 65); glVertex2f(1084, 431); 
    glVertex2f(1084, 431); glVertex2f(1104, 1309); 
    glVertex2f(1104, 1309); glVertex2f(1009, 1519); 
    glVertex2f(1009, 1519); glVertex2f(988, 671); 
    glVertex2f(988, 671); glVertex2f(898, 622);

    //Left Door Wall Bottom
    glVertex2f(1104, 1309); glVertex2f(1009, 1519); 
    glVertex2f(1009, 1519); glVertex2f(1009, 1561); 
    glVertex2f(1009, 1561); glVertex2f(1104, 1339);
    glVertex2f(1104, 1339); glVertex2f(1104, 1309);

    //Left Middle Pillar
    //Front Square
    glVertex2f(1084, 431); glVertex2f(1104, 1309); 
    glVertex2f(1104, 1309); glVertex2f(1163, 1309); 
    glVertex2f(1163, 1309); glVertex2f(1144, 431);
    glVertex2f(1144, 431);glVertex2f(1084, 431);

    //Left Middle Pillar
    //side Square
    glVertex2f(1144, 431); glVertex2f(1162, 470);
    glVertex2f(1162, 470); glVertex2f(1178, 1277);
    glVertex2f(1178, 1277); glVertex2f(1163, 1309);
    glVertex2f(1163, 1309); glVertex2f(1144, 431);

    //Left Middle Pillar Bottom Front 
    glVertex2f(1104, 1339); glVertex2f(1104, 1309);
    glVertex2f(1104, 1309); glVertex2f(1164, 1309);
    glVertex2f(1164, 1309); glVertex2f(1164, 1339);
    glVertex2f(1164, 1339); glVertex2f(1104, 1339);

    //Left Middle Pillar Bottom Side
    glVertex2f(1164, 1309); glVertex2f(1164, 1339);
    glVertex2f(1164, 1339);glVertex2f(1180, 1298);
    glVertex2f(1180, 1298); glVertex2f(1180, 1276);
    glVertex2f(1180, 1276); glVertex2f(1164, 1309);

    //Left Door Frame Part
    glVertex2f(899, 641); glVertex2f(984, 685);
    glVertex2f(984, 685); glVertex2f(1004, 1575);
    glVertex2f(1004, 1575); glVertex2f(977, 1575);
    glVertex2f(977, 1575); glVertex2f(955, 692);
    glVertex2f(955, 692); glVertex2f(900, 668);
    glVertex2f(900, 668); glVertex2f(899, 641);

    //Left Door Frame Part
    glVertex2f(1004, 1575); glVertex2f(1010, 1566);
    glVertex2f(1010, 1566); glVertex2f(988, 671);
    glVertex2f(988, 671); glVertex2f(898, 622);
    glVertex2f(898, 622); glVertex2f(899, 641);
    glVertex2f(899, 641); glVertex2f(984, 686);
    glVertex2f(984, 686); glVertex2f(1004, 1575);

    //Left Door Stop
    glVertex2f(930, 1610); glVertex2f(948, 1577);
    glVertex2f(948, 1577); glVertex2f(938, 1572);
    glVertex2f(938, 1572); glVertex2f(930, 1581);
    glVertex2f(930, 1581); glVertex2f(930, 1610);

    //Left Door Dark Part
    glVertex2f(900, 669); glVertex2f(912, 673);
    glVertex2f(912, 673); glVertex2f(938, 1572);
    glVertex2f(938, 1572); glVertex2f(930, 1581);
    glVertex2f(930, 1581); glVertex2f(900, 669);

    //Left Door Handle
    glVertex2f(923, 1154); glVertex2f(944, 1154);
    glVertex2f(944, 1154); glVertex2f(948, 1147);
    glVertex2f(948, 1147); glVertex2f(922, 1147);
    glVertex2f(922, 1147); glVertex2f(922, 1130);
    glVertex2f(922, 1130); glVertex2f(926, 1130);
    glVertex2f(926, 1130); glVertex2f(926, 1138);
    glVertex2f(926, 1138); glVertex2f(932, 1138);
    glVertex2f(932, 1138); glVertex2f(935, 1141);
    glVertex2f(935, 1141); glVertex2f(956, 1141);
    glVertex2f(956, 1141); glVertex2f(956, 1152);
    glVertex2f(956, 1152); glVertex2f(947, 1165);
    glVertex2f(947, 1165); glVertex2f(923, 1165);
    glVertex2f(923, 1165); glVertex2f(923, 1154);

    //Left Picture One
    glVertex2f(991, 813); glVertex2f(1007, 813);
    glVertex2f(1007, 813); glVertex2f(1007, 858); 
    glVertex2f(1007, 858); glVertex2f(992, 858); 
    glVertex2f(992, 858); glVertex2f(991, 813);

    //Left Picture Two
    glVertex2f(1007, 858); glVertex2f(992, 858);
    glVertex2f(992, 858); glVertex2f(993, 878);
    glVertex2f(993, 878); glVertex2f(1007, 877);
    glVertex2f(1007, 877); glVertex2f(1007, 858);

    //Left Picture Three
    glVertex2f(993, 878); glVertex2f(1007, 877);
    glVertex2f(1007, 877); glVertex2f(1009, 905);
    glVertex2f(1009, 905); glVertex2f(993, 905);
    glVertex2f(993, 905); glVertex2f(993, 878);

    //Left Picture Four
    glVertex2f(1007, 905); glVertex2f(993, 905);
    glVertex2f(993, 905); glVertex2f(995, 935);
    glVertex2f(995, 935); glVertex2f(1008, 931);
    glVertex2f(1008, 931); glVertex2f(1007, 905);

    //Left Picture Five 
    glVertex2f(995, 964); glVertex2f(1022, 958); 
    glVertex2f(1022, 958); glVertex2f(1022, 1038);
    glVertex2f(1022, 1038); glVertex2f(996, 1041);
    glVertex2f(996, 1041); glVertex2f(995, 964);

    //Left Picture Six
    glVertex2f(1006, 1081); glVertex2f(1024, 1073);
    glVertex2f(1024, 1073); glVertex2f(1018, 1032);
    glVertex2f(1018, 1032); glVertex2f(1017, 961);
    glVertex2f(1017, 961); glVertex2f(1006, 966);
    glVertex2f(1006, 966); glVertex2f(1001, 988);
    glVertex2f(1001, 988); glVertex2f(1001, 1041);
    glVertex2f(1001, 1041); glVertex2f(1006, 1081);

    // Left Picture Seven
    glVertex2f(1003, 1083); glVertex2f(1019, 1075);
    glVertex2f(1019, 1075); glVertex2f(1019, 1114);
    glVertex2f(1019, 1114); glVertex2f(1004, 1125);
    glVertex2f(1004, 1125); glVertex2f(1003, 1083);

    // Left Picture Eight
    glVertex2f(1004, 1126); glVertex2f(1019, 1115);
    glVertex2f(1019, 1115); glVertex2f(1020, 1135);
    glVertex2f(1020, 1135); glVertex2f(1004, 1149);
    glVertex2f(1004, 1149); glVertex2f(1004, 1126);





    glEnd();

    glFlush();  // Render the lines
}

// Initialization function
void init() {
    // Set background color to dark gray
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    // Set up 2D orthographic projection to match the given dimensions
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // Swap the y-axis by setting (0, 2141) at the bottom-left and (2855, 0) at the top-right
    gluOrtho2D(0, 2855, 2141, 0);  // Adjusted projection for the given coordinate system

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

// Main function
int main(int argc, char** argv) {
    // Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(2855, 2141);  // Set window size based on the coordinate system
    glutCreateWindow("OpenGL 2D Line Rendering with GLUT");

    // Initialize OpenGL
    init();

    // Set the display function
    glutDisplayFunc(renderLines);

    // Enter the main loop
    glutMainLoop();

    return 0;
}
