#include <GL/glut.h>
#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

void renderLines() {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear the screen

    glLineWidth(2.5f);  // Set line width

    glBegin(GL_LINES);
    //g++ project.cpp -o app -lGL -lGLU -lglut

    
    // Far Left Pillar
    glVertex2f(614, 2141); glVertex2f(508, 0); 
    glVertex2f(508, 0); glVertex2f(724, 0);
    glVertex2f(724, 0); glVertex2f(811, 2141); 
    glVertex2f(811, 2141); glVertex2f(614, 2141);

    // Far Left Pillar Right Square
    glVertex2f(811, 2141); glVertex2f(724, 0);
    glVertex2f(724, 0); glVertex2f(878, 0);
    glVertex2f(878, 0); glVertex2f(943, 1999);
    glVertex2f(943, 1999); glVertex2f(894, 2141);
    glVertex2f(894, 2141); glVertex2f(811, 2141);



    // Far Left Pillar Bottom
    glVertex2f(894, 2141); glVertex2f(943, 1999); 
    glVertex2f(943, 1999); glVertex2f(951, 2004);
    glVertex2f(951, 2004); glVertex2f(951, 2075); 
    glVertex2f(951, 2075); glVertex2f(925, 2141);
    glVertex2f(925, 2141); glVertex2f(894, 2141);

    

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
    glVertex2f(1164, 1310); glVertex2f(1164, 1339);
    glVertex2f(1164, 1339);glVertex2f(1178, 1301);
    glVertex2f(1178, 1301); glVertex2f(1178, 1274);
    glVertex2f(1178, 1274); glVertex2f(1164, 1310);

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

    // Skinny Piece of Wall Left Side
    glVertex2f(1165, 588); glVertex2f(1175, 588);
    glVertex2f(1175, 588); glVertex2f(1186, 1132);
    glVertex2f(1186, 1132); glVertex2f(1176, 1150); 
    glVertex2f(1176, 1150); glVertex2f(1165, 588);

    // Skinny Bottom Left Side
    glVertex2f(1176, 1150); glVertex2f(1186, 1132);
    glVertex2f(1186, 1132); glVertex2f(1186, 1151);
    glVertex2f(1186, 1151); glVertex2f(1176, 1169);
    glVertex2f(1176, 1169); glVertex2f(1176, 1150);
    
    //Left Side Far Door Wall
    glVertex2f(1177, 651); glVertex2f(1195, 678);
    glVertex2f(1195, 678); glVertex2f(1202, 1094);
    glVertex2f(1202, 1094); glVertex2f(1284, 1094); 
    glVertex2f(1284, 1094); glVertex2f(1284, 1110); 
    glVertex2f(1284, 1110); glVertex2f(1186, 1125);
    glVertex2f(1186, 1125); glVertex2f(1177, 651);

    //Sprinkeler Middle Bottom (Above Middle Door)
    glVertex2f(1176, 648); glVertex2f(1539, 651);
    glVertex2f(1539, 651); glVertex2f(1508, 680);
    glVertex2f(1508, 680); glVertex2f(1195, 678);
    glVertex2f(1195, 678); glVertex2f(1176, 648);

    
    // Box Middle Bottom
    glVertex2f(1264, 656); glVertex2f(1458, 658);
    glVertex2f(1458, 658); glVertex2f(1448, 671);
    glVertex2f(1448, 671); glVertex2f(1268, 669);
    glVertex2f(1268, 669); glVertex2f(1264, 656);

    // Top Wall Part Facing You With Vent
    glVertex2f(1176, 648); glVertex2f(1175, 589); 
    glVertex2f(1175, 589); glVertex2f(1540, 592);
    glVertex2f(1540, 592); glVertex2f(1539, 652);
    glVertex2f(1539, 652); glVertex2f(1176, 648);

    // Vent
    glVertex2f(1290, 606); glVertex2f(1396, 606);
    glVertex2f(1396, 606); glVertex2f(1397, 611);
    glVertex2f(1397, 611); glVertex2f(1435, 611); 
    glVertex2f(1435, 611); glVertex2f(1435, 638);
    glVertex2f(1435, 638); glVertex2f(1290, 639);
    glVertex2f(1290, 639); glVertex2f(1290, 606);

    // Left Inner Vent
    glVertex2f(1296, 612); glVertex2f(1360, 612);
    glVertex2f(1360, 612); glVertex2f(1360, 636);
    glVertex2f(1360, 636); glVertex2f(1296, 635);
    glVertex2f(1296, 635); glVertex2f(1296, 612);

    // Right Inner Vent
    glVertex2f(1365, 612); glVertex2f(1430, 612);
    glVertex2f(1430, 612); glVertex2f(1429, 636);
    glVertex2f(1429, 636); glVertex2f(1365, 636);
    glVertex2f(1365, 636); glVertex2f(1365, 612);

    
    // Exit Sign
    glVertex2f(1397, 611); glVertex2f(1459, 610);
    glVertex2f(1459, 610); glVertex2f(1459, 572);
    glVertex2f(1459, 572); glVertex2f(1396, 573);
    glVertex2f(1396, 573); glVertex2f(1396, 611);

    // THE MIDDLE DOOR 
    glVertex2f(1284, 1105); glVertex2f(1429, 1103);
    glVertex2f(1429, 1103); glVertex2f(1429, 738);
    glVertex2f(1429, 738); glVertex2f(1281, 738);
    glVertex2f(1281, 738); glVertex2f(1284, 1105);

    // Door Window
    glVertex2f(1303, 1066); glVertex2f(1407, 1066);
    glVertex2f(1407, 1066); glVertex2f(1406, 762);
    glVertex2f(1406, 762); glVertex2f(1401, 762);
    glVertex2f(1401, 762); glVertex2f(1401, 768);
    glVertex2f(1401, 768); glVertex2f(1356, 768);
    glVertex2f(1356, 768); glVertex2f(1356, 761);
    glVertex2f(1356, 761); glVertex2f(1300, 761);
    glVertex2f(1300, 761); glVertex2f(1303, 1066);

    // Middle Wall Right Bottom
    glVertex2f(1429, 1094); glVertex2f(1429, 1105);
    glVertex2f(1429, 1105); glVertex2f(1510, 1117);  
    glVertex2f(1510, 1117); glVertex2f(1510, 1097); 
    glVertex2f(1510, 1097); glVertex2f(1504, 1093);  
    glVertex2f(1504, 1093); glVertex2f(1429, 1094);  

    
    // Middle Door Wall
    glVertex2f(1195, 678); glVertex2f(1202, 1094);
    glVertex2f(1202, 1094); glVertex2f(1284, 1094); 
    glVertex2f(1284, 1094); glVertex2f(1281, 738);
    glVertex2f(1281, 738); glVertex2f(1429, 738);
    glVertex2f(1429, 738); glVertex2f(1429, 1094);
    glVertex2f(1429, 1094); glVertex2f(1504, 1093); 
    glVertex2f(1504, 1093);  glVertex2f(1508, 680);
    glVertex2f(1508, 680); glVertex2f(1195, 678);

    // Far Right Wall Dark Part
    glVertex2f(1510, 1117); glVertex2f(1510, 1097); 
    glVertex2f(1510, 1097); glVertex2f(1504, 1093);  
    glVertex2f(1504, 1093); glVertex2f(1508, 680);
    glVertex2f(1508, 680); glVertex2f(1539, 651);
    glVertex2f(1539, 651); glVertex2f(1540, 592);
    glVertex2f(1540, 592); glVertex2f(1554, 592); 
    glVertex2f(1554, 592); glVertex2f(1601, 535); 
    glVertex2f(1601, 535); glVertex2f(1601, 575); 
    glVertex2f(1601, 575); glVertex2f(1584, 653); 
    glVertex2f(1584, 653); glVertex2f(1582, 772); 
    glVertex2f(1582, 772); glVertex2f(1530, 789); 
    glVertex2f(1530, 789); glVertex2f(1516, 794); 
    glVertex2f(1516, 794); glVertex2f(1514, 1114); 
    glVertex2f(1514, 1114); glVertex2f(1510, 1114);
    glVertex2f(1510, 1114); glVertex2f(1510, 1117); 

    // Far Right Wall Light Part
    glVertex2f(1601, 575); glVertex2f(1584, 653); 
    glVertex2f(1584, 653); glVertex2f(1582, 772);
    glVertex2f(1582, 772); glVertex2f(1597, 774);
    glVertex2f(1597, 774); glVertex2f(1601, 575);

    //Far Right Wall Door Reflection
    glVertex2f(1530, 789); glVertex2f(1597, 774);
    glVertex2f(1597, 774); glVertex2f(1593, 1080);
    glVertex2f(1593, 1080); glVertex2f(1529, 1082);
    glVertex2f(1529, 1082); glVertex2f(1530, 789);

    
    //Far right wall Bottom Wall Part
    glVertex2f(1529, 1082); glVertex2f(1529, 1120); 
    glVertex2f(1529, 1120); glVertex2f(1591, 1196); 
    glVertex2f(1591, 1196); glVertex2f(1593, 1080);
    glVertex2f(1593, 1080); glVertex2f(1529, 1082);
    
    //Far Right Wall Bottom 
    glVertex2f(1529, 1120); glVertex2f(1591, 1196);
    glVertex2f(1591, 1196); glVertex2f(1591, 1213);
    glVertex2f(1591, 1213); glVertex2f(1529, 1137);
    glVertex2f(1529, 1137); glVertex2f(1529, 1120);

    // Far Right Door
    glVertex2f(1514, 1114); glVertex2f(1529, 1131);
    glVertex2f(1529, 1131); glVertex2f(1530, 789);
    glVertex2f(1530, 789); glVertex2f(1516, 794); 
    glVertex2f(1516, 794); glVertex2f(1514, 1114); 

    // Far Right Pillar Side
    glVertex2f(1590, 1264); glVertex2f(1602, 474); 
    glVertex2f(1602, 474); glVertex2f(1627, 437); 
    glVertex2f(1627, 437); glVertex2f(1615, 1302); 
    glVertex2f(1615, 1302); glVertex2f(1590, 1264);

    // Far Right Pillar Side Bottom
    glVertex2f(1615, 1302); glVertex2f(1590, 1264);
    glVertex2f(1590, 1264); glVertex2f(1590, 1293);
    glVertex2f(1590, 1293); glVertex2f(1615, 1331);
    glVertex2f(1615, 1331); glVertex2f(1615, 1302);

    // Far Right Pillar Front Bottom
    glVertex2f(1615, 1331); glVertex2f(1615, 1302);
    glVertex2f(1615, 1302); glVertex2f(1675, 1302);
    glVertex2f(1675, 1302); glVertex2f(1675, 1331); 
    glVertex2f(1675, 1331); glVertex2f(1615, 1331);
    
    
    //Far Right Pillar Side
    glVertex2f(1615, 1302); glVertex2f(1675, 1302);
    glVertex2f(1675, 1302); glVertex2f(1688, 437);
    glVertex2f(1688, 437); glVertex2f(1627, 437);
    glVertex2f(1627, 437); glVertex2f(1615, 1302);

    //Right Door Wall
    glVertex2f(1675, 1302); glVertex2f(1688, 437);
    glVertex2f(1688, 437); glVertex2f(2094, 0);
    glVertex2f(2094, 0); glVertex2f(2134, 0);
    glVertex2f(2134, 0); glVertex2f(2069, 1788);
    glVertex2f(2069, 1788); glVertex2f(1984, 1686);
    glVertex2f(1984, 1686); glVertex2f(2017, 623);
    glVertex2f(2017, 623);  glVertex2f(1860, 675);
    glVertex2f(1860, 675); glVertex2f(1839, 1509);
    glVertex2f(1839, 1509); glVertex2f(1675, 1302);
    
    //Right Door Wall Bottom
    glVertex2f(1675, 1302); glVertex2f(1675, 1331);
    glVertex2f(1675, 1331); glVertex2f(1838, 1546);
    glVertex2f(1838, 1546); glVertex2f(1839, 1509);
    glVertex2f(1839, 1509); glVertex2f(1675, 1302);

    //Right Door Wall Bottom Pt 2
    glVertex2f(2069, 1788); glVertex2f(1984, 1686);
    glVertex2f(1984, 1686); glVertex2f(1983, 1739);
    glVertex2f(1983, 1739); glVertex2f(2068, 1843);
    glVertex2f(2068, 1843); glVertex2f(2069, 1788);

    

    //Close Right Pillar Side
    glVertex2f(2134, 0); glVertex2f(2063, 1958);
    glVertex2f(2063, 1958); glVertex2f(2063, 1958);
    glVertex2f(2063, 1958); glVertex2f(2187, 2141);
    glVertex2f(2187, 2141); glVertex2f(2285, 2141);
    glVertex2f(2285, 2141); glVertex2f(2386, 0);
    glVertex2f(2386, 0); glVertex2f(2134, 0);

    //Close Right Pillar Front
    glVertex2f(2285, 2141); glVertex2f(2386, 0);
    glVertex2f(2386, 0); glVertex2f(2591, 0);
    glVertex2f(2591, 0); glVertex2f(2466, 2141);
    glVertex2f(2466, 2141); glVertex2f(2285, 2141);

    //Close Right Pillar Bottom
    glVertex2f(2063, 1958); glVertex2f(2187, 2141);
    glVertex2f(2187, 2141); glVertex2f(2126, 2141);
    glVertex2f(2126, 2141); glVertex2f(2055, 2018);
    glVertex2f(2055, 2018); glVertex2f(2056, 1962);
    glVertex2f(2056, 1962); glVertex2f(2063, 1958);

    //Right Door
    glVertex2f(1979, 1614); glVertex2f(1912, 1537);
    glVertex2f(1912, 1537); glVertex2f(1933, 698);
    glVertex2f(1933, 698); glVertex2f(2008, 680);
    glVertex2f(2008, 680); glVertex2f(1979, 1614);

    
    //Right Door Frame
    glVertex2f(1975, 1733); glVertex2f(1982, 1739);
    glVertex2f(1982, 1739); glVertex2f(2017, 623);
    glVertex2f(2017, 623); glVertex2f(1860, 675);
    glVertex2f(1860, 675); glVertex2f(1839, 1550);
    glVertex2f(1839, 1550); glVertex2f(1845, 1553);
    glVertex2f(1845, 1553); glVertex2f(1865, 688);
    glVertex2f(1865, 688); glVertex2f(2008, 647);
    glVertex2f(2008, 647); glVertex2f(1975, 1733);

    //Right Door Frame Inner Part
    glVertex2f(1845, 1553); glVertex2f(1865, 688);
    glVertex2f(1865, 688); glVertex2f(2008, 647);
    glVertex2f(2008, 647); glVertex2f(2008, 662);
    glVertex2f(2008, 662); glVertex2f(1891, 696);
    glVertex2f(1891, 696); glVertex2f(1869, 1552);
    glVertex2f(1869, 1552); glVertex2f(1848, 1557);
    glVertex2f(1848, 1557); glVertex2f(1845, 1553);

    //Right Door Box
    glVertex2f(2006, 741); glVertex2f(1958, 749);
    glVertex2f(1958, 749); glVertex2f(1944, 1173);
    glVertex2f(1944, 1173); glVertex2f(1992, 1193);
    glVertex2f(1992, 1193); glVertex2f(2006, 741);

    //Right Door Bottom Box
    glVertex2f(1989, 1276); glVertex2f(1942, 1251);
    glVertex2f(1942, 1251); glVertex2f(1937, 1481);
    glVertex2f(1937, 1481); glVertex2f(1982, 1524);
    glVertex2f(1982, 1524); glVertex2f(1989, 1276);

    //Right Door Bottom 
    glVertex2f(1912, 1553); glVertex2f(1978, 1628);
    glVertex2f(1978, 1628); glVertex2f(1979, 1613);
    glVertex2f(1979, 1613); glVertex2f(1912, 1540);
    glVertex2f(1912, 1540); glVertex2f(1912, 1553);
    

    //Right Door Floor Sliver Thingy
    glVertex2f(1912, 1553); glVertex2f(1900, 1559);
    glVertex2f(1900, 1559); glVertex2f(1977, 1653);
    glVertex2f(1977, 1653); glVertex2f(1977, 1627);
    glVertex2f(1977, 1627); glVertex2f(1912, 1553);
     

    

    glEnd();

    glFlush();  // Render the lines
}

void renderShapes() {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear the screen

    glLineWidth(2.5f);  // Set line width for polygon edges

    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Helper function to generate random float between 0 and 1
    auto randomColor = []() -> float {
        return static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
    };

    // Far Left Pillar
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(614, 2141);
        glVertex2f(508, 0);
        glVertex2f(724, 0);
        glVertex2f(811, 2141);
        glVertex2f(614, 2141);
    glEnd();

    // Far Left Pillar Right Square
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(811, 2141);
        glVertex2f(724, 0);
        glVertex2f(878, 0);
        glVertex2f(943, 1999);
        glVertex2f(894, 2141);
        glVertex2f(811, 2141);
    glEnd();

    // Far Left Pillar Bottom
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(894, 2141);
        glVertex2f(943, 1999);
        glVertex2f(951, 2004);
        glVertex2f(951, 2075);
        glVertex2f(925, 2141);
        glVertex2f(894, 2141);
    glEnd();


    // Left Door Wall
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(898, 622);
        glVertex2f(880, 65);
        glVertex2f(1084, 431);
        glVertex2f(1104, 1309);
        glVertex2f(1009, 1519);
        glVertex2f(988, 671);
        glVertex2f(898, 622);
    glEnd();

    // Left Door Wall Bottom
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1104, 1309);
        glVertex2f(1009, 1519);
        glVertex2f(1009, 1561);
        glVertex2f(1104, 1339);
        glVertex2f(1104, 1309);
    glEnd();

    // Left Middle Pillar Front Square
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1084, 431);
        glVertex2f(1104, 1309);
        glVertex2f(1163, 1309);
        glVertex2f(1144, 431);
        glVertex2f(1084, 431);
    glEnd();


    // Left Middle Pillar Side Square
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1144, 431);
        glVertex2f(1162, 470);
        glVertex2f(1178, 1277);
        glVertex2f(1163, 1309);
        glVertex2f(1144, 431);
    glEnd();

    // Left Middle Pillar Bottom Front
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1104, 1339);
        glVertex2f(1104, 1309);
        glVertex2f(1164, 1309);
        glVertex2f(1164, 1339);
        glVertex2f(1104, 1339);
    glEnd();

    // Left Middle Pillar Bottom Side
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1164, 1310);
        glVertex2f(1164, 1339);
        glVertex2f(1178, 1301);
        glVertex2f(1178, 1274);
        glVertex2f(1164, 1310);
    glEnd();

    // Left Door Frame Part
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(899, 641);
        glVertex2f(984, 685);
        glVertex2f(1004, 1575);
        glVertex2f(977, 1575);
        glVertex2f(955, 692);
        glVertex2f(900, 668);
        glVertex2f(899, 641);
    glEnd();

    // Left Door Frame Part (Second)
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
        glVertex2f(1004, 1575);
        glVertex2f(983, 686);
        glVertex2f(899, 641);
        glVertex2f(898, 622);
        glVertex2f(988, 671);
        glVertex2f(1010, 1566);
        glVertex2f(1004, 1575);
    glEnd();


    // Left Door Stop
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(930, 1610);
        glVertex2f(948, 1577);
        glVertex2f(938, 1572);
        glVertex2f(930, 1581);
        glVertex2f(930, 1610);
    glEnd();

    // Left Door Dark Part
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(900, 669);
        glVertex2f(912, 673);
        glVertex2f(938, 1572);
        glVertex2f(930, 1581);
        glVertex2f(900, 669);
    glEnd();

    // Left Door Handle
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(923, 1154);
        glVertex2f(944, 1154);
        glVertex2f(948, 1147);
        glVertex2f(922, 1147);
        glVertex2f(922, 1130);
        glVertex2f(926, 1130);
        glVertex2f(926, 1138);
        glVertex2f(932, 1138);
        glVertex2f(935, 1141);
        glVertex2f(956, 1141);
        glVertex2f(956, 1152);
        glVertex2f(947, 1165);
        glVertex2f(923, 1165);
        glVertex2f(923, 1154);
    glEnd();


    // Left Picture One
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(991, 813);
        glVertex2f(1007, 813);
        glVertex2f(1007, 858);
        glVertex2f(992, 858);
        glVertex2f(991, 813);
    glEnd();

    // Left Picture Two
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1007, 858);
        glVertex2f(992, 858);
        glVertex2f(993, 878);
        glVertex2f(1007, 877);
        glVertex2f(1007, 858);
    glEnd();

    // Left Picture Three
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(993, 878);
        glVertex2f(1007, 877);
        glVertex2f(1009, 905);
        glVertex2f(993, 905);
        glVertex2f(993, 878);
    glEnd();

    // Left Picture Four
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1007, 905);
        glVertex2f(993, 905);
        glVertex2f(995, 935);
        glVertex2f(1008, 931);
        glVertex2f(1007, 905);
    glEnd();

    // Left Picture Five
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(995, 964);
        glVertex2f(1022, 958);
        glVertex2f(1022, 1038);
        glVertex2f(996, 1041);
        glVertex2f(995, 964);
    glEnd();

    // Left Picture Six
    glColor3f(randomColor(), randomColor(), randomColor());
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
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1003, 1083);
        glVertex2f(1019, 1075);
        glVertex2f(1019, 1114);
        glVertex2f(1004, 1125);
        glVertex2f(1003, 1083);
    glEnd();

    // Left Picture Eight
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1004, 1126);
        glVertex2f(1019, 1115);
        glVertex2f(1020, 1135);
        glVertex2f(1004, 1149);
        glVertex2f(1004, 1126);
    glEnd();

    // Skinny Piece of Wall Left Side
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1165, 588);
        glVertex2f(1175, 588);
        glVertex2f(1186, 1132);
        glVertex2f(1176, 1150);
        glVertex2f(1165, 588);
    glEnd();

    // Skinny Bottom Left Side
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1176, 1150);
        glVertex2f(1186, 1132);
        glVertex2f(1186, 1151);
        glVertex2f(1176, 1169);
        glVertex2f(1176, 1150);
    glEnd();

    // Left Side Far Door Wall
    glColor3f(randomColor(), randomColor(), randomColor());
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
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1176, 648);
        glVertex2f(1539, 651);
        glVertex2f(1508, 680);
        glVertex2f(1195, 678);
        glVertex2f(1176, 648);
    glEnd();


    // Box Middle Bottom
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1264, 656);
        glVertex2f(1458, 658);
        glVertex2f(1448, 671);
        glVertex2f(1268, 669);
        glVertex2f(1264, 656);
    glEnd();

    // Top Wall Part Facing You With Vent
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1176, 648);
        glVertex2f(1175, 589);
        glVertex2f(1540, 592);
        glVertex2f(1539, 652);
        glVertex2f(1176, 648);
    glEnd();

    // Vent
    glColor3f(randomColor(), randomColor(), randomColor());
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
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1296, 612);
        glVertex2f(1360, 612);
        glVertex2f(1360, 636);
        glVertex2f(1296, 635);
        glVertex2f(1296, 612);
    glEnd();

    // Right Inner Vent
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1365, 612);
        glVertex2f(1430, 612);
        glVertex2f(1429, 636);
        glVertex2f(1365, 636);
        glVertex2f(1365, 612);
    glEnd();


    // Exit Sign
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1397, 611);
        glVertex2f(1459, 610);
        glVertex2f(1459, 572);
        glVertex2f(1396, 573);
        glVertex2f(1396, 611);
    glEnd();

    // The Middle Door
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1284, 1105);
        glVertex2f(1429, 1103);
        glVertex2f(1429, 738);
        glVertex2f(1281, 738);
        glVertex2f(1284, 1105);
    glEnd();

    // Door Window
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1303, 1066);
        glVertex2f(1407, 1066);
        glVertex2f(1406, 762);
        glVertex2f(1401, 762);
        glVertex2f(1401, 768);
        glVertex2f(1356, 768);
        glVertex2f(1356, 761);
        glVertex2f(1300, 761);
        glVertex2f(1303, 1066);
    glEnd();

    // Middle Wall Right Bottom
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1429, 1094);
        glVertex2f(1429, 1105);
        glVertex2f(1510, 1117);
        glVertex2f(1510, 1097);
        glVertex2f(1504, 1093);
        glVertex2f(1429, 1094);
    glEnd();


    // Middle Door Wall
    glColor3f(randomColor(), randomColor(), randomColor());
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

    // Far Right Wall Dark Part
    glColor3f(randomColor(), randomColor(), randomColor());
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

    // Far Right Wall Light Part
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1601, 575);
        glVertex2f(1584, 653);
        glVertex2f(1582, 772);
        glVertex2f(1597, 774);
        glVertex2f(1601, 575);
    glEnd();

    // Far Right Wall Door Reflection
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1530, 789);
        glVertex2f(1597, 774);
        glVertex2f(1593, 1080);
        glVertex2f(1529, 1082);
        glVertex2f(1530, 789);
    glEnd();


    // Far right wall Bottom Wall Part
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1529, 1082);
        glVertex2f(1529, 1120);
        glVertex2f(1591, 1196);
        glVertex2f(1593, 1080);
        glVertex2f(1529, 1082);
    glEnd();

    // Far Right Wall Bottom
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1529, 1120);
        glVertex2f(1591, 1196);
        glVertex2f(1591, 1213);
        glVertex2f(1529, 1137);
        glVertex2f(1529, 1120);
    glEnd();

    // Far Right Door
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1514, 1114);
        glVertex2f(1529, 1131);
        glVertex2f(1530, 789);
        glVertex2f(1516, 794);
        glVertex2f(1514, 1114);
    glEnd();

    // Far Right Pillar Side
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1590, 1264);
        glVertex2f(1602, 474);
        glVertex2f(1627, 437);
        glVertex2f(1615, 1302);
        glVertex2f(1590, 1264);
    glEnd();

    // Far Right Pillar Side Bottom
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1615, 1302);
        glVertex2f(1590, 1264);
        glVertex2f(1590, 1293);
        glVertex2f(1615, 1331);
        glVertex2f(1615, 1302);
    glEnd();

    // Far Right Pillar Front Bottom
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1615, 1331);
        glVertex2f(1615, 1302);
        glVertex2f(1675, 1302);
        glVertex2f(1675, 1331);
        glVertex2f(1615, 1331);
    glEnd();


    // Far Right Pillar Side
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1615, 1302);
        glVertex2f(1675, 1302);
        glVertex2f(1688, 437);
        glVertex2f(1627, 437);
        glVertex2f(1615, 1302);
    glEnd();

    // Right Door Wall
    glColor3f(randomColor(), randomColor(), randomColor());
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

    // Right Door Wall Bottom
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1675, 1302);
        glVertex2f(1675, 1331);
        glVertex2f(1838, 1546);
        glVertex2f(1839, 1509);
        glVertex2f(1675, 1302);
    glEnd();

    // Right Door Wall Bottom Pt 2
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(2069, 1788);
        glVertex2f(1984, 1686);
        glVertex2f(1983, 1739);
        glVertex2f(2068, 1843);
        glVertex2f(2069, 1788);
    glEnd();


    // Close Right Pillar Side
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(2134, 0);
        glVertex2f(2063, 1958);
        glVertex2f(2187, 2141);
        glVertex2f(2285, 2141);
        glVertex2f(2386, 0);
        glVertex2f(2134, 0);
    glEnd();

    // Close Right Pillar Front
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(2285, 2141);
        glVertex2f(2386, 0);
        glVertex2f(2591, 0);
        glVertex2f(2466, 2141);
        glVertex2f(2285, 2141);
    glEnd();

    // Close Right Pillar Bottom
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(2063, 1958);
        glVertex2f(2187, 2141);
        glVertex2f(2126, 2141);
        glVertex2f(2055, 2018);
        glVertex2f(2056, 1962);
        glVertex2f(2063, 1958);
    glEnd();

    // Right Door
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1979, 1614);
        glVertex2f(1912, 1537);
        glVertex2f(1933, 698);
        glVertex2f(2008, 680);
        glVertex2f(1979, 1614);
    glEnd();


    // Right Door Frame
    glColor3f(randomColor(), randomColor(), randomColor());
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
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1845, 1553);
        glVertex2f(1865, 688);
        glVertex2f(2008, 647);
        glVertex2f(2008, 662);
        glVertex2f(1891, 696);
        glVertex2f(1869, 1552);
        glVertex2f(1848, 1557);
        glVertex2f(1845, 1553);
    glEnd();

    // Right Door Box
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(2006, 741);
        glVertex2f(1958, 749);
        glVertex2f(1944, 1173);
        glVertex2f(1992, 1193);
        glVertex2f(2006, 741);
    glEnd();


    // First shape: Right Door Bottom Box
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1989, 1276);
        glVertex2f(1942, 1251);
        glVertex2f(1937, 1481);
        glVertex2f(1982, 1524);
    glEnd();

    // Second shape: Right Door Bottom
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1912, 1553);
        glVertex2f(1978, 1628);
        glVertex2f(1979, 1613);
        glVertex2f(1912, 1540);
    glEnd();

    // Right Door Floor Sliver Thingy
    glColor3f(randomColor(), randomColor(), randomColor());
    glBegin(GL_POLYGON);
        glVertex2f(1912, 1553);
        glVertex2f(1900, 1559);
        glVertex2f(1977, 1653);
        glVertex2f(1977, 1627);
        glVertex2f(1912, 1553);
    glEnd();


    glFlush();  // Render the shapes
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

    
    //glutDisplayFunc(renderLines);

    glutDisplayFunc(renderShapes);
    // Enter the main loop
    glutMainLoop();

    return 0;
}
