#include<graphics.h>
int main()
{
    initwindow(10000,10000);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);

    rectangle(200, 160, 600,400);
    floodfill(201,161, GREEN);
    getch();
    return 0;
}
