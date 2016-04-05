/*
ascii paint 2
made by: Shivam Shekhar
*/
#include<windows.h>
#include<stdio.h>
int isautofill=0;
int paintareamap[20][60]=
                        {
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}

                        };
int paintcolormap[20][60]=
                        {
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                            {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15}

                        };
int main()
{
    HANDLE in,out;
    DWORD info;
    CONSOLE_SCREEN_BUFFER_INFO scrinfo;
    INPUT_RECORD input;
    COORD zerozero={0,0},paintareapos={9,2},textpos={25,1};
    CHAR_INFO paintarea[1200];
    int i,j,x,brush=219,brushcol=15,autofillX=0,autofillY=0;
    //
    SetConsoleTitle("Ascii Paint!");
    in=GetStdHandle(STD_INPUT_HANDLE);
    out=GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(in,&scrinfo);
    printpalette();
    printbrushpalette();
    printmenu();
    printborder(62,22,paintareapos,15);
    printtitle();
    while(1)
    {
        SetConsoleMode(in,ENABLE_PROCESSED_INPUT|ENABLE_MOUSE_INPUT);
        ReadConsoleInput(in,&input,1,&info);
        if(input.EventType==MOUSE_EVENT)
        {
            if(input.Event.MouseEvent.dwButtonState==FROM_LEFT_1ST_BUTTON_PRESSED)
            {
                if(input.Event.MouseEvent.dwMousePosition.X==1)
                {
                    switch(input.Event.MouseEvent.dwMousePosition.Y)
                    {
                    case 3:
                        system("cls");
                        for(j=0;j<=15;j++)
                        {
                            for(i=0;i<=15;i++)
                            {
                                x = 16*i + j;
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);
                                if((i==6 && j<4) || (i==0 && j<10))
                                    printf(" ");
                                printf(" %d ",x);
                            }
                            printf("\n");
                        }
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
                        printf("\nEnter value of custom color: ");
                        scanf("%d",&brushcol);
                        system("cls");
                        printpalette();
                        printbrushpalette();
                        printmenu();
                        printborder(62,22,paintareapos,15);
                        updatescreen();
                        printtitle();
                        break;
                    case 4:
                        brushcol=9;
                        break;
                    case 5:
                        brushcol=10;
                        break;
                    case 6:
                        brushcol=11;
                        break;
                    case 7:
                        brushcol=12;
                        break;
                    case 8:
                        brushcol=13;
                        break;
                    case 9:
                        brushcol=14;
                        break;
                    case 10:
                        brushcol=15;
                        break;
                    case 13:
                        brush=219;
                        break;
                    case 14:
                        brush=4;
                        break;
                    case 15:
                        brush=249;
                        break;
                    case 16:
                        brush=35;
                        break;
                    case 17:
                        brush=42;
                        break;
                    case 18:
                        brush=111;
                        break;
                    case 19:
                        brush=0;
                        brushcol=15;
                        break;
                    case 20:
                        system("cls");
                        for(i=0;i<255;i++)
                        {
                            if(i>99)
                            {
                                if(i==100)
                                    printf("\n");
                                printf("%c: %d  ",i,i);
                            }
                            else
                            {
                                if(i==10)
                                printf("  %c: %d     %c: %d", 11,11,12,12);
                                if(i==14)
                                    printf(" ");
                                printf("%c: %d     ",i,i);
                            }
                        }
                        printf("\n\nEnter ASCII value of custom brush: ");
                        scanf("%d",&brush);
                        system("cls");
                        printpalette();
                        printbrushpalette();
                        printmenu();
                        printborder(62,22,paintareapos,15);
                        updatescreen();
                        printtitle();
                        break;
                    }
                }
                else if(input.Event.MouseEvent.dwMousePosition.X<70 && input.Event.MouseEvent.dwMousePosition.X>9 && input.Event.MouseEvent.dwMousePosition.Y<24 && input.Event.MouseEvent.dwMousePosition.Y>2)
                {
                    tempsave();
                    if(isautofill==0)
                    {
                        paintareamap[input.Event.MouseEvent.dwMousePosition.Y-3][input.Event.MouseEvent.dwMousePosition.X-10]=brush;
                        paintcolormap[input.Event.MouseEvent.dwMousePosition.Y-3][input.Event.MouseEvent.dwMousePosition.X-10]=brushcol;
                        updatescreen();
                    }
                    else
                    {
                        autofillY=input.Event.MouseEvent.dwMousePosition.Y-3;
                        autofillX=input.Event.MouseEvent.dwMousePosition.X-10;
                        if(paintcolormap[autofillY][autofillX]!=brushcol || paintareamap[autofillY][autofillX]!=brush)
                        autofill(autofillX,autofillY,brushcol,brush,paintcolormap[autofillY][autofillX],paintareamap[autofillY][autofillX],1);
                    }
                }
                else if(input.Event.MouseEvent.dwMousePosition.Y==1)
                {
                    if(input.Event.MouseEvent.dwMousePosition.X>9 && input.Event.MouseEvent.dwMousePosition.X<14)
                    {
                        saveimage();
                        system("cls");
                        printpalette();
                        printbrushpalette();
                        printmenu();
                        printborder(62,22,paintareapos,15);
                        updatescreen();
                        printtitle();
                    }
                    if(input.Event.MouseEvent.dwMousePosition.X>15 && input.Event.MouseEvent.dwMousePosition.X<20)
                    {
                        loadimage();
                        system("cls");
                        printpalette();
                        printbrushpalette();
                        printmenu();
                        printborder(62,22,paintareapos,15);
                        updatescreen();
                        printtitle();

                    }
                    if(input.Event.MouseEvent.dwMousePosition.X>21 && input.Event.MouseEvent.dwMousePosition.X<27)
                        clear();
                    if(input.Event.MouseEvent.dwMousePosition.X>28 && input.Event.MouseEvent.dwMousePosition.X<33)
                    {
                        help();
                        system("cls");
                        printpalette();
                        printbrushpalette();
                        printmenu();
                        printborder(62,22,paintareapos,15);
                        updatescreen();
                        printtitle();
                    }
                    if(input.Event.MouseEvent.dwMousePosition.X>34 && input.Event.MouseEvent.dwMousePosition.X<43)
                    {
                        if(isautofill==0)
                        {
                            SetConsoleCursorPosition(out,zerozero);
                            printf("                ");
                            SetConsoleCursorPosition(out,zerozero);
                            printf("Autofill: ON");
                            isautofill=1;
                        }
                        else
                        {
                            SetConsoleCursorPosition(out,zerozero);
                            printf("                 ");
                            SetConsoleCursorPosition(out,zerozero);
                            printf("Autofill: OFF");
                            isautofill=0;
                        }
                    }
                    if(input.Event.MouseEvent.dwMousePosition.X>44 && input.Event.MouseEvent.dwMousePosition.X<49)
                    {
                        tempload();
                        system("cls");
                        printpalette();
                        printbrushpalette();
                        printmenu();
                        printborder(62,22,paintareapos,15);
                        updatescreen();
                        printtitle();
                        //undo();
                    }
                    if(input.Event.MouseEvent.dwMousePosition.X>50 && input.Event.MouseEvent.dwMousePosition.X<63)
                    {
                        saveastext();
                        system("cls");
                        printpalette();
                        printbrushpalette();
                        printmenu();
                        printborder(62,22,paintareapos,15);
                        updatescreen();
                        printtitle();
                    }
                }
            }
        }
    }
    getch();
    return 0;
}
//
void printborder(int,int,COORD,int);
void printpalette(void);
void printbrushpalette(void);
void printmenu(void);
void clear(void);
void updatescreen(void);
void saveimage(void);
void loadimage(void);
void printtitle(void);
void help(void);
void autofill(int,int,int,int,int,int,int);
void tempsave(void);
void tempload(void);
//
void printborder(int _length,int _width,COORD _coordinates,int _color)
{
    int i,j;
    COORD zerozero={0,0},bordersz;
    SMALL_RECT _rect;
    CHAR_INFO _border[_length*_width];
    bordersz.X=_length;
    bordersz.Y=_width;
    _rect.Left=_coordinates.X;
    _rect.Top=_coordinates.Y;
    _rect.Right=_rect.Left+_length;
    _rect.Bottom=_rect.Top+_width;
    for(i=0;i<_width;i++)
    {
        for(j=0;j<_length;j++)
        {
            if(i==0 || i==_width-1)
            {
                _border[j+_length*i].Char.AsciiChar=205;
                _border[j+_length*i].Attributes=_color;
                continue;
            }
            if(j==0 || j==_length-1)
            {
                _border[j+_length*i].Char.AsciiChar=186;
                _border[j+_length*i].Attributes=_color;
                continue;
            }
            _border[j+_length*i].Char.AsciiChar=' ';
            _border[j+_length*i].Attributes=_color;
        }
    }
    _border[0].Char.AsciiChar=201;
    _border[_length-1].Char.AsciiChar=187;
    _border[_length*_width - 1].Char.AsciiChar=188;
    _border[_length*(_width-1)].Char.AsciiChar=200;
    _border[0].Attributes=_color;
    _border[_length-1].Attributes=_color;
    _border[_length*_width - 1].Attributes=_color;
    _border[_length*(_width-1)].Attributes=_color;
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),_border,bordersz,zerozero,&_rect);
}
//
void printpalette()
{
    COORD palettecoord={0,2},zerozero={0,0},colorpalettesz={1,8};
    CHAR_INFO colorpalette[8];
    SMALL_RECT colorpaletterect={1,3,1,11};
    int i;
    for(i=0;i<8;i++)
    {
        if(i==0)
        {
            colorpalette[i].Char.AsciiChar='?';
            colorpalette[i].Attributes=15;
        }
        else
        {
            colorpalette[i].Char.AsciiChar=219;
            colorpalette[i].Attributes=8+i;
        }
    }
    printborder(3,10,palettecoord,15);
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),colorpalette,colorpalettesz,zerozero,&colorpaletterect);
}
//
void printbrushpalette()
{
    COORD brushpalettecoord={0,12},zerozero={0,0},brushpalettesz={1,8};
    CHAR_INFO brushpalette[8];
    SMALL_RECT brushpaletterect={1,13,1,21};
    int i,arr[8]={219,4,249,35,42,111,177,63};
    for(i=0;i<8;i++)
    {
        brushpalette[i].Char.AsciiChar=arr[i];
        brushpalette[i].Attributes=15;
    }
    printborder(3,10,brushpalettecoord,15);
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),brushpalette,brushpalettesz,zerozero,&brushpaletterect);
}
//
void printmenu()
{
    char str1[5]="Save",str2[5]="Load",str3[6]="Clear", str4[5]="Help", str5[9]="Autofill",str6[5]="Undo", str7[13] = "Save as Text";
    int i;
    CHAR_INFO save[4],load[4],clear[5],help[4],autofill[8],undo[4],savetext[12];
    COORD sz={4,1},zerozero={0,0};
    SMALL_RECT rect={10,1,14,1};
    for(i=0;i<4;i++)
    {
        save[i].Char.AsciiChar=str1[i];
        save[i].Attributes=143;
        load[i].Char.AsciiChar=str2[i];
        load[i].Attributes=143;
        help[i].Char.AsciiChar=str4[i];
        help[i].Attributes=143;
        undo[i].Char.AsciiChar=str6[i];
        undo[i].Attributes=143;
    }
    for(i=0;i<5;i++)
    {
        clear[i].Char.AsciiChar=str3[i];
        clear[i].Attributes=143;
    }
    for(i=0;i<8;i++)
    {
        autofill[i].Char.AsciiChar=str5[i];
        autofill[i].Attributes=143;
    }
    for(i=0;i<12;i++)
    {
        savetext[i].Char.AsciiChar = str7[i];
        savetext[i].Attributes=143;
    }
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),save,sz,zerozero,&rect);
    rect.Left=16;
    rect.Right=20;
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),load,sz,zerozero,&rect);
    sz.X=5;
    rect.Left=22;
    rect.Right=27;
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),clear,sz,zerozero,&rect);
    sz.X=4;
    rect.Left=29;
    rect.Right=33;
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),help,sz,zerozero,&rect);
    sz.X=8;
    rect.Left=35;
    rect.Right=43;
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),autofill,sz,zerozero,&rect);
    sz.X=4;
    rect.Left=45;
    rect.Right=49;
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),undo,sz,zerozero,&rect);
    sz.X=12;
    rect.Left=51;
    rect.Right=63;
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),savetext,sz,zerozero,&rect);

}
//
void clear()
{
    int i,j;
    for(i=0;i<20;i++)
    {
        for(j=0;j<60;j++)
        {
            paintareamap[i][j]=0;
            paintcolormap[i][j]=15;
        }
    }
    updatescreen();
}
//
void updatescreen()
{
    int i,j;
    CHAR_INFO paintarea[1200];
    COORD zerozero={0,0},paintareasz={60,20};
    SMALL_RECT rect={10,3,70,23};
    for(i=0;i<20;i++)
    {
        for(j=0;j<60;j++)
        {
            paintarea[j+60*i].Char.AsciiChar=paintareamap[i][j];
            paintarea[j+60*i].Attributes=paintcolormap[i][j];
        }
    }
    WriteConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),paintarea,paintareasz,zerozero,&rect);
}
//
void saveimage()
{
    FILE *savefile;
    char filename[100];
    system("cls");
    printf("filename(without spaces): ");
    scanf("%s",&filename);
    strcat(filename,".aimg");
    savefile=fopen(filename,"wb");
    fwrite(paintareamap,sizeof(int),1200,savefile);
    fwrite(paintcolormap,sizeof(int),1200,savefile);
    fclose(savefile);
}
//
void tempsave()
{
    FILE *savefile;
    char filename[100]="temp";
    strcat(filename,".aimg");
    savefile=fopen(filename,"wb");
    fwrite(paintareamap,sizeof(int),1200,savefile);
    fwrite(paintcolormap,sizeof(int),1200,savefile);
    fclose(savefile);
}
//
void loadimage()
{
    FILE *savefile;
    char filename[100];
    system("cls");
    system("dir *.aimg");
    printf("Filename of file to be opened: ");
    scanf("%s",filename);
    strcat(filename,".aimg");
    savefile=fopen(filename,"rb");
    if(savefile==NULL)
    {
        system("cls");
        printf("File not found. Make sure your file is in the current working directory\n");
        system("pause");
    }
    else
    {
        fread(paintareamap,sizeof(int),1200,savefile);
        fread(paintcolormap,sizeof(int),1200,savefile);
    }
    fclose(savefile);
}
//
void tempload()
{
    FILE *savefile;
    char filename[100]="temp";
    strcat(filename,".aimg");
    savefile=fopen(filename,"rb");
    if(savefile==NULL)
    {
        system("cls");
        printf("File not found. Make sure your file is in the current working directory\n");
        system("pause");
    }
    else
    {
        fread(paintareamap,sizeof(int),1200,savefile);
        fread(paintcolormap,sizeof(int),1200,savefile);
    }
    fclose(savefile);
}
//
void printtitle()
{
    COORD titlepos={45,24};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),titlepos);
    printf("Written by: Shivam Shekhar");
    titlepos.X=0;
    titlepos.Y=0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),titlepos);
}
//
void help()
{
    system("cls");
    printf("click '?' to choose a custom color or a custom brush\n\nclick %c to choose eraser\n\n",177);
    system("pause");
}
//
void autofill(int x,int y,int brushcol,int brush,int targetcol,int targetbrush,int range)
{
   int i,j,count=0;
   for(i=y-range;i<=y+range;i++)
    {
        for(j=x-range;j<=x+range;j++)
        {
            if(i>-1 && i<20 && j>-1 && j<60)
            {
                if(paintareamap[i][j]==targetbrush && paintcolormap[i][j]==targetcol)
                {
                    paintareamap[i][j]=brush;
                    paintcolormap[i][j]=brushcol;
                    autofill(j,i,brushcol,brush,targetcol,targetbrush,1);
                }
            }
        }
    }
    updatescreen();
}
//
void saveastext()
{
    int i,j;
    FILE *savefile;
    char filename[100];
    system("cls");
    printf("filename(without spaces): ");
    scanf("%s",&filename);
    strcat(filename,".txt");
    savefile=fopen(filename,"w");
    for(i=0;i<20;i++)
    {
        for(j=0;j<60;j++)
            fprintf(savefile,"%c",paintareamap[i][j]);
        fprintf(savefile,"\n");

    }//fwrite(paintareamap,sizeof(int),1200,savefile);
    //fwrite(paintcolormap,sizeof(int),1200,savefile);
    fclose(savefile);

}
