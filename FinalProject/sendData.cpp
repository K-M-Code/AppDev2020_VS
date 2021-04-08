#define _CRT_SECURE_NO_WARNINGS
#include "appdev.h"

void send_data(rock r) {
    CURL* curl;
    CURLcode res;
    char poststr[100];

    sprintf(poststr, "min=%d&max=%d&user=%s", r.min, r.max, r.name);

    curl_global_init(CURL_GLOBAL_ALL);

    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2002009/assignments/2020/ApplicationDevelopment/finalProject/record.php");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, poststr);
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_operation() failed : %s\n",
                curl_easy_strerror(res));
        }
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
}
