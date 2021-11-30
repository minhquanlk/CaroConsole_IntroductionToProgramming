#ifndef __GAME_H__
#define __GAME_H__
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

#define WIDTH 1400
#define HEIGHT 750
#define CO_THEME 7
#define BOARD 20
#define CHU 14 * 16 + 2
#define CK 5
#define LIST "list.txt"

void createconsole();
void console();
void gotoxy(int, int);
void SetColor(int);
void kebang();
int chuyenx(int);
int chuyeny(int);
void danhdau(int, int, int);
void Moveleft();
void Moveright();
void Moveup();
void Movedown();
void ResetData();
void lenhr();
void checkxeotp();
void checkxeopt();
void doc();
void ngang();
int thang();
int thoat();
int game(int, string, int, string[50]);
void grapdetect();
void BangDiem();
int nhapmenuload(int lenh, int l, int r);
void dichuyenmenuload(int dh, int k);
void about(int, int);
void help(int, int);
#endif

