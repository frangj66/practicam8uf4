#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>


/**
 * @file main.c
 * @brief Client de C que rep consumeix la API de PHP usant cURL
 * 
 * asdasdasdasdq23asda
 * 
 * @author FRANGJ
 * @date 2025
 */
 

size_t write_callback(void *ptr, size_t size, size_t nmemb, void *userdata) {
    fwrite(ptr, size, nmemb, stdout);
    return size * nmemb;
}

int main() {
    CURL *curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://0.0.0.0:8000/api.php");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

        res = curl_easy_perform(curl);

        if (res != CURLE_OK) {
            fprintf(stderr, "Error en cURL: %s\n", curl_easy_strerror(res));
        }

        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    return 0;
}

