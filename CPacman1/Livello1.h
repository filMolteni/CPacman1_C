#pragma once
#include "misureDiGioco.h"
#define CARAMELLA '.'
#define MURO '#'
#define PORTALED ']'
#define PORTALES '['
#define POWERUP '0'
#define VUOTO ' '

//da sistemare!!!! ( in base a righe e colonne ) 
char livello1[RIGHE][COLONNE] = {
	{MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,POWERUP   ,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO     ,MURO     ,MURO     ,CARAMELLA,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,CARAMELLA,MURO     ,MURO     ,MURO     ,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{PORTALES,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO     ,MURO     ,VUOTO    ,MURO     ,MURO    ,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,PORTALED},
	{PORTALES,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO     ,VUOTO     ,VUOTO   ,VUOTO    ,MURO    ,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,PORTALED},
	{PORTALES,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO     ,MURO     ,MURO     ,MURO     ,MURO    ,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,PORTALED},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,POWERUP  ,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO     ,MURO     ,MURO     ,CARAMELLA,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,MURO     ,CARAMELLA,MURO     ,MURO     ,MURO     ,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,CARAMELLA,CARAMELLA,CARAMELLA,POWERUP  ,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,POWERUP  ,CARAMELLA,CARAMELLA,CARAMELLA,CARAMELLA,MURO},
	{MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO,MURO},
};