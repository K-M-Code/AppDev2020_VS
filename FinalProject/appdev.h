#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

#define N 20
// add comment
typedef struct {
	int max;
	int min;
	char name[20];
}rock;

void send_data(rock);