#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <curl/curl.h>

int main(int argc, char* argv[]) {
    CURL* curl;
    CURLcode res;
    char postdata[100], name[30], project[50];

    printf("Your Name : ");
    scanf("%[^\n]", name);
    printf("Your Project : ");
    scanf("%[^\n]", project);

    sprintf(postdata, "name=%s&project=%s", name, project);

    curl_global_init(CURL_GLOBAL_ALL);

    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2002009/assignments/2020/ApplicationDevelopment/testCurl/testCurl.php");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_operation() failed : %s\n",
                curl_easy_strerror(res));
        }
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return 0;
}
