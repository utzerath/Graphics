#include <GL/glew.h>   // GLEW first
#include <GL/glut.h>   // GLUT after GLEW
#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

//g++ project.cpp -o app -lGL -lGLU -lglut -lGLEW


#define TEXTURES 1 //array of textures
// Declare texture IDs
GLuint id[TEXTURES];

// Initialization function
void init() {
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);  // Set the background color to dark gray
    glEnable(GL_TEXTURE_2D);                // Enable 2D texturing (though we don't use it now)

    // Set up orthographic projection with window dimensions
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 2855, 2141, 0);  // Use your window dimensions for 2D projection

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void loadTexture(const char* filename, int textureIndex) {
    int width, height, nrChannels;
    unsigned char* data = stbi_load(filename, &width, &height, &nrChannels, 0);
    if (data) {
        GLenum format;
        if (nrChannels == 4) {
            format = GL_RGBA;  // Handle RGBA textures
        } else if (nrChannels == 3) {
            format = GL_RGB;  // Handle RGB textures
        }

        glGenTextures(1, &id[textureIndex]);
        glBindTexture(GL_TEXTURE_2D, id[textureIndex]);

        // Set texture wrapping and filtering options
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

        // Load the texture into OpenGL
        glTexImage2D(GL_TEXTURE_2D, 0, format, width, height, 0, format, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);

        stbi_image_free(data);  // Free the image memory after loading
    } else {
        printf("Failed to load texture: %s\n", filename);
    }
}

void drawBackdoor() {
    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, id[0]);

    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_QUADS);
        glTexCoord2f(0.0f, 1.0f); glVertex2f(1303.0f, 1066.0f);
        glTexCoord2f(1.0f, 1.0f); glVertex2f(1407.0f, 1066.0f);
        glTexCoord2f(1.0f, 0.0f); glVertex2f(1406.0f, 762.0f);
        glTexCoord2f(0.0f, 0.0f); glVertex2f(1300.0f, 761.0f);
    glEnd();

    glBindTexture(GL_TEXTURE_2D, 0);

    glDisable(GL_TEXTURE_2D);

    glFlush();
}



void renderShapes() {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear the screen

    glLineWidth(2.5f);  // Set line width for polygon edges

    //Ceiling
    glColor4f(0.624, 0.639, 0.682, 1.0);
    glBegin(GL_POLYGON);

        glVertex2f(878, 0);
        glVertex2f(879, 66);
        glVertex2f(1084, 431);
        glVertex2f(1144, 432);
        glVertex2f(1162, 471);
        glVertex2f(1166, 588);
        glVertex2f(1396, 591);
        glVertex2f(1396, 573);
        glVertex2f(1459, 571);
        glVertex2f(1459, 592);
        glVertex2f(1555, 592);
        glVertex2f(1601, 536);
        glVertex2f(1602, 474);
        glVertex2f(1628, 438);
        glVertex2f(1689, 437);
        glVertex2f(2094, 0);
        glVertex2f(878, 0);

    glEnd();
    //Floor 
    glColor4f(0.286, 0.271, 0.227, 1.0);
    glBegin(GL_POLYGON);

        glVertex2f(925, 2141);
        glVertex2f(953, 2075);
        glVertex2f(952, 2005);
        glVertex2f(945, 1998);
        glVertex2f(932, 1609);
        glVertex2f(949, 1578);
        glVertex2f(1004, 1578);
        glVertex2f(1106, 1340);
        glVertex2f(1165, 1338);
        glVertex2f(1181, 1297);
        glVertex2f(1175, 1169);
        glVertex2f(1189, 1148);
        glVertex2f(1188, 1125);
        glVertex2f(1284, 1105);
        glVertex2f(1429, 1104);
        glVertex2f(1517, 1117);
        glVertex2f(1530, 1132);
        glVertex2f(1530, 1138);
        glVertex2f(1591, 1213);
        glVertex2f(1590, 1292);
        glVertex2f(1613, 1330);
        glVertex2f(1674, 1330);
        glVertex2f(1847, 1556);
        glVertex2f(1979, 1653);
        glVertex2f(1976, 1732);
        glVertex2f(2067, 1845);
        glVertex2f(2063, 1958);
        glVertex2f(2056, 2018);
        glVertex2f(2126, 2141);
        glVertex2f(925, 2141);

    glEnd();
    //Close Left Wall
    glColor4f(0.588, 0.561, 0.490, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(0, 0);
        glVertex2f(509, 0);
        glVertex2f(614, 2141);
        glVertex2f(0, 2141);
        glVertex2f(0, 0);

    glEnd();

    //Close Right Wall
    glColor4f(0.596, 0.561, 0.494, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(2591, 0);
        glVertex2f(2856, 0);
        glVertex2f(2856, 2141);
        glVertex2f(2285, 2141);
        glVertex2f(2591, 0);

    glEnd();

    // Left Door Wall
    glColor4f(0.8588f, 0.8353f, 0.7882f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(898, 622);
        glVertex2f(880, 65);
        glVertex2f(1084, 431);
        glVertex2f(1104, 1309);
        glVertex2f(1009, 1519);
        glVertex2f(988, 671);
        glVertex2f(898, 622);
    glEnd();

    // Left Door Stop
    glColor3f(97.0f / 255.0f, 94.0f / 255.0f, 86.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(930, 1610);
        glVertex2f(948, 1577);
        glVertex2f(938, 1572);
        glVertex2f(930, 1581);
        glVertex2f(930, 1610);
    glEnd();

    
    // Left Door Dark Part
    glColor3f(3.0f / 255.0f, 2.0f / 255.0f, 0.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(900, 669);
        glVertex2f(912, 673);
        glVertex2f(938, 1572);
        glVertex2f(930, 1581);
        glVertex2f(900, 669);
    glEnd();

    // Left Door Part
    glColor3f(53.0f / 255.0f, 54.0f / 255.0f, 50.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(977, 1578);
        glVertex2f(948, 1578);
        glVertex2f(937, 1573);
        glVertex2f(912, 673);
        glVertex2f(955, 692);
        glVertex2f(977, 1578);
    glEnd();

    // Left Door Part 2
     glColor3f(20.0f / 255.0f, 31.0f / 255.0f, 32.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(985, 702);
        glVertex2f(900, 669);
        glVertex2f(899, 642);
        glVertex2f(984, 685);
        glVertex2f(985, 702);
    glEnd();

    // Left Door Part 3
    glColor3f(65.0f / 255.0f, 66.0f / 255.0f, 62.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(955, 692);
        glVertex2f(985, 702);
        glVertex2f(1004, 1578);
        glVertex2f(977, 1578);
        glVertex2f(955, 692);
    glEnd();

    // Left Door Part 4
    glColor3f(103.0f / 255.0f, 102.0f / 255.0f, 101.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(1004, 1578);
        glVertex2f(1010, 1567);
        glVertex2f(988, 672);
        glVertex2f(984, 669);
        glVertex2f(1004, 1578);
    glEnd();

    // Left Door Part 5
    glColor3f(119.0f / 255.0f, 120.0f / 255.0f, 114.0f / 255.0f);
    glBegin(GL_POLYGON);

        glVertex2f(899, 642);
        glVertex2f(899, 622);
        glVertex2f(984, 669);
        glVertex2f(984, 685);
        glVertex2f(889, 642);
    glEnd();

    // Left Door Wall Bottom
    glColor4f(0.5843f, 0.5490f, 0.4824f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1104, 1309);
        glVertex2f(1009, 1519);
        glVertex2f(1009, 1567);
        glVertex2f(1104, 1345);
        glVertex2f(1104, 1309);
    glEnd();

    // Far Left Pillar
    glColor4f(0.5176f, 0.4863f, 0.4353f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(614, 2141);
        glVertex2f(508, 0);
        glVertex2f(724, 0);
        glVertex2f(811, 2141);
        glVertex2f(614, 2141);
    glEnd();

    // Far Left Pillar Right Square
    glColor4f(0.5608f, 0.5529f, 0.5020f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(811, 2141);
        glVertex2f(724, 0);
        glVertex2f(878, 0);
        glVertex2f(943, 1999);
        glVertex2f(894, 2141);
        glVertex2f(811, 2141);
    glEnd();

    // Far Left Pillar Bottom
    glColor4f(0.2431f, 0.1961f, 0.1333f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(894, 2141);
        glVertex2f(943, 1999);
        glVertex2f(951, 2004);
        glVertex2f(951, 2075);
        glVertex2f(925, 2141);
        glVertex2f(894, 2141);
    glEnd();


    // Left Middle Pillar Front Square
    glColor4f(0.4784f, 0.4784f, 0.4314f, 1.0f);  // Red, Green, Blue, Alpha
    glBegin(GL_POLYGON);
        glVertex2f(1084, 431);
        glVertex2f(1104, 1309);
        glVertex2f(1163, 1309);
        glVertex2f(1144, 431);
        glVertex2f(1084, 431);
    glEnd();


    // Left Middle Pillar Side Square
    glColor4f(0.6078f, 0.6549f, 0.6627f, 1.0f);  // Red, Green, Blue, Alpha
    glBegin(GL_POLYGON);
        glVertex2f(1144, 431);
        glVertex2f(1162, 470);
        glVertex2f(1178, 1277);
        glVertex2f(1163, 1309);
        glVertex2f(1144, 431);
    glEnd();

    // Left Middle Pillar Bottom Front
    glColor4f(0.0157f, 0.0157f, 0.0078f, 1.0f);  // Red, Green, Blue, Alpha
    glBegin(GL_POLYGON);
        glVertex2f(1104, 1339);
        glVertex2f(1104, 1309);
        glVertex2f(1164, 1309);
        glVertex2f(1164, 1339);
        glVertex2f(1104, 1339);
    glEnd();

    // Left Middle Pillar Bottom Side
    glColor4f(0.4784f, 0.5098f, 0.5098f, 1.0f);  // Red, Green, Blue, Alpha
    glBegin(GL_POLYGON);
        glVertex2f(1164, 1310);
        glVertex2f(1164, 1339);
        glVertex2f(1178, 1301);
        glVertex2f(1178, 1274);
        glVertex2f(1164, 1310);
    glEnd();

    // Left Picture One
    glColor4f(0.808, 0.910, 0.910, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(991, 813);
        glVertex2f(1007, 813);
        glVertex2f(1007, 858);
        glVertex2f(992, 858);
        glVertex2f(991, 813);
    glEnd();

    // Left Picture Two
    glColor4f(0.698, 0.725, 0.749, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(1007, 858);
        glVertex2f(992, 858);
        glVertex2f(993, 878);
        glVertex2f(1007, 877);
        glVertex2f(1007, 858);
    glEnd();

    // Left Picture Three
    glColor3f(134.0f / 255.0f, 143.0f / 255.0f, 114.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(993, 878);
        glVertex2f(1007, 877);
        glVertex2f(1009, 905);
        glVertex2f(993, 905);
        glVertex2f(993, 878);
    glEnd();

    // Left Picture Four
    glColor3f(143.0f / 255.0f, 150.0f / 255.0f, 161.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(1007, 905);
        glVertex2f(993, 905);
        glVertex2f(995, 935);
        glVertex2f(1008, 931);
        glVertex2f(1007, 905);
    glEnd();

    // Left Picture Five
    glColor4f(0.992, 0.384, 0.537, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(995, 964);
        glVertex2f(1022, 958);
        glVertex2f(1022, 1038);
        glVertex2f(996, 1041);
        glVertex2f(995, 964);
    glEnd();

    // Left Picture Six
    glColor4f(0.451, 0.565, 0.651, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(1006, 1081);
        glVertex2f(1024, 1073);
        glVertex2f(1018, 1032);
        glVertex2f(1017, 961);
        glVertex2f(1006, 966);
        glVertex2f(1001, 988);
        glVertex2f(1001, 1041);
        glVertex2f(1006, 1081);
    glEnd();


    // Left Picture Seven
    glColor4f(0.020, 0.035, 0.071, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(1003, 1083);
        glVertex2f(1019, 1075);
        glVertex2f(1019, 1114);
        glVertex2f(1004, 1125);
        glVertex2f(1003, 1083);
    glEnd();

    // Left Picture Eight
    glColor3f(138.0f / 255.0f, 143.0f / 255.0f, 143.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(1004, 1126);
        glVertex2f(1019, 1115);
        glVertex2f(1020, 1135);
        glVertex2f(1004, 1149);
        glVertex2f(1004, 1126);
    glEnd();

    // Skinny Piece of Wall Left Side
    glColor4f(0.2824f, 0.3059f, 0.3059f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(1164, 587);
        glVertex2f(1175, 588);
        glVertex2f(1186, 1132);
        glVertex2f(1176, 1150);
        glVertex2f(1164, 587);
    glEnd();

    // Skinny Bottom Left Side
    glColor4f(0.5843f, 0.5490f, 0.4824f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1176, 1150);
        glVertex2f(1186, 1132);
        glVertex2f(1186, 1151);
        glVertex2f(1176, 1169);
        glVertex2f(1176, 1150);
    glEnd();

    // Left Side Far Door Wall
    glColor4f(0.0353f, 0.0627f, 0.1020f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1177, 651);
        glVertex2f(1195, 678);
        glVertex2f(1202, 1094);
        glVertex2f(1284, 1094);
        glVertex2f(1284, 1110);
        glVertex2f(1186, 1125);
        glVertex2f(1177, 651);
    glEnd();

    // Sprinkler Middle Bottom (Above Middle Door)
    // Using the specific RGBA color: 40, 60, 67, 255
    glColor3f(40.0f / 255.0f, 60.0f / 255.0f, 67.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(1176, 648);
        glVertex2f(1539, 651);
        glVertex2f(1508, 680);
        glVertex2f(1195, 678);
        glVertex2f(1176, 648);
    glEnd();


    // Box Middle Bottom
    glColor4f(0.4941f, 0.4824f, 0.4549f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1264, 656);
        glVertex2f(1458, 658);
        glVertex2f(1448, 671);
        glVertex2f(1268, 669);
        glVertex2f(1264, 656);
    glEnd();

    // Top Wall Part Facing You With Vent
    glColor4f(0.2824f, 0.3059f, 0.3059f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(1176, 648);
        glVertex2f(1175, 589);
        glVertex2f(1540, 592);
        glVertex2f(1539, 652);
        glVertex2f(1176, 648);
    glEnd();

    // Vent
    glColor4f(0.3137f, 0.3412f, 0.3765f, 1.0f);  // Red, Green, Blue, Alpha
    glBegin(GL_POLYGON);
        glVertex2f(1290, 606);
        glVertex2f(1396, 606);
        glVertex2f(1397, 611);
        glVertex2f(1435, 611);
        glVertex2f(1435, 638);
        glVertex2f(1290, 639);
        glVertex2f(1290, 606);
    glEnd();

    // Left Inner Vent
    glColor4f(0.0588f, 0.1137f, 0.1490f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(1296, 612);
        glVertex2f(1360, 612);
        glVertex2f(1360, 636);
        glVertex2f(1296, 635);
        glVertex2f(1296, 612);
    glEnd();

    // Right Inner Vent
    glColor4f(0.0588f, 0.1137f, 0.1490f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1365, 612);
        glVertex2f(1430, 612);
        glVertex2f(1429, 636);
        glVertex2f(1365, 636);
        glVertex2f(1365, 612);
    glEnd();



    // Exit Sign
    glColor4f(0.937, 0.055, 0.310, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(1397, 611);
        glVertex2f(1459, 610);
        glVertex2f(1459, 572);
        glVertex2f(1396, 573);
        glVertex2f(1396, 611);
    glEnd();

    // Middle Door Wall
    glColor4f(0.280, 0.290, 0.300, 1.0); 
    glBegin(GL_POLYGON);
        glVertex2f(1195, 678);
        glVertex2f(1202, 1094);
        glVertex2f(1284, 1094);
        glVertex2f(1281, 738);
        glVertex2f(1429, 738);
        glVertex2f(1429, 1094);
        glVertex2f(1504, 1093);
        glVertex2f(1508, 680);
        glVertex2f(1195, 678);
    glEnd();

    // The Middle Door
    glColor4f(0.0, 0.027, 0.090, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(1284, 1105);
        glVertex2f(1429, 1103);
        glVertex2f(1429, 738);
        glVertex2f(1281, 738);
        glVertex2f(1284, 1105);
    glEnd();

    // Middle Wall Right Bottom
    glColor4f(0.0039f, 0.0196f, 0.0627f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1429, 1094);
        glVertex2f(1429, 1105);
        glVertex2f(1510, 1117);
        glVertex2f(1510, 1097);
        glVertex2f(1504, 1093);
        glVertex2f(1429, 1094);
    glEnd();


    // Far Right Wall Dark Part
    glColor4f(0.2824f, 0.3059f, 0.3059f, 1.0f);  //color matched with back wall vent piece
    glBegin(GL_POLYGON);
        glVertex2f(1510, 1117);
        glVertex2f(1510, 1097);
        glVertex2f(1504, 1093);
        glVertex2f(1508, 680);
        glVertex2f(1539, 651);
        glVertex2f(1540, 592);
        glVertex2f(1554, 592);
        glVertex2f(1601, 535);
        glVertex2f(1601, 575);
        glVertex2f(1584, 653);
        glVertex2f(1582, 772);
        glVertex2f(1530, 789);
        glVertex2f(1516, 794);
        glVertex2f(1514, 1114);
        glVertex2f(1510, 1114);
        glVertex2f(1510, 1117);
    glEnd();

    //------------------------
    //group these 3 together to be adjusted later for lighting
    // Far Right Wall Light Part
    glColor4f(0.749, 0.753, 0.722, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(1601, 575);
        glVertex2f(1584, 653);
        glVertex2f(1582, 772);
        glVertex2f(1597, 774);
        glVertex2f(1601, 575);
    glEnd();

    // Far Right Wall Door Reflection
    glColor4f(0.749, 0.753, 0.722, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(1530, 789);
        glVertex2f(1597, 774);
        glVertex2f(1593, 1080);
        glVertex2f(1529, 1082);
        glVertex2f(1530, 789);
    glEnd();


    // Far right wall Bottom Wall lower part (not the trim)
    glColor4f(0.749, 0.753, 0.722, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(1529, 1082);
        glVertex2f(1529, 1120);
        glVertex2f(1591, 1196);
        glVertex2f(1593, 1080);
        glVertex2f(1529, 1082);
    glEnd();
    //-----------------------
    // Far Right Wall Bottom
    glColor4f(0.5843f, 0.5490f, 0.4824f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1529, 1120);
        glVertex2f(1591, 1196);
        glVertex2f(1591, 1213);
        glVertex2f(1529, 1137);
        glVertex2f(1529, 1120);
    glEnd();

    // Far Right Door
    glColor4f(0.400, 0.663, 0.773, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(1514, 1114);
        glVertex2f(1529, 1131);
        glVertex2f(1530, 789);
        glVertex2f(1516, 794);
        glVertex2f(1514, 1114);
    glEnd();

    // Far Right Pillar Side
    glColor4f(0.6118f, 0.6196f, 0.5765f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1590, 1264);
        glVertex2f(1602, 474);
        glVertex2f(1627, 437);
        glVertex2f(1615, 1302);
        glVertex2f(1590, 1264);
    glEnd();

    // Far Right Pillar Side Bottom
    glColor4f(0.3333f, 0.3725f, 0.3765f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(1615, 1302);
        glVertex2f(1590, 1264);
        glVertex2f(1590, 1293);
        glVertex2f(1615, 1331);
        glVertex2f(1615, 1302);
    glEnd();

    // Far Right Pillar Front Bottom
    glColor4f(0.0118f, 0.0118f, 0.0039f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1615, 1331);
        glVertex2f(1615, 1302);
        glVertex2f(1675, 1302);
        glVertex2f(1675, 1331);
        glVertex2f(1615, 1331);
    glEnd();


    // Far Right Pillar Front
    glColor4f(0.3882f, 0.3882f, 0.3490f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(1615, 1302);
        glVertex2f(1675, 1302);
        glVertex2f(1688, 437);
        glVertex2f(1627, 437);
        glVertex2f(1615, 1302);
    glEnd();

    // Right Door Wall
    glColor4f(0.6941f, 0.6667f, 0.6039f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1675, 1302);
        glVertex2f(1688, 437);
        glVertex2f(2094, 0);
        glVertex2f(2134, 0);
        glVertex2f(2069, 1788);
        glVertex2f(1984, 1686);
        glVertex2f(2017, 623);
        glVertex2f(1860, 675);
        glVertex2f(1839, 1509);
        glVertex2f(1675, 1302);
    glEnd();

    // Right Door Wall Bottom Pt 2
    glColor4f(0.1961f, 0.1569f, 0.1098f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(2069, 1788);
        glVertex2f(1984, 1686);
        glVertex2f(1983, 1739);
        glVertex2f(2068, 1843);
        glVertex2f(2069, 1788);
    glEnd();


    // Close Right Pillar Side
    glColor4f(0.4549f, 0.4314f, 0.3843f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(2134, 0);
        glVertex2f(2063, 1958);
        glVertex2f(2187, 2141);
        glVertex2f(2285, 2141);
        glVertex2f(2386, 0);
        glVertex2f(2134, 0);
    glEnd();

    // Close Right Pillar
    glColor4f(0.8314f, 0.8000f, 0.7098f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(2285, 2141);
        glVertex2f(2386, 0);
        glVertex2f(2591, 0);
        glVertex2f(2466, 2141);
        glVertex2f(2285, 2141);
    glEnd();

    // Close Right Pillar Bottom
    glColor4f(0.2196f, 0.1843f, 0.1255f, 1.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(2063, 1958);
        glVertex2f(2187, 2141);
        glVertex2f(2126, 2141);
        glVertex2f(2055, 2018);
        glVertex2f(2056, 1962);
        glVertex2f(2063, 1958);
    glEnd();


    // Right Door Frame
    glColor4f(0.5451f, 0.5333f, 0.5059f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(1975, 1733);
        glVertex2f(1982, 1739);
        glVertex2f(2017, 623);
        glVertex2f(1860, 675);
        glVertex2f(1839, 1550);
        glVertex2f(1845, 1553);
        glVertex2f(1865, 688);
        glVertex2f(2008, 647);
        glVertex2f(1975, 1733);
    glEnd();

    // Right Door Frame Inner Part
    glColor4f(0.2392f, 0.2510f, 0.2235f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(1845, 1553); // BL
        glVertex2f(1865, 688);
        glVertex2f(1891, 696);
        glVertex2f(1869, 1552);
        glVertex2f(1848, 1557);
        glVertex2f(1845, 1553);

    glEnd();


    // Right Door Frame Inner Part Pt 2
    glColor4f(0.1451f, 0.1529f, 0.1490f, 1.0f); 
    glBegin(GL_POLYGON);

        glVertex2f(1865, 688);
        glVertex2f(1891, 696);
        glVertex2f(2008, 662);
        glVertex2f(2008, 647);
        glVertex2f(1865, 688);

    glEnd();

    // Right Door
    glColor4f(0.1882f, 0.1961f, 0.1843f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(1979, 1614);
        glVertex2f(1912, 1537);
        glVertex2f(1933, 698);
        glVertex2f(2008, 680);
        glVertex2f(1979, 1614);
    glEnd();

    // Right Door Box
    glColor4f(0.2382f, 0.2461f, 0.2343f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(2006, 741);
        glVertex2f(1958, 749);
        glVertex2f(1944, 1173);
        glVertex2f(1992, 1193);
        glVertex2f(2006, 741);
    glEnd();


    // First shape: Right Door Bottom Box
    glColor4f(0.2382f, 0.2461f, 0.2343f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(1989, 1276);
        glVertex2f(1942, 1251);
        glVertex2f(1937, 1481);
        glVertex2f(1982, 1524);
    glEnd();

    // Second shape: Right Door Bottom
    glColor4f(0.231, 0.220, 0.192, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(1912, 1553);
        glVertex2f(1978, 1628);
        glVertex2f(1979, 1613);
        glVertex2f(1912, 1540);
    glEnd();

    // Right Door Floor Sliver Thingy
    glColor4f(0.4941f, 0.4824f, 0.4549f, 1.0f);  
    glBegin(GL_POLYGON);
        glVertex2f(1912, 1553);
        glVertex2f(1900, 1559);
        glVertex2f(1977, 1653);
        glVertex2f(1977, 1627);
        glVertex2f(1912, 1553);
    glEnd();

    // Right Door Wall Bottom
    // Using the specific RGBA color: 54, 50, 41, 255
    glColor3f(54.0f / 255.0f, 50.0f / 255.0f, 41.0f / 255.0f);
    glBegin(GL_POLYGON);
        glVertex2f(1675, 1302);
        glVertex2f(1675, 1331);
        glVertex2f(1838, 1546);
        glVertex2f(1839, 1509);
        glVertex2f(1675, 1302);
    glEnd();

    // Right Picture 1
    glColor3f(16.0f / 255.0f, 24.0f / 255.0f, 18.0f / 255.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1829, 814);
        glVertex2f(1826, 901);
        glVertex2f(1840, 902);
        glVertex2f(1841, 857);
        glVertex2f(1855, 857);
        glVertex2f(1857, 813);
        glVertex2f(1829, 814);
    glEnd();

    // Right Picture 2
    glColor3f(160.0f / 255.0f, 160.0f / 255.0f, 160.0f / 255.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1840, 902);
        glVertex2f(1841, 857);
        glVertex2f(1855, 857);
        glVertex2f(1854, 903);
        glVertex2f(1840, 902);
    glEnd();

    // Room Number
    glColor3f(14.0f / 255.0f, 24.0f / 255.0f, 26.0f / 255.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1830, 904);
        glVertex2f(1831, 928);
        glVertex2f(1847, 933);
        glVertex2f(1847, 905);
        glVertex2f(1830, 904);
    glEnd();

    // Right Back Picture
    glColor3f(20.0f / 255.0f, 17.0f / 255.0f, 36.0f / 255.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1821, 955);
        glVertex2f(1845, 962);
        glVertex2f(1846, 1119);
        glVertex2f(1818, 1106);
        glVertex2f(1821, 955);
    glEnd();

    // Right Blue Picture
    glColor3f(139.0f / 255.0f, 158.0f / 255.0f, 170.0f / 255.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1819, 953);
        glVertex2f(1819, 1062);
        glVertex2f(1832, 1072);
        glVertex2f(1840, 1020);
        glVertex2f(1841, 959);
        glVertex2f(1819, 953);
    glEnd();

    // Right Back Picture
    glColor3f(163.0f / 255.0f, 162.0f / 255.0f, 164.0f / 255.0f); 
    glBegin(GL_POLYGON);
        glVertex2f(1818, 1106);
        glVertex2f(1816, 1127);
        glVertex2f(1846, 1142);
        glVertex2f(1846, 1119);
        glVertex2f(1818, 1106);
    glEnd();



    
    glFlush();  // Render the shapes

}
void displayCombined() {
    glClear(GL_COLOR_BUFFER_BIT);

    renderShapes();
    drawBackdoor();

    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(2855, 2141);
    glutCreateWindow("OpenGL Rendering");

    GLenum err = glewInit();
    if (err != GLEW_OK) {
        std::cerr << "Error initializing GLEW: " << glewGetErrorString(err) << std::endl;
        return -1;
    }

    init();
    loadTexture("backdoor.png", 0);

    glutDisplayFunc(displayCombined);

    glutMainLoop();

    return 0;
}