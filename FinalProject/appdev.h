#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

#define N 20
// add comment
// modified from GitHub
// modified from VS Code
typedef struct {
	int max;
	int min;
	char name[20];
}rock;

// this is for function prototypes
void send_data(rock);
